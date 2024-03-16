#pragma once

#include <string>
#include <filesystem>
#include <map>
#include <iostream>
#include <SortingLib.h>
using namespace System;

void MarshalString(String^ s, std::string& os) 
{
	using namespace Runtime::InteropServices;
	const char* chars =
		(const char*)(Marshal::StringToHGlobalAnsi(s)).ToPointer();
	os = chars;
	Marshal::FreeHGlobal(IntPtr((void*)chars));
}

namespace CppCLRWinFormsProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	namespace fs = std::filesystem;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}







	private: System::Windows::Forms::Button^ b_exit;
	private: System::Windows::Forms::Label^ label_c;


	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ text_path;
	private: System::Windows::Forms::Button^ button_exit;
	private: System::Windows::Forms::Button^ button_sorting;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Label^ label_console;
	private: System::Windows::Forms::Label^ label_cat;
	private: System::Windows::Forms::Label^ label_papk;

	private: System::Windows::Forms::Panel^ panel2;
	private: System::Windows::Forms::Panel^ panel3;
	private: System::Windows::Forms::Label^ label_s;



	private: System::Windows::Forms::Panel^ panel4;
	private: System::Windows::Forms::Label^ label_status;
	private: System::Windows::Forms::ProgressBar^ status;













	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->b_exit = (gcnew System::Windows::Forms::Button());
			this->label_c = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->text_path = (gcnew System::Windows::Forms::TextBox());
			this->button_exit = (gcnew System::Windows::Forms::Button());
			this->button_sorting = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->label_console = (gcnew System::Windows::Forms::Label());
			this->label_cat = (gcnew System::Windows::Forms::Label());
			this->label_papk = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->label_s = (gcnew System::Windows::Forms::Label());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->label_status = (gcnew System::Windows::Forms::Label());
			this->status = (gcnew System::Windows::Forms::ProgressBar());
			this->SuspendLayout();
			// 
			// b_exit
			// 
			this->b_exit->BackColor = System::Drawing::Color::Transparent;
			this->b_exit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->b_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->b_exit->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 7.799999F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->b_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->b_exit->Location = System::Drawing::Point(958, 12);
			this->b_exit->Name = L"b_exit";
			this->b_exit->Size = System::Drawing::Size(30, 30);
			this->b_exit->TabIndex = 7;
			this->b_exit->Text = L"X";
			this->b_exit->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->b_exit->UseVisualStyleBackColor = false;
			this->b_exit->Click += gcnew System::EventHandler(this, &Form1::b_exit_Click);
			// 
			// label_c
			// 
			this->label_c->BackColor = System::Drawing::Color::Transparent;
			this->label_c->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->label_c->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label_c->Location = System::Drawing::Point(383, 80);
			this->label_c->Name = L"label_c";
			this->label_c->Size = System::Drawing::Size(570, 29);
			this->label_c->TabIndex = 7;
			this->label_c->Text = L"Начало работы программы";
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->label1->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label1->Location = System::Drawing::Point(32, 172);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(275, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Укажите путь";
			// 
			// text_path
			// 
			this->text_path->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(7)), static_cast<System::Int32>(static_cast<System::Byte>(19)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->text_path->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->text_path->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->text_path->ForeColor = System::Drawing::SystemColors::Window;
			this->text_path->Location = System::Drawing::Point(33, 213);
			this->text_path->Name = L"text_path";
			this->text_path->Size = System::Drawing::Size(274, 23);
			this->text_path->TabIndex = 2;
			// 
			// button_exit
			// 
			this->button_exit->BackColor = System::Drawing::Color::Transparent;
			this->button_exit->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Black;
			this->button_exit->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button_exit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_exit->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 7.799999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_exit->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_exit->Location = System::Drawing::Point(176, 264);
			this->button_exit->Name = L"button_exit";
			this->button_exit->Size = System::Drawing::Size(131, 27);
			this->button_exit->TabIndex = 6;
			this->button_exit->Text = L"Выход";
			this->button_exit->TextImageRelation = System::Windows::Forms::TextImageRelation::TextBeforeImage;
			this->button_exit->UseVisualStyleBackColor = false;
			this->button_exit->Click += gcnew System::EventHandler(this, &Form1::button_exit_Click);
			// 
			// button_sorting
			// 
			this->button_sorting->BackColor = System::Drawing::Color::Transparent;
			this->button_sorting->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Black;
			this->button_sorting->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->button_sorting->Font = (gcnew System::Drawing::Font(L"Miriam Libre", 7.799999F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_sorting->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button_sorting->Location = System::Drawing::Point(33, 264);
			this->button_sorting->Name = L"button_sorting";
			this->button_sorting->Size = System::Drawing::Size(131, 27);
			this->button_sorting->TabIndex = 3;
			this->button_sorting->Text = L"Выполнить";
			this->button_sorting->UseVisualStyleBackColor = false;
			this->button_sorting->Click += gcnew System::EventHandler(this, &Form1::button_sorting_Click);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::White;
			this->panel1->Location = System::Drawing::Point(33, 246);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(274, 2);
			this->panel1->TabIndex = 8;
			// 
			// label_console
			// 
			this->label_console->BackColor = System::Drawing::Color::Transparent;
			this->label_console->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->label_console->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label_console->Location = System::Drawing::Point(383, 213);
			this->label_console->Name = L"label_console";
			this->label_console->Size = System::Drawing::Size(570, 194);
			this->label_console->TabIndex = 9;
			// 
			// label_cat
			// 
			this->label_cat->BackColor = System::Drawing::Color::Transparent;
			this->label_cat->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 12.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->label_cat->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label_cat->Location = System::Drawing::Point(383, 131);
			this->label_cat->Name = L"label_cat";
			this->label_cat->Size = System::Drawing::Size(570, 29);
			this->label_cat->TabIndex = 10;
			// 
			// label_papk
			// 
			this->label_papk->BackColor = System::Drawing::Color::Transparent;
			this->label_papk->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->label_papk->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label_papk->Location = System::Drawing::Point(383, 169);
			this->label_papk->Name = L"label_papk";
			this->label_papk->Size = System::Drawing::Size(570, 29);
			this->label_papk->TabIndex = 11;
			this->label_papk->Text = L"Список созданых папок:";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::White;
			this->panel2->Location = System::Drawing::Point(388, 104);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(565, 2);
			this->panel2->TabIndex = 9;
			// 
			// panel3
			// 
			this->panel3->BackColor = System::Drawing::Color::White;
			this->panel3->Location = System::Drawing::Point(388, 195);
			this->panel3->Name = L"panel3";
			this->panel3->Size = System::Drawing::Size(565, 2);
			this->panel3->TabIndex = 10;
			// 
			// label_s
			// 
			this->label_s->BackColor = System::Drawing::Color::Transparent;
			this->label_s->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->label_s->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label_s->Location = System::Drawing::Point(383, 482);
			this->label_s->Name = L"label_s";
			this->label_s->Size = System::Drawing::Size(570, 29);
			this->label_s->TabIndex = 12;
			this->label_s->Text = L"Статус выполнения программы";
			// 
			// panel4
			// 
			this->panel4->BackColor = System::Drawing::Color::White;
			this->panel4->Location = System::Drawing::Point(387, 506);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(565, 2);
			this->panel4->TabIndex = 10;
			// 
			// label_status
			// 
			this->label_status->BackColor = System::Drawing::Color::Transparent;
			this->label_status->Font = (gcnew System::Drawing::Font(L"Miriam CLM", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(177)));
			this->label_status->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->label_status->Location = System::Drawing::Point(384, 522);
			this->label_status->Name = L"label_status";
			this->label_status->Size = System::Drawing::Size(570, 29);
			this->label_status->TabIndex = 13;
			// 
			// status
			// 
			this->status->Location = System::Drawing::Point(33, 316);
			this->status->Name = L"status";
			this->status->Size = System::Drawing::Size(274, 10);
			this->status->TabIndex = 14;
			this->status->Visible = false;
			// 
			// Form1
			// 
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::None;
			this->BackColor = System::Drawing::Color::Black;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->ClientSize = System::Drawing::Size(1000, 600);
			this->Controls->Add(this->status);
			this->Controls->Add(this->label_status);
			this->Controls->Add(this->panel4);
			this->Controls->Add(this->label_s);
			this->Controls->Add(this->panel3);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->label_papk);
			this->Controls->Add(this->label_cat);
			this->Controls->Add(this->label_console);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button_sorting);
			this->Controls->Add(this->label_c);
			this->Controls->Add(this->button_exit);
			this->Controls->Add(this->b_exit);
			this->Controls->Add(this->text_path);
			this->Controls->Add(this->label1);
			this->Cursor = System::Windows::Forms::Cursors::Arrow;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"Form1";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Sorting";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	/*public:

		void console_out(const std::string& strn)
		{
			String^ str;
			str = gcnew String(strn.c_str());
			this->console->Text += str + "\n";
		}*/

	private:
		
		System::Void button_sorting_Click(System::Object^ sender, System::EventArgs^ e) 
		{
			status->Visible = true;
			std::string path;
			MarshalString(this->text_path->Text, path);

			std::vector<std::string> files;
			std::multimap<std::string, std::string> collection;

			// Записываем имена файлов
			for (const auto& entry : fs::directory_iterator(path))
			{
				if (!entry.is_directory())
				{
					files.push_back(entry.path().string().substr(path.size()));
				}
			}

			status->Value = 10;

			int pos;
			std::pair<std::string, std::string> value;
			std::vector<std::string> keys;

			// Создаём коллекцию
			for (auto& el : files)
			{
				pos = el.find_last_of('.');

				value.first = el.substr(pos + 1);
				value.second = el.substr(0, pos);

				collection.insert(value);
				keys.push_back(value.first);
			}

			status->Value = 20;

			size_t count = 0;
			size_t i = 0;
			std::vector<std::string> cat;
			bool flag;

			cat.push_back(keys[0]);

			String^ str;

			// Разделяем на категории
			for (auto& el : keys)
			{
				for (size_t i = 0; i < cat.size(); i++)
				{
					if (el == cat[i])
					{
						flag = 0;
						break;
					}
					else
					{
						flag = 1;
					}
				}

				if (flag)
				{
					cat.push_back(el);
				}
			}

			status->Value = 80;

			// Создаём папки
			for (auto& el : cat)
			{
				str = gcnew String(el.c_str());
				this->label_console->Text += str + "\n";

				//Поток
				std::thread threadObj(create_dir, path + "\\" + el);
				threadObj.join();
			}

			status->Value = 70;

			this->label_cat->Text = "Найдено " + cat.size() + " категорий";
			
			// Сортировка
			for (auto& el : collection)
			{
				for (auto& c : cat)
				{
					if (el.first == c)
					{
						//Перемещение файлов в потоке
						std::thread threadObj(move_file, path + "\\" + el.second + "." + el.first, 
							                             path + "\\" + c + "\\" + el.second + "." + el.first);
						threadObj.join();
					}
				}
			}
			status->Value = 100;
			this->label_status->Text = "Выполнено";
			status->Visible = false;
		}
private: 
	System::Void button_exit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
private: 
	System::Void b_exit_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		this->Close();
	}
};
}
