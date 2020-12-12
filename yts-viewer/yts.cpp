#include "yts.h"

void YTSFuncs::LateFreeMem( Object^ obj ) {
	for( INT i = 0; i <= 4000; i++ ) {
		if( i >= 3999 )
			delete obj;
	}
}

//clean temporary folder
void YTSFuncs::Cleanup( void ) {
	if( !IO::Directory::Exists(TEMPFOLDER) )
		IO::Directory::CreateDirectory( TEMPFOLDER );
	else{
		array< String^ >^ files = IO::Directory::GetFiles( TEMPFOLDER );
		for( INT i = 0; i < files->Length; i++ ) {
			IO::File::Delete( files[i] );
		}
		delete[] files;
	}
}

//get page source
String^ YTSFuncs::GetHTML( String^ url ) {
	String^ output;
	if( IO::File::Exists(TEMPFOLDER+"\\page.dat") )
		IO::File::Delete( TEMPFOLDER+"\\page.dat" );
	URLDownloadToFileA( NULL, (char*)Marshal::StringToHGlobalAnsi(url).ToPointer(), (char*)Marshal::StringToHGlobalAnsi(TEMPFOLDER+"\\page.dat").ToPointer(), NULL, NULL );
	if( IO::File::Exists(TEMPFOLDER+"\\page.dat") ) {
		IO::StreamReader^ pHtmlFile = gcnew IO::StreamReader( TEMPFOLDER+"\\page.dat" );
		output = pHtmlFile->ReadToEnd();
		pHtmlFile->Close();
		delete pHtmlFile;
	}
	else{
		MessageBox::Show( "Unable to find "+url+"\nCheck the movie title specification rules\n\t...or maybe there's no such movie on yts?!", "Error" );
		output = "Error";
	}
	return output;
}

//get movie poster
Image^ YTSFuncs::GetMoviePoster( String^ html ) {
	INT y = html->IndexOf( "img-responsive" );
	INT iStart, iLen, iRandNum;
	for( INT i = y; i <= html->Length-y; i++ ) {
		if( html->Substring( i, 3 ) == "src" ) {
			iStart = i+5;
			for( INT x = iStart; x <= html->Length-y; x++ ) {
				if( html->Substring( x, 1 ) == "\"" ) {
					iLen = x-iStart;
					break;
				}
			}
			break;
		}
	}
	srand( time(NULL) );
	iRandNum = rand()%500;
	URLDownloadToFileA( NULL, (char*)Marshal::StringToHGlobalAnsi( html->Substring(iStart, iLen) ).ToPointer(), (char*)Marshal::StringToHGlobalAnsi( TEMPFOLDER+"\\poster"+iRandNum.ToString()+".dat" ).ToPointer(), NULL, NULL );
	return Image::FromFile( TEMPFOLDER+"\\poster"+iRandNum.ToString()+".dat" );;
}

String^ YTSFuncs::GetMovieYear( String^ title ) {
	String^ search_html;
	URLDownloadToFileA( NULL, (char*)Marshal::StringToHGlobalAnsi("https://www.google.com/search?hl=en-us&q="+title+"+movie").ToPointer(), (char*)Marshal::StringToHGlobalAnsi( TEMPFOLDER+"\\search.dat" ).ToPointer(), NULL, NULL );
	IO::StreamReader^ pSearchFile = gcnew IO::StreamReader( TEMPFOLDER+"\\search.dat" );
	search_html = pSearchFile->ReadToEnd();
	pSearchFile->Close();
	delete pSearchFile;
	return title+" "+search_html->Substring( search_html->IndexOf("film")-5, 4 );
}

//get movie description
String^ YTSFuncs::GetMovieDescription( String^ html ) {
	INT iStart, iLen;
	iStart = html->IndexOf( "<h3>Synopsis</h3>" )+60;
	for( INT i = iStart; i <= html->Length; i++ ) {
		if( html->Substring( i, 4 ) == "</p>" ) {
			iLen = i-iStart;
			break;
		}
	}
	return html->Substring( iStart, iLen );
}

//get imdb movie rating
String^ YTSFuncs::GetIMDBRating( String^ html ) {
	String^ rating = html->Substring( html->IndexOf( "ratingValue" )+13, 3 );
	if( !rating->Contains(".") ) {
		delete rating;
		return html->Substring( html->IndexOf( "ratingValue" )+13, 1 )+".0";
	}
	delete rating;
	return html->Substring( html->IndexOf( "ratingValue" )+13, 3 );
}

//get movie likes
String^ YTSFuncs::GetMovieLikes( String^ html ) {
	INT iStart, iLen;
	iStart = html->IndexOf( "movie-likes" )+13;
	for( INT i = iStart; i <= html->Length; i++ ) {
		if( html->Substring( i, 7 ) == "</span>" ) {
			iLen = i-iStart;
			break;
		}
	}
	return html->Substring( iStart, iLen );
}

//get a torrent file link
String^ YTSFuncs::GetTorrentLink( String^ html ) {
	//TODO: quality choice
	INT iStart, iLen;
	iStart = html->IndexOf( "Available in" )+35;
	for( INT i = iStart; i <= html->Length-iStart; i++ ) { //grab the first available link here
		if( html->Substring( i, 1 ) == "\"" ) {
			iLen = i-iStart;
			break;
		}
	}
	return html->Substring( iStart, iLen );
}

//get link to subtitles download page
String^ YTSFuncs::GetSubLink( String^ html ) {
	INT iStart, iLen;
	iStart = html->IndexOf( "yifysubtitles" )-8;
	for( INT i = iStart; i <= html->Length-iStart; i++ ) {
		if( html->Substring( i, 1 ) == "\"" ) {
			iLen = i-iStart;
			break;
		}
	}
	return html->Substring( iStart, iLen );
}

//generate a valid link from the title
String^ YTSFuncs::MakeLink( String^ title ) {
	String^ link = "https://yts.mx/movies/";
	array< wchar_t >^ space = { ' ' }; //separator
	array< String^ >^ components = title->Split( space, System::StringSplitOptions::None );
	for( INT i = 0; i < components->Length; i++ ) {
		if( i )
			link += "-"+components[i];
		else
			link += components[i];
	}
	delete[] space;
	delete[] components;
	return link->ToLower(); //link must be in lower case!
}

String^ YTSFuncs::MakeScreenshotLink( String^ title ) {
	String^ link = "https://img.yts.mx/assets/images/movies/";
	array< wchar_t >^ space = { ' ' }; //separator
	array< String^ >^ components = (title->Substring( 0, 1 )->ToUpper()+title->Substring( 1, title->Length-1 )->ToLower())->Split( space, System::StringSplitOptions::None );
	for( INT i = 0; i < components->Length; i++ ) {
		if( i )
			link += "_"+components[i];
		else
			link += components[i];
	}
	delete[] space;
	delete[] components;
	link += "/large-screenshot2.jpg";
	return link;
}