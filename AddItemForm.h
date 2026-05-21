#pragma once

namespace AddItem {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AddItemForm
	/// </summary>
	public ref class AddItemForm : public System::Windows::Forms::Form
	{
	public:
		AddItemForm(void)
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
		~AddItemForm()
		{
			if (components)
			{
				delete components;
			}
		}

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

		// Added control declarations
		System::Windows::Forms::Panel^ sidebar;
		System::Windows::Forms::Label^ lblLogo;
		System::Windows::Forms::Button^ btnNavDashboard;
		System::Windows::Forms::Button^ btnNavItems;
		System::Windows::Forms::Button^ btnNavCategories;
		System::Windows::Forms::Button^ btnNavBills;
		System::Windows::Forms::Button^ btnClose;
		System::Windows::Forms::Label^ lblTitle;
		System::Windows::Forms::Label^ lblSubtitle;
		System::Windows::Forms::Panel^ divider;
		System::Windows::Forms::Label^ lblName;

		System::Windows::Forms::Label^ lblBarcode;
		System::Windows::Forms::TextBox^ txtBarcode;
		System::Windows::Forms::Label^ lblPrice;
		System::Windows::Forms::TextBox^ txtPrice;
		System::Windows::Forms::Label^ lblQuantity;
		System::Windows::Forms::TextBox^ txtQuantity;
		System::Windows::Forms::Label^ lblCategory;
	public: System::Windows::Forms::ComboBox^ cmbCategory;
	private:

		System::Windows::Forms::Button^ btnCancel;
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::TextBox^ txtName;
		   System::Windows::Forms::Button^ btnSave;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(AddItemForm::typeid));
			this->sidebar = (gcnew System::Windows::Forms::Panel());
			this->lblLogo = (gcnew System::Windows::Forms::Label());
			this->btnNavDashboard = (gcnew System::Windows::Forms::Button());
			this->btnNavItems = (gcnew System::Windows::Forms::Button());
			this->btnNavCategories = (gcnew System::Windows::Forms::Button());
			this->btnNavBills = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblSubtitle = (gcnew System::Windows::Forms::Label());
			this->divider = (gcnew System::Windows::Forms::Panel());
			this->lblName = (gcnew System::Windows::Forms::Label());
			this->lblBarcode = (gcnew System::Windows::Forms::Label());
			this->txtBarcode = (gcnew System::Windows::Forms::TextBox());
			this->lblPrice = (gcnew System::Windows::Forms::Label());
			this->txtPrice = (gcnew System::Windows::Forms::TextBox());
			this->lblQuantity = (gcnew System::Windows::Forms::Label());
			this->txtQuantity = (gcnew System::Windows::Forms::TextBox());
			this->lblCategory = (gcnew System::Windows::Forms::Label());
			this->cmbCategory = (gcnew System::Windows::Forms::ComboBox());
			this->btnCancel = (gcnew System::Windows::Forms::Button());
			this->btnSave = (gcnew System::Windows::Forms::Button());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->txtName = (gcnew System::Windows::Forms::TextBox());
			this->sidebar->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// sidebar
			// 
			this->sidebar->BackColor = System::Drawing::Color::Teal;
			this->sidebar->Controls->Add(this->lblLogo);
			this->sidebar->Controls->Add(this->btnNavDashboard);
			this->sidebar->Controls->Add(this->btnNavItems);
			this->sidebar->Controls->Add(this->btnNavCategories);
			this->sidebar->Controls->Add(this->btnNavBills);
			this->sidebar->Dock = System::Windows::Forms::DockStyle::Left;
			this->sidebar->Location = System::Drawing::Point(0, 0);
			this->sidebar->Name = L"sidebar";
			this->sidebar->Size = System::Drawing::Size(200, 493);
			this->sidebar->TabIndex = 0;
			// 
			// lblLogo
			// 
			this->lblLogo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 13, System::Drawing::FontStyle::Bold));
			this->lblLogo->ForeColor = System::Drawing::Color::Goldenrod;
			this->lblLogo->Location = System::Drawing::Point(0, 18);
			this->lblLogo->Name = L"lblLogo";
			this->lblLogo->Size = System::Drawing::Size(219, 73);
			this->lblLogo->TabIndex = 0;
			this->lblLogo->Text = L"Al3r3ry";
			this->lblLogo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			this->lblLogo->Click += gcnew System::EventHandler(this, &AddItemForm::lblLogo_Click);
			// 
			// btnNavDashboard
			// 
			this->btnNavDashboard->BackColor = System::Drawing::Color::Transparent;
			this->btnNavDashboard->FlatAppearance->BorderSize = 0;
			this->btnNavDashboard->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNavDashboard->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->btnNavDashboard->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnNavDashboard->Location = System::Drawing::Point(0, 90);
			this->btnNavDashboard->Name = L"btnNavDashboard";
			this->btnNavDashboard->Size = System::Drawing::Size(200, 42);
			this->btnNavDashboard->TabIndex = 1;
			this->btnNavDashboard->Text = L"   Dashboard";
			this->btnNavDashboard->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnNavDashboard->UseVisualStyleBackColor = false;
			// 
			// btnNavItems
			// 
			this->btnNavItems->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnNavItems->FlatAppearance->BorderSize = 0;
			this->btnNavItems->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNavItems->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->btnNavItems->ForeColor = System::Drawing::Color::White;
			this->btnNavItems->Location = System::Drawing::Point(0, 135);
			this->btnNavItems->Name = L"btnNavItems";
			this->btnNavItems->Size = System::Drawing::Size(200, 42);
			this->btnNavItems->TabIndex = 2;
			this->btnNavItems->Text = L"   Items";
			this->btnNavItems->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnNavItems->UseVisualStyleBackColor = false;
			// 
			// btnNavCategories
			// 
			this->btnNavCategories->BackColor = System::Drawing::Color::Transparent;
			this->btnNavCategories->FlatAppearance->BorderSize = 0;
			this->btnNavCategories->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNavCategories->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->btnNavCategories->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnNavCategories->Location = System::Drawing::Point(0, 180);
			this->btnNavCategories->Name = L"btnNavCategories";
			this->btnNavCategories->Size = System::Drawing::Size(200, 42);
			this->btnNavCategories->TabIndex = 3;
			this->btnNavCategories->Text = L"   Categories";
			this->btnNavCategories->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnNavCategories->UseVisualStyleBackColor = false;
			// 
			// btnNavBills
			// 
			this->btnNavBills->BackColor = System::Drawing::Color::Transparent;
			this->btnNavBills->FlatAppearance->BorderSize = 0;
			this->btnNavBills->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNavBills->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10));
			this->btnNavBills->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(200)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnNavBills->Location = System::Drawing::Point(0, 225);
			this->btnNavBills->Name = L"btnNavBills";
			this->btnNavBills->Size = System::Drawing::Size(200, 42);
			this->btnNavBills->TabIndex = 4;
			this->btnNavBills->Text = L"   Bills";
			this->btnNavBills->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnNavBills->UseVisualStyleBackColor = false;
			// 
			// btnClose
			// 
			this->btnClose->BackColor = System::Drawing::Color::Transparent;
			this->btnClose->FlatAppearance->BorderSize = 0;
			this->btnClose->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnClose->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->btnClose->ForeColor = System::Drawing::Color::Gray;
			this->btnClose->Location = System::Drawing::Point(760, 0);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(40, 40);
			this->btnClose->TabIndex = 1;
			this->btnClose->Text = L"X";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &AddItemForm::btnClose_Click);
			// 
			// lblTitle
			// 
			this->lblTitle->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 18));
			this->lblTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblTitle->Location = System::Drawing::Point(338, 11);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(305, 54);
			this->lblTitle->TabIndex = 2;
			this->lblTitle->Text = L"Add New Item";
			this->lblTitle->Click += gcnew System::EventHandler(this, &AddItemForm::lblTitle_Click);
			// 
			// lblSubtitle
			// 
			this->lblSubtitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->lblSubtitle->ForeColor = System::Drawing::Color::Olive;
			this->lblSubtitle->Location = System::Drawing::Point(232, 65);
			this->lblSubtitle->Name = L"lblSubtitle";
			this->lblSubtitle->Size = System::Drawing::Size(411, 20);
			this->lblSubtitle->TabIndex = 3;
			this->lblSubtitle->Text = L"Fill in all fields then click Save________credit by \"BO ADAM\"";
			this->lblSubtitle->Click += gcnew System::EventHandler(this, &AddItemForm::lblSubtitle_Click);
			// 
			// divider
			// 
			this->divider->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(220)), static_cast<System::Int32>(static_cast<System::Byte>(220)),
				static_cast<System::Int32>(static_cast<System::Byte>(220)));
			this->divider->Location = System::Drawing::Point(225, 90);
			this->divider->Name = L"divider";
			this->divider->Size = System::Drawing::Size(575, 1);
			this->divider->TabIndex = 4;
			// 
			// lblName
			// 
			this->lblName->BackColor = System::Drawing::Color::WhiteSmoke;
			this->lblName->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 11));
			this->lblName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblName->Location = System::Drawing::Point(230, 110);
			this->lblName->Name = L"lblName";
			this->lblName->Size = System::Drawing::Size(260, 24);
			this->lblName->TabIndex = 5;
			this->lblName->Text = L"Item Name";
			this->lblName->Click += gcnew System::EventHandler(this, &AddItemForm::lblName_Click);
			// 
			// lblBarcode
			// 
			this->lblBarcode->BackColor = System::Drawing::Color::WhiteSmoke;
			this->lblBarcode->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 11));
			this->lblBarcode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblBarcode->Location = System::Drawing::Point(510, 110);
			this->lblBarcode->Name = L"lblBarcode";
			this->lblBarcode->Size = System::Drawing::Size(260, 24);
			this->lblBarcode->TabIndex = 7;
			this->lblBarcode->Text = L"Barcode";
			// 
			// txtBarcode
			// 
			this->txtBarcode->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtBarcode->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->txtBarcode->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->txtBarcode->Location = System::Drawing::Point(510, 136);
			this->txtBarcode->Name = L"txtBarcode";
			this->txtBarcode->Size = System::Drawing::Size(260, 34);
			this->txtBarcode->TabIndex = 8;
			this->txtBarcode->Tag = L"e.g. 01032802489";
			this->txtBarcode->Text = L"e.g. 01032802489";
			this->txtBarcode->TextChanged += gcnew System::EventHandler(this, &AddItemForm::txtBarcode_TextChanged);
			this->txtBarcode->Enter += gcnew System::EventHandler(this, &AddItemForm::TextBox_Enter);
			this->txtBarcode->Leave += gcnew System::EventHandler(this, &AddItemForm::TextBox_Leave);
			// 
			// lblPrice
			// 
			this->lblPrice->BackColor = System::Drawing::Color::WhiteSmoke;
			this->lblPrice->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 11));
			this->lblPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblPrice->Location = System::Drawing::Point(230, 200);
			this->lblPrice->Name = L"lblPrice";
			this->lblPrice->Size = System::Drawing::Size(260, 24);
			this->lblPrice->TabIndex = 9;
			this->lblPrice->Text = L"Price (EGP)";
			// 
			// txtPrice
			// 
			this->txtPrice->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtPrice->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->txtPrice->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->txtPrice->Location = System::Drawing::Point(230, 226);
			this->txtPrice->Name = L"txtPrice";
			this->txtPrice->Size = System::Drawing::Size(260, 34);
			this->txtPrice->TabIndex = 10;
			this->txtPrice->Tag = L"e.g. oo";
			this->txtPrice->Text = L"e.g. oo";
			this->txtPrice->TextChanged += gcnew System::EventHandler(this, &AddItemForm::txtPrice_TextChanged);
			this->txtPrice->Enter += gcnew System::EventHandler(this, &AddItemForm::TextBox_Enter);
			this->txtPrice->Leave += gcnew System::EventHandler(this, &AddItemForm::TextBox_Leave);
			// 
			// lblQuantity
			// 
			this->lblQuantity->BackColor = System::Drawing::Color::WhiteSmoke;
			this->lblQuantity->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 11));
			this->lblQuantity->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(192)), static_cast<System::Int32>(static_cast<System::Byte>(0)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->lblQuantity->Location = System::Drawing::Point(510, 200);
			this->lblQuantity->Name = L"lblQuantity";
			this->lblQuantity->Size = System::Drawing::Size(260, 24);
			this->lblQuantity->TabIndex = 11;
			this->lblQuantity->Text = L"Quantity";
			// 
			// txtQuantity
			// 
			this->txtQuantity->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtQuantity->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->txtQuantity->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->txtQuantity->Location = System::Drawing::Point(510, 226);
			this->txtQuantity->Name = L"txtQuantity";
			this->txtQuantity->Size = System::Drawing::Size(260, 34);
			this->txtQuantity->TabIndex = 12;
			this->txtQuantity->Tag = L"e.g. 1";
			this->txtQuantity->Text = L"e.g. 1";
			this->txtQuantity->Enter += gcnew System::EventHandler(this, &AddItemForm::TextBox_Enter);
			this->txtQuantity->Leave += gcnew System::EventHandler(this, &AddItemForm::TextBox_Leave);
			// 
			// lblCategory
			// 
			this->lblCategory->BackColor = System::Drawing::Color::Ivory;
			this->lblCategory->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 11));
			this->lblCategory->ForeColor = System::Drawing::Color::Black;
			this->lblCategory->Location = System::Drawing::Point(230, 290);
			this->lblCategory->Name = L"lblCategory";
			this->lblCategory->Size = System::Drawing::Size(540, 24);
			this->lblCategory->TabIndex = 13;
			this->lblCategory->Text = L"Category";
			// 
			// cmbCategory
			// 
			this->cmbCategory->DropDownStyle = System::Windows::Forms::ComboBoxStyle::DropDownList;
			this->cmbCategory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->cmbCategory->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->cmbCategory->Location = System::Drawing::Point(230, 316);
			this->cmbCategory->Name = L"cmbCategory";
			this->cmbCategory->Size = System::Drawing::Size(540, 36);
			this->cmbCategory->TabIndex = 14;
			this->cmbCategory->SelectedIndexChanged += gcnew System::EventHandler(this, &AddItemForm::cmbCategory_SelectedIndexChanged);
			// 
			// btnCancel
			// 
			this->btnCancel->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(240)), static_cast<System::Int32>(static_cast<System::Byte>(240)),
				static_cast<System::Int32>(static_cast<System::Byte>(240)));
			this->btnCancel->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnCancel->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 11, System::Drawing::FontStyle::Bold));
			this->btnCancel->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->btnCancel->Location = System::Drawing::Point(550, 420);
			this->btnCancel->Name = L"btnCancel";
			this->btnCancel->Size = System::Drawing::Size(110, 40);
			this->btnCancel->TabIndex = 15;
			this->btnCancel->Text = L"Cancel";
			this->btnCancel->UseVisualStyleBackColor = false;
			// 
			// btnSave
			// 
			this->btnSave->BackColor = System::Drawing::Color::Teal;
			this->btnSave->FlatAppearance->BorderSize = 0;
			this->btnSave->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnSave->Font = (gcnew System::Drawing::Font(L"Maiandra GD", 11, System::Drawing::FontStyle::Bold));
			this->btnSave->ForeColor = System::Drawing::Color::White;
			this->btnSave->Location = System::Drawing::Point(672, 420);
			this->btnSave->Name = L"btnSave";
			this->btnSave->Size = System::Drawing::Size(120, 40);
			this->btnSave->TabIndex = 16;
			this->btnSave->Text = L"Save Item";
			this->btnSave->UseVisualStyleBackColor = false;
			this->btnSave->Click += gcnew System::EventHandler(this, &AddItemForm::btnSave_Click);
			// 
			// pictureBox1
			// 
			this->pictureBox1->BackColor = System::Drawing::Color::Transparent;
			this->pictureBox1->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->pictureBox1->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(601, 11);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(62, 43);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::StretchImage;
			this->pictureBox1->TabIndex = 17;
			this->pictureBox1->TabStop = false;
			this->pictureBox1->Click += gcnew System::EventHandler(this, &AddItemForm::pictureBox1_Click);
			// 
			// txtName
			// 
			this->txtName->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtName->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->txtName->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->txtName->Location = System::Drawing::Point(230, 136);
			this->txtName->Name = L"txtName";
			this->txtName->Size = System::Drawing::Size(260, 34);
			this->txtName->TabIndex = 6;
			this->txtName->Tag = L"e.g. AlArnab Alga2e3";
			this->txtName->Text = L"e.g. AlArnab Alga2e3";
			this->txtName->TextChanged += gcnew System::EventHandler(this, &AddItemForm::txtName_TextChanged);
			this->txtName->Enter += gcnew System::EventHandler(this, &AddItemForm::TextBox_Enter);
			this->txtName->Leave += gcnew System::EventHandler(this, &AddItemForm::TextBox_Leave);
			// 
			// AddItemForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(807, 493);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->sidebar);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->lblSubtitle);
			this->Controls->Add(this->divider);
			this->Controls->Add(this->lblName);
			this->Controls->Add(this->txtName);
			this->Controls->Add(this->lblBarcode);
			this->Controls->Add(this->txtBarcode);
			this->Controls->Add(this->lblPrice);
			this->Controls->Add(this->txtPrice);
			this->Controls->Add(this->lblQuantity);
			this->Controls->Add(this->txtQuantity);
			this->Controls->Add(this->lblCategory);
			this->Controls->Add(this->cmbCategory);
			this->Controls->Add(this->btnCancel);
			this->Controls->Add(this->btnSave);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"AddItemForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Add New Item";
			this->Load += gcnew System::EventHandler(this, &AddItemForm::AddItemForm_Load);
			this->sidebar->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void AddItemForm_Load(System::Object^ sender, System::EventArgs^ e) {
		// Initialize form (e.g., load categories) if needed
	}
	private: System::Void TextBox_Enter(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::TextBox^ tb = safe_cast<System::Windows::Forms::TextBox^>(sender);
		if (tb != nullptr) {
			String^ placeholder = safe_cast<String^>(tb->Tag);
			if (!String::IsNullOrEmpty(placeholder) && tb->Text == placeholder) {
				tb->Text = L"";
				tb->ForeColor = System::Drawing::Color::Black;
			}
		}
	}

	private: System::Void TextBox_Leave(System::Object^ sender, System::EventArgs^ e) {
		System::Windows::Forms::TextBox^ tb = safe_cast<System::Windows::Forms::TextBox^>(sender);
		if (tb != nullptr) {
			String^ placeholder = safe_cast<String^>(tb->Tag);
			if (String::IsNullOrWhiteSpace(tb->Text) && !String::IsNullOrEmpty(placeholder)) {
				tb->Text = placeholder;
				tb->ForeColor = System::Drawing::Color::FromArgb(160, 160, 160);
			}
		}
	}

	private: System::Void txtName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		// handle name text change if needed
	}

	private: System::Void txtBarcode_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		// handle barcode text change if needed
	}
	private: System::Void txtPrice_TextChanged(System::Object^ sender, System::EventArgs^ e) {

	}
private: System::Void lblSubtitle_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblName_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblTitle_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e) {
	Environment::Exit(0);
}
private: System::Void pictureBox1_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void lblLogo_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void btnSave_Click(System::Object^ sender, System::EventArgs^ e) {
	//Product(std::string b, std::string n, std::string c, int q, double p, int sold)
	//	: barcode(b), name(n), category(c), quantity(q), price(p), howManySold(sold) {
	//}
	//Product(txtBarcode, txtName, txt, std::stoi(txtPrice()), std::stod(txtPrice()), int sold)
	//	: barcode(b), name(n), category(c), quantity(q), price(p), howManySold(sold) {
	//}
}
private: System::Void cmbCategory_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

	//cmbCategory->SelectedItem->ToString(); // Get selected category as string
}
private: System::Void cmbCategory_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
  