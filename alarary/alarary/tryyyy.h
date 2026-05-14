#pragma once

namespace alarary {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;

	public ref class tryyyy : public System::Windows::Forms::Form
	{
	public:
		tryyyy(void)
		{
			InitializeComponent();
		}

	protected:
		~tryyyy()
		{
			if (components)
			{
				delete components;
			}
		}






	private: System::Windows::Forms::Panel^ header;










	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::PictureBox^ pictureBox5;










	private: System::Windows::Forms::Button^ button1;






























	private: System::Windows::Forms::Panel^ panel_bills;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::Panel^ panel_dashboard;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button9;

	private: System::Windows::Forms::Panel^ panel_categories;
	private: System::Windows::Forms::Panel^ subitem;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::PictureBox^ pictureBox3;
	private: System::Windows::Forms::Panel^ subcat;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Button^ button7;
	private: System::Windows::Forms::Panel^ subill;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::PictureBox^ pictureBox2;
	private: System::Windows::Forms::Panel^ subdash;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::PictureBox^ pictureBox4;
	private: System::Windows::Forms::PictureBox^ pictureBox6;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Panel^ panel_items;
private: Guna::UI::WinForms::GunaElipse^ gunaElipse1;
private: Guna::UI::WinForms::GunaElipse^ gunaElipse2;

private: System::Windows::Forms::Panel^ panel2;
private: System::Windows::Forms::Button^ button14;
private: System::Windows::Forms::Button^ button12;
private: System::Windows::Forms::Button^ button10;
private: System::Windows::Forms::Button^ button13;
private: System::Windows::Forms::Button^ button11;
private: System::Windows::Forms::FolderBrowserDialog^ folderBrowserDialog1;
private: System::Windows::Forms::Panel^ panel3;
private: System::Windows::Forms::Button^ button8;
private: Guna::UI::WinForms::GunaElipse^ gunaElipse3;
private: Guna::UI::WinForms::GunaElipse^ gunaElipse4;
private: Guna::UI::WinForms::GunaElipse^ gunaElipse5;
private: Guna::UI::WinForms::GunaElipse^ gunaElipse6;
private: Guna::UI::WinForms::GunaElipse^ gunaElipse7;






































































private: System::ComponentModel::IContainer^ components;


































	protected:

	private:



#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(tryyyy::typeid));
			this->header = (gcnew System::Windows::Forms::Panel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->pictureBox5 = (gcnew System::Windows::Forms::PictureBox());
			this->panel_bills = (gcnew System::Windows::Forms::Panel());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->panel_dashboard = (gcnew System::Windows::Forms::Panel());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->panel_categories = (gcnew System::Windows::Forms::Panel());
			this->subitem = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->pictureBox3 = (gcnew System::Windows::Forms::PictureBox());
			this->subcat = (gcnew System::Windows::Forms::Panel());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->subill = (gcnew System::Windows::Forms::Panel());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->pictureBox2 = (gcnew System::Windows::Forms::PictureBox());
			this->subdash = (gcnew System::Windows::Forms::Panel());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->pictureBox4 = (gcnew System::Windows::Forms::PictureBox());
			this->pictureBox6 = (gcnew System::Windows::Forms::PictureBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel_items = (gcnew System::Windows::Forms::Panel());
			this->panel3 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->button14 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->gunaElipse1 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->gunaElipse2 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->folderBrowserDialog1 = (gcnew System::Windows::Forms::FolderBrowserDialog());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->gunaElipse3 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->gunaElipse4 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->gunaElipse5 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->gunaElipse6 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->gunaElipse7 = (gcnew Guna::UI::WinForms::GunaElipse(this->components));
			this->header->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->BeginInit();
			this->panel_bills->SuspendLayout();
			this->panel_dashboard->SuspendLayout();
			this->panel_categories->SuspendLayout();
			this->subitem->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->BeginInit();
			this->subcat->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->subill->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->BeginInit();
			this->subdash->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel_items->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// header
			// 
			this->header->BackColor = System::Drawing::Color::MediumTurquoise;
			this->header->Controls->Add(this->button1);
			this->header->Controls->Add(this->label5);
			this->header->Controls->Add(this->pictureBox5);
			resources->ApplyResources(this->header, L"header");
			this->header->Name = L"header";
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->button1, L"button1");
			this->button1->FlatAppearance->BorderSize = 0;
			this->button1->Name = L"button1";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &tryyyy::button1_Click);
			// 
			// label5
			// 
			resources->ApplyResources(this->label5, L"label5");
			this->label5->ForeColor = System::Drawing::SystemColors::ActiveCaptionText;
			this->label5->Name = L"label5";
			this->label5->Click += gcnew System::EventHandler(this, &tryyyy::label5_Click);
			// 
			// pictureBox5
			// 
			resources->ApplyResources(this->pictureBox5, L"pictureBox5");
			this->pictureBox5->Name = L"pictureBox5";
			this->pictureBox5->TabStop = false;
			// 
			// panel_bills
			// 
			this->panel_bills->Controls->Add(this->label3);
			resources->ApplyResources(this->panel_bills, L"panel_bills");
			this->panel_bills->Name = L"panel_bills";
			// 
			// label3
			// 
			resources->ApplyResources(this->label3, L"label3");
			this->label3->Name = L"label3";
			this->label3->Click += gcnew System::EventHandler(this, &tryyyy::label3_Click_1);
			// 
			// panel_dashboard
			// 
			this->panel_dashboard->Controls->Add(this->label4);
			resources->ApplyResources(this->panel_dashboard, L"panel_dashboard");
			this->panel_dashboard->Name = L"panel_dashboard";
			// 
			// label4
			// 
			resources->ApplyResources(this->label4, L"label4");
			this->label4->Name = L"label4";
			// 
			// label1
			// 
			resources->ApplyResources(this->label1, L"label1");
			this->label1->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label1->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label1->Name = L"label1";
			// 
			// label2
			// 
			resources->ApplyResources(this->label2, L"label2");
			this->label2->Name = L"label2";
			// 
			// button9
			// 
			this->button9->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->button9, L"button9");
			this->button9->FlatAppearance->BorderSize = 0;
			this->button9->Name = L"button9";
			this->button9->UseVisualStyleBackColor = false;
			// 
			// panel_categories
			// 
			this->panel_categories->Controls->Add(this->button8);
			this->panel_categories->Controls->Add(this->button9);
			this->panel_categories->Controls->Add(this->label2);
			this->panel_categories->Controls->Add(this->label1);
			resources->ApplyResources(this->panel_categories, L"panel_categories");
			this->panel_categories->Name = L"panel_categories";
			// 
			// subitem
			// 
			this->subitem->BackColor = System::Drawing::Color::Teal;
			this->subitem->Controls->Add(this->button6);
			this->subitem->Controls->Add(this->pictureBox3);
			resources->ApplyResources(this->subitem, L"subitem");
			this->subitem->Name = L"subitem";
			this->subitem->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &tryyyy::panel4_Paint);
			// 
			// button6
			// 
			this->button6->BackColor = System::Drawing::Color::Transparent;
			this->button6->CausesValidation = false;
			this->button6->FlatAppearance->BorderSize = 0;
			this->button6->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button6->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->button6, L"button6");
			this->button6->ForeColor = System::Drawing::Color::Transparent;
			this->button6->Name = L"button6";
			this->button6->TabStop = false;
			this->button6->UseVisualStyleBackColor = false;
			this->button6->Click += gcnew System::EventHandler(this, &tryyyy::button6_Click);
			// 
			// pictureBox3
			// 
			resources->ApplyResources(this->pictureBox3, L"pictureBox3");
			this->pictureBox3->Name = L"pictureBox3";
			this->pictureBox3->TabStop = false;
			// 
			// subcat
			// 
			this->subcat->Controls->Add(this->pictureBox1);
			this->subcat->Controls->Add(this->button7);
			resources->ApplyResources(this->subcat, L"subcat");
			this->subcat->Name = L"subcat";
			// 
			// pictureBox1
			// 
			resources->ApplyResources(this->pictureBox1, L"pictureBox1");
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->TabStop = false;
			// 
			// button7
			// 
			this->button7->BackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->BorderSize = 0;
			this->button7->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button7->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->button7, L"button7");
			this->button7->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button7->Name = L"button7";
			this->button7->TabStop = false;
			this->button7->UseVisualStyleBackColor = false;
			this->button7->Click += gcnew System::EventHandler(this, &tryyyy::button7_Click);
			// 
			// subill
			// 
			this->subill->Controls->Add(this->button5);
			this->subill->Controls->Add(this->pictureBox2);
			resources->ApplyResources(this->subill, L"subill");
			this->subill->Name = L"subill";
			// 
			// button5
			// 
			this->button5->BackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->BorderSize = 0;
			this->button5->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button5->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->button5, L"button5");
			this->button5->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button5->Name = L"button5";
			this->button5->TabStop = false;
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &tryyyy::button5_Click);
			// 
			// pictureBox2
			// 
			resources->ApplyResources(this->pictureBox2, L"pictureBox2");
			this->pictureBox2->Name = L"pictureBox2";
			this->pictureBox2->TabStop = false;
			// 
			// subdash
			// 
			this->subdash->Controls->Add(this->button4);
			this->subdash->Controls->Add(this->pictureBox4);
			resources->ApplyResources(this->subdash, L"subdash");
			this->subdash->Name = L"subdash";
			// 
			// button4
			// 
			this->button4->BackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->BorderSize = 0;
			this->button4->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button4->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->button4, L"button4");
			this->button4->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button4->Name = L"button4";
			this->button4->TabStop = false;
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &tryyyy::button4_Click);
			// 
			// pictureBox4
			// 
			resources->ApplyResources(this->pictureBox4, L"pictureBox4");
			this->pictureBox4->Name = L"pictureBox4";
			this->pictureBox4->TabStop = false;
			// 
			// pictureBox6
			// 
			resources->ApplyResources(this->pictureBox6, L"pictureBox6");
			this->pictureBox6->Name = L"pictureBox6";
			this->pictureBox6->TabStop = false;
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::Color::Teal;
			this->panel1->Controls->Add(this->subitem);
			this->panel1->Controls->Add(this->pictureBox6);
			this->panel1->Controls->Add(this->subdash);
			this->panel1->Controls->Add(this->subill);
			this->panel1->Controls->Add(this->subcat);
			resources->ApplyResources(this->panel1, L"panel1");
			this->panel1->Name = L"panel1";
			// 
			// button2
			// 
			this->button2->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->button2, L"button2");
			this->button2->FlatAppearance->BorderSize = 0;
			this->button2->Name = L"button2";
			this->button2->UseVisualStyleBackColor = false;
			// 
			// label6
			// 
			resources->ApplyResources(this->label6, L"label6");
			this->label6->Name = L"label6";
			this->label6->Click += gcnew System::EventHandler(this, &tryyyy::label6_Click_1);
			// 
			// label8
			// 
			resources->ApplyResources(this->label8, L"label8");
			this->label8->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->label8->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->label8->Name = L"label8";
			// 
			// button3
			// 
			this->button3->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->button3, L"button3");
			this->button3->FlatAppearance->BorderSize = 0;
			this->button3->Name = L"button3";
			this->button3->UseVisualStyleBackColor = false;
			this->button3->Click += gcnew System::EventHandler(this, &tryyyy::button3_Click);
			// 
			// panel_items
			// 
			resources->ApplyResources(this->panel_items, L"panel_items");
			this->panel_items->Controls->Add(this->panel3);
			this->panel_items->Controls->Add(this->panel2);
			this->panel_items->Controls->Add(this->button3);
			this->panel_items->Controls->Add(this->label8);
			this->panel_items->Controls->Add(this->label6);
			this->panel_items->Controls->Add(this->button2);
			this->panel_items->Name = L"panel_items";
			this->panel_items->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &tryyyy::panel_items_Paint);
			// 
			// panel3
			// 
			resources->ApplyResources(this->panel3, L"panel3");
			this->panel3->Name = L"panel3";
			// 
			// panel2
			// 
			this->panel2->BackColor = System::Drawing::Color::LightSeaGreen;
			this->panel2->Controls->Add(this->button14);
			this->panel2->Controls->Add(this->button13);
			this->panel2->Controls->Add(this->button12);
			this->panel2->Controls->Add(this->button11);
			this->panel2->Controls->Add(this->button10);
			resources->ApplyResources(this->panel2, L"panel2");
			this->panel2->Name = L"panel2";
			// 
			// button14
			// 
			this->button14->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button14->FlatAppearance->BorderSize = 0;
			this->button14->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button14->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->button14, L"button14");
			this->button14->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button14->Name = L"button14";
			this->button14->TabStop = false;
			this->button14->UseVisualStyleBackColor = false;
			// 
			// button13
			// 
			this->button13->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button13->FlatAppearance->BorderSize = 0;
			this->button13->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button13->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->button13, L"button13");
			this->button13->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button13->Name = L"button13";
			this->button13->TabStop = false;
			this->button13->UseVisualStyleBackColor = false;
			// 
			// button12
			// 
			this->button12->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button12->FlatAppearance->BorderSize = 0;
			this->button12->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button12->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->button12, L"button12");
			this->button12->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button12->Name = L"button12";
			this->button12->TabStop = false;
			this->button12->UseVisualStyleBackColor = false;
			this->button12->Click += gcnew System::EventHandler(this, &tryyyy::button12_Click);
			// 
			// button11
			// 
			this->button11->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button11->FlatAppearance->BorderSize = 0;
			this->button11->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button11->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->button11, L"button11");
			this->button11->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button11->Name = L"button11";
			this->button11->TabStop = false;
			this->button11->UseVisualStyleBackColor = false;
			// 
			// button10
			// 
			this->button10->BackColor = System::Drawing::Color::LightSeaGreen;
			this->button10->FlatAppearance->BorderSize = 0;
			this->button10->FlatAppearance->MouseDownBackColor = System::Drawing::Color::Transparent;
			this->button10->FlatAppearance->MouseOverBackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->button10, L"button10");
			this->button10->ForeColor = System::Drawing::SystemColors::ButtonFace;
			this->button10->Name = L"button10";
			this->button10->TabStop = false;
			this->button10->UseVisualStyleBackColor = false;
			this->button10->Click += gcnew System::EventHandler(this, &tryyyy::button10_Click);
			// 
			// gunaElipse1
			// 
			this->gunaElipse1->TargetControl = this;
			// 
			// gunaElipse2
			// 
			this->gunaElipse2->Radius = 10;
			this->gunaElipse2->TargetControl = this;
			// 
			// button8
			// 
			this->button8->BackColor = System::Drawing::Color::Transparent;
			resources->ApplyResources(this->button8, L"button8");
			this->button8->FlatAppearance->BorderSize = 0;
			this->button8->Name = L"button8";
			this->button8->UseVisualStyleBackColor = false;
			this->button8->Click += gcnew System::EventHandler(this, &tryyyy::button8_Click);
			// 
			// gunaElipse3
			// 
			this->gunaElipse3->TargetControl = this;
			// 
			// gunaElipse4
			// 
			this->gunaElipse4->TargetControl = this->panel2;
			// 
			// gunaElipse5
			// 
			this->gunaElipse5->TargetControl = this;
			// 
			// gunaElipse6
			// 
			this->gunaElipse6->TargetControl = this->panel2;
			// 
			// gunaElipse7
			// 
			this->gunaElipse7->TargetControl = this;
			// 
			// tryyyy
			// 
			this->BackColor = System::Drawing::SystemColors::ButtonFace;
			resources->ApplyResources(this, L"$this");
			this->Controls->Add(this->panel_items);
			this->Controls->Add(this->panel_categories);
			this->Controls->Add(this->panel_dashboard);
			this->Controls->Add(this->header);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->panel_bills);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"tryyyy";
			this->Load += gcnew System::EventHandler(this, &tryyyy::tryyyy_Load);
			this->header->ResumeLayout(false);
			this->header->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox5))->EndInit();
			this->panel_bills->ResumeLayout(false);
			this->panel_bills->PerformLayout();
			this->panel_dashboard->ResumeLayout(false);
			this->panel_dashboard->PerformLayout();
			this->panel_categories->ResumeLayout(false);
			this->panel_categories->PerformLayout();
			this->subitem->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox3))->EndInit();
			this->subcat->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->subill->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox2))->EndInit();
			this->subdash->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox4))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox6))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel_items->ResumeLayout(false);
			this->panel_items->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

		// =========================
		// ADD ROW FUNCTION
		// =========================
	private:


		// =========================
		// LOAD EVENT
		// =========================
	private:
		System::Void tryyyy_Load(System::Object^ sender, System::EventArgs^ e)
		{
			// prevent flickering + speed up loading
			



		
		}
	private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void panel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void pictureBox2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label3_Click(System::Object^ sender, System::EventArgs^ e) {
}

private: System::Void label6_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label8_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label6_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pictureBox7_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void panel4_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	

}

private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {

}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) {
	this->subitem->BackColor = System::Drawing::Color::Teal;
	this->subdash->BackColor = System::Drawing::Color::LightSeaGreen;
	this->subcat->BackColor = System::Drawing::Color::Teal;
	this->subill->BackColor = System::Drawing::Color::Teal;
	panel_dashboard->BringToFront();
}



private: System::Void label3_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) {
	panel_items->BringToFront();
	this->subitem->BackColor = System::Drawing::Color::LightSeaGreen;
	this->subdash->BackColor = System::Drawing::Color::Teal;
	this->subcat->BackColor = System::Drawing::Color::Teal;
	this->subill->BackColor = System::Drawing::Color::Teal;
	int y = 1;
	int z = 1;
	int zz = 14;

	for (int i = 0; i < 20; i++)
	{
		zz = 26;
		
		Panel^ p = gcnew Panel();
		p->Size = System::Drawing::Size(791, 44);
		p->Location = System::Drawing::Point(0, y);
		if (z == 1) {
			p->BackColor = System::Drawing::SystemColors::ControlLight;
		}
		else {
			p->BackColor = System::Drawing::SystemColors::Control;

		}
		z = z ^ 1;
		for (int j = 0; j < 5; j++) {
			Label^ lbl = gcnew Label();
			lbl->Text = "hh";
			lbl->Location = System::Drawing::Point(zz, 3);
			lbl->Font = gcnew System::Drawing::Font("Bell MT", 18.0f, System::Drawing::FontStyle::Regular);
			p->Controls->Add(lbl);
			zz += 163;
		}

		this->panel3->Controls->Add(p);

		y += 44; 
	}

	

	

}
private: System::Void button7_Click(System::Object^ sender, System::EventArgs^ e) {
	this->subitem->BackColor = System::Drawing::Color::Teal;
	this->subdash->BackColor = System::Drawing::Color::Teal;
	this->subcat->BackColor = System::Drawing::Color::LightSeaGreen;
	this->subill->BackColor = System::Drawing::Color::Teal;
	panel_categories->BringToFront();
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {
	this->subitem->BackColor = System::Drawing::Color::Teal;
	this->subdash->BackColor = System::Drawing::Color::Teal;
	this->subcat->BackColor = System::Drawing::Color::Teal;
	this->subill->BackColor = System::Drawing::Color::LightSeaGreen;
	panel_bills->BringToFront();
}

private: System::Void panel_items_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	Environment::Exit(0);
}
private: System::Void button10_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button12_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label7_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label5_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button8_Click(System::Object^ sender, System::EventArgs^ e) {
}
};
}