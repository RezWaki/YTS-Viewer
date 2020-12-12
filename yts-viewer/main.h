#include "yts.h"
#pragma once

namespace ytsviewer {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	public ref class main : public System::Windows::Forms::Form
	{
	public:
		main(void)
		{
			InitializeComponent();
		}

	protected:
		~main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::PictureBox^  pictureBox1;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox2;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::PictureBox^  pictureBox3;
	private: System::Windows::Forms::RichTextBox^  richTextBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::CheckBox^  checkBox1;
	private: System::Windows::Forms::PictureBox^  pictureBox4;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::PictureBox^  pictureBox5;
	private: System::Windows::Forms::NotifyIcon^  notifyIcon1;

	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  showToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  exitToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(main::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->richTextBox1 = (gcnew System::Windows::Forms::RichTextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->checkBox1 = (gcnew System::Windows::Forms::CheckBox());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->notifyIcon1 = (gcnew System::Windows::Forms::NotifyIcon(this->components));
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->showToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->exitToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->BeginInit();
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(199)), 
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->label1->Location = System::Drawing::Point(166, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(138, 22);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Movie search:";
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(0, 0);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(160, 38);
			this->pictureBox1->TabIndex = 1;
			this->pictureBox1->TabStop = false;
			// 
			// textBox1
			// 
			this->textBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->textBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)), 
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->textBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(145)), static_cast<System::Int32>(static_cast<System::Byte>(145)), 
				static_cast<System::Int32>(static_cast<System::Byte>(145)));
			this->textBox1->Location = System::Drawing::Point(310, 9);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(271, 25);
			this->textBox1->TabIndex = 2;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &main::textBox1_KeyDown);
			// 
			// pictureBox2
			// 
			this->pictureBox2->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->pictureBox2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->pictureBox2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox2.Image")));
			this->pictureBox2->Location = System::Drawing::Point(587, 9);
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->Size = System::Drawing::Size(25, 25);
			this->pictureBox2->TabIndex = 3;
			this->pictureBox2->TabStop = false;
			this->pictureBox2->Click += gcnew System::EventHandler(this, &main::pictureBox2_Click);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(199)), 
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->label2->Location = System::Drawing::Point(0, 46);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(85, 22);
			this->label2->TabIndex = 4;
			this->label2->Text = L"%TITLE%";
			this->label2->Visible = false;
			// 
			// pictureBox3
			// 
			this->pictureBox3->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox3->Location = System::Drawing::Point(0, 75);
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->Size = System::Drawing::Size(100, 50);
			this->pictureBox3->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox3->TabIndex = 5;
			this->pictureBox3->TabStop = false;
			this->pictureBox3->Visible = false;
			// 
			// richTextBox1
			// 
			this->richTextBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left) 
				| System::Windows::Forms::AnchorStyles::Right));
			this->richTextBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)), 
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->richTextBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->richTextBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->richTextBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(199)), 
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->richTextBox1->Location = System::Drawing::Point(241, 75);
			this->richTextBox1->Name = L"richTextBox1";
			this->richTextBox1->ReadOnly = true;
			this->richTextBox1->Size = System::Drawing::Size(371, 255);
			this->richTextBox1->TabIndex = 6;
			this->richTextBox1->Text = L"";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button1->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button1->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button1->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button1->ForeColor = System::Drawing::Color::White;
			this->button1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button1.Image")));
			this->button1->Location = System::Drawing::Point(4, 428);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(224, 26);
			this->button1->TabIndex = 7;
			this->button1->Text = L"  Download movie";
			this->button1->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button1->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Visible = false;
			this->button1->Click += gcnew System::EventHandler(this, &main::button1_Click);
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), static_cast<System::Int32>(static_cast<System::Byte>(192)), 
				static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button2->Cursor = System::Windows::Forms::Cursors::Hand;
			this->button2->FlatAppearance->BorderColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->FlatAppearance->MouseDownBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(128)), 
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)));
			this->button2->FlatAppearance->MouseOverBackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(106)), 
				static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(69)));
			this->button2->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button2->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->button2->ForeColor = System::Drawing::Color::White;
			this->button2->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"button2.Image")));
			this->button2->Location = System::Drawing::Point(4, 460);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(224, 26);
			this->button2->TabIndex = 8;
			this->button2->Text = L"  Download subtitles";
			this->button2->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			this->button2->TextImageRelation = System::Windows::Forms::TextImageRelation::ImageBeforeText;
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &main::button2_Click);
			// 
			// label3
			// 
			this->label3->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label3->ForeColor = System::Drawing::Color::Blue;
			this->label3->Location = System::Drawing::Point(4, 489);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(224, 14);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Copy the movie link to the clipboard";
			this->label3->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label3->Visible = false;
			this->label3->Click += gcnew System::EventHandler(this, &main::label3_Click);
			this->label3->MouseEnter += gcnew System::EventHandler(this, &main::link_MouseEnter);
			this->label3->MouseLeave += gcnew System::EventHandler(this, &main::link_MouseLeave);
			// 
			// label4
			// 
			this->label4->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label4->ForeColor = System::Drawing::Color::Blue;
			this->label4->Location = System::Drawing::Point(4, 503);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(224, 14);
			this->label4->TabIndex = 10;
			this->label4->Text = L"Copy the subtitles page link to the clipboard";
			this->label4->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->label4->Visible = false;
			this->label4->Click += gcnew System::EventHandler(this, &main::label4_Click);
			this->label4->MouseEnter += gcnew System::EventHandler(this, &main::link_MouseEnter);
			this->label4->MouseLeave += gcnew System::EventHandler(this, &main::link_MouseLeave);
			// 
			// label5
			// 
			this->label5->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->label5->Cursor = System::Windows::Forms::Cursors::Hand;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->label5->ForeColor = System::Drawing::Color::Blue;
			this->label5->Location = System::Drawing::Point(12, 525);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(224, 14);
			this->label5->TabIndex = 11;
			this->label5->Text = L"Visit author\'s GitHub";
			this->label5->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->label5->Click += gcnew System::EventHandler(this, &main::label5_Click);
			this->label5->MouseEnter += gcnew System::EventHandler(this, &main::link_MouseEnter);
			this->label5->MouseLeave += gcnew System::EventHandler(this, &main::link_MouseLeave);
			// 
			// checkBox1
			// 
			this->checkBox1->AutoSize = true;
			this->checkBox1->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)), 
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->checkBox1->Checked = true;
			this->checkBox1->CheckState = System::Windows::Forms::CheckState::Checked;
			this->checkBox1->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->checkBox1->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(117)), static_cast<System::Int32>(static_cast<System::Byte>(199)), 
				static_cast<System::Int32>(static_cast<System::Byte>(78)));
			this->checkBox1->Location = System::Drawing::Point(170, 30);
			this->checkBox1->Name = L"checkBox1";
			this->checkBox1->Size = System::Drawing::Size(93, 18);
			this->checkBox1->TabIndex = 12;
			this->checkBox1->Text = L"Get the year";
			this->checkBox1->UseVisualStyleBackColor = false;
			// 
			// pictureBox4
			// 
			this->pictureBox4->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox4.Image")));
			this->pictureBox4->Location = System::Drawing::Point(234, 436);
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->Size = System::Drawing::Size(41, 18);
			this->pictureBox4->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox4->TabIndex = 13;
			this->pictureBox4->TabStop = false;
			this->pictureBox4->Visible = false;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label6->ForeColor = System::Drawing::Color::White;
			this->label6->Location = System::Drawing::Point(276, 437);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(87, 17);
			this->label6->TabIndex = 14;
			this->label6->Text = L"%RATING%";
			this->label6->Visible = false;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Lucida Sans", 11.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->label7->ForeColor = System::Drawing::Color::White;
			this->label7->Location = System::Drawing::Point(256, 469);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(70, 17);
			this->label7->TabIndex = 16;
			this->label7->Text = L"%LIKES%";
			this->label7->Visible = false;
			// 
			// pictureBox5
			// 
			this->pictureBox5->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox5.Image")));
			this->pictureBox5->Location = System::Drawing::Point(234, 468);
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->Size = System::Drawing::Size(20, 16);
			this->pictureBox5->SizeMode = System::Windows::Forms::PictureBoxSizeMode::AutoSize;
			this->pictureBox5->TabIndex = 15;
			this->pictureBox5->TabStop = false;
			this->pictureBox5->Visible = false;
			// 
			// notifyIcon1
			// 
			this->notifyIcon1->ContextMenuStrip = this->contextMenuStrip1;
			this->notifyIcon1->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"notifyIcon1.Icon")));
			this->notifyIcon1->Text = L"YTS Viewer";
			this->notifyIcon1->Visible = true;
			this->notifyIcon1->MouseDoubleClick += gcnew System::Windows::Forms::MouseEventHandler(this, &main::notifyIcon1_MouseDoubleClick);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(204)));
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->showToolStripMenuItem, 
				this->exitToolStripMenuItem});
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->RenderMode = System::Windows::Forms::ToolStripRenderMode::System;
			this->contextMenuStrip1->ShowImageMargin = false;
			this->contextMenuStrip1->Size = System::Drawing::Size(81, 48);
			// 
			// showToolStripMenuItem
			// 
			this->showToolStripMenuItem->Name = L"showToolStripMenuItem";
			this->showToolStripMenuItem->Size = System::Drawing::Size(80, 22);
			this->showToolStripMenuItem->Text = L"Show";
			this->showToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::showToolStripMenuItem_Click);
			// 
			// exitToolStripMenuItem
			// 
			this->exitToolStripMenuItem->Name = L"exitToolStripMenuItem";
			this->exitToolStripMenuItem->Size = System::Drawing::Size(80, 22);
			this->exitToolStripMenuItem->Text = L"Exit";
			this->exitToolStripMenuItem->Click += gcnew System::EventHandler(this, &main::exitToolStripMenuItem_Click);
			// 
			// main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(29)), static_cast<System::Int32>(static_cast<System::Byte>(29)), 
				static_cast<System::Int32>(static_cast<System::Byte>(29)));
			this->ClientSize = System::Drawing::Size(624, 548);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->pictureBox5);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->pictureBox4);
			this->Controls->Add(this->checkBox1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->richTextBox1);
			this->Controls->Add(this->pictureBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->pictureBox2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedSingle;
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"main";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"YTS Viewer";
			this->FormClosing += gcnew System::Windows::Forms::FormClosingEventHandler(this, &main::main_FormClosing);
			this->Load += gcnew System::EventHandler(this, &main::main_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox2))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox3))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox5))->EndInit();
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	String^ html;

	void PerformSearch( void ) {
		//in "lite" version we won't parse the movie year in order to economy speed
		/*#ifdef LITE
			html = YTSFuncs::GetHTML( YTSFuncs::MakeLink(textBox1->Text) );
		#else
			html = YTSFuncs::GetHTML( YTSFuncs::MakeLink(YTSFuncs::GetMovieYear(textBox1->Text)) );
		#endif*/
		//if we dont wanna parse the move year...
		if( !checkBox1->Checked )
			html = YTSFuncs::GetHTML( YTSFuncs::MakeLink(textBox1->Text) );
		else
			html = YTSFuncs::GetHTML( YTSFuncs::MakeLink(YTSFuncs::GetMovieYear(textBox1->Text)) );
		if( html == "Error" ) return; //if somethings wrong fuck it, wont load
		delete( pictureBox3->Image );
		delete( label6->Text );
		delete( label7->Text );
		delete( label2->Text );
		if( !checkBox1->Checked )
			label2->Text = textBox1->Text->ToUpper();
		else
			label2->Text = YTSFuncs::GetMovieYear( textBox1->Text )->ToUpper();
		label2->Visible = TRUE;
		pictureBox3->Image = YTSFuncs::GetMoviePoster( html );
		pictureBox3->Visible = TRUE;
		button1->Visible = TRUE;
		button2->Visible = TRUE;
		label3->Visible = TRUE;
		label4->Visible = TRUE;
		richTextBox1->Text = YTSFuncs::GetMovieDescription( html );
		label6->Text = YTSFuncs::GetIMDBRating( html );
		label7->Text = YTSFuncs::GetMovieLikes( html );
		label6->Visible = TRUE;
		label7->Visible = TRUE;
		pictureBox4->Visible = TRUE;
		pictureBox5->Visible = TRUE;
	}

	void link_MouseEnter(System::Object^  sender, System::EventArgs^  e) {
		((Label^)sender)->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Underline, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(204)));
	}
	void link_MouseLeave(System::Object^  sender, System::EventArgs^  e) {
		((Label^)sender)->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
			static_cast<System::Byte>(204)));
	}
	//tray icon
	void notifyIcon1_MouseDoubleClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		this->Show();
	}
	//tray popup menu
	void showToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Show();
	}
	void exitToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		exit( FALSE );
	}

	void main_Load(System::Object^  sender, System::EventArgs^  e) {
		DoubleBuffered = TRUE;
		YTSFuncs::Cleanup(); //perform a cleanup from previous shits
	}
	void pictureBox2_Click(System::Object^  sender, System::EventArgs^  e) {
		PerformSearch();
	}
	void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		Diagnostics::Process::Start( YTSFuncs::GetTorrentLink(html) );
	}
	void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		Diagnostics::Process::Start( YTSFuncs::GetSubLink(html) );
	}
	void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if( e->KeyData == Keys::Return ) //enter key
			PerformSearch();
	}
	void label3_Click(System::Object^  sender, System::EventArgs^  e) {
		Clipboard::SetText( YTSFuncs::GetTorrentLink(html) );
	}
	void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		Clipboard::SetText( YTSFuncs::GetSubLink(html) );
	}
	void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		Diagnostics::Process::Start( "https://github.com/rezwaki?tab=repositories" );
	}
	void main_FormClosing(System::Object^  sender, System::Windows::Forms::FormClosingEventArgs^  e) {
		e->Cancel = TRUE;
		delete( pictureBox3->Image );
		richTextBox1->Text = String::Empty;
		delete( label6->Text );
		delete( label7->Text );
		delete( label2->Text );
		this->Hide();
		pictureBox3->Visible = FALSE;
		label2->Visible = FALSE;
		pictureBox3->Visible = FALSE;
		button1->Visible = FALSE;
		button2->Visible = FALSE;
		label3->Visible = FALSE;
		label4->Visible = FALSE;
		label6->Visible = FALSE;
		label7->Visible = FALSE;
		pictureBox4->Visible = FALSE;
		pictureBox5->Visible = FALSE;
	}
};
}