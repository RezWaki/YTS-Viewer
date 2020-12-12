#include <Windows.h>
#include <msclr\marshal.h>
#include <ctime>
#define TEMPFOLDER "C:\\WINDOWS\\Temp\\YTSVW" //temporary folder for storing all temporary data :+)
//change it if u dont have "Administrator" rights on your PC
//WINDOWS folder is a holy grail of win, unless you're an Administrator user

using namespace System;
using namespace System::Windows::Forms;
using namespace System::Drawing;
using namespace msclr::interop;
using namespace System::Runtime::InteropServices;

//all info is being parsed from yts.mx, except the movie year,
//that one is got from google

namespace YTSFuncs{
	void Cleanup( void );
	void LateFreeMem( Object^ obj );
	String^ GetMovieYear( String^ title ); //parse the movie year, not for lite version
	String^ GetHTML( String^ url ); //get page source
	Image^ GetMoviePoster( String^ html ); //load a movie poster
	Image^ GetMovieBackground( String^ link ); //blurred
	String^ GetIMDBRating( String^ html ); //get imdb movie rating
	String^ GetMovieLikes( String^ html ); //get movie likes
	String^ MakeLink( String^ title ); //make a valid link
	String^ MakeScreenshotLink( String^ title ); //make a valid screenshot link
	String^ GetMovieDescription( String^ html ); //get movie description
	String^ GetTorrentLink( String^ html ); //get torrent file link
	String^ GetSubLink( String^ html ); //get link to subtitles download page
};