#pragma once
#include <msclr/marshal_cppstd.h> // Converts std::string <-> System::String^ safely
#include "Product.h"
#include "datafunc.h"
#include <algorithm>
#include <vector>


#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define sz(x) (int)(x).size()

namespace Project1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Windows::Forms;
	using namespace System::Drawing;

	public ref class pro : public System::Windows::Forms::Form
	{
	public:
		pro(void)
		{
			InitializeComponent();

			this->txtSearchPlaceholder = L"Scan or type here...";

			// Initialize the native vector array securely on the native heap
			this->localDatabase = new std::vector<Product>(loaditmesFromFile());

			// Initially hide management controls until a valid product is found
			this->btnEdit->Visible = false;
			this->btnModeCategory->Visible = false;

			this->selectedProductIndex = -1;
		}

	protected:
		// Destructor handles native memory deallocation safely
		~pro()
		{
			if (components)
				delete components;

			if (this->localDatabase)
			{
				delete this->localDatabase;
				this->localDatabase = nullptr;
			}
		}

	private:
		// Native pointer allocation ensures compatibility with C++/CLI managed forms
		std::vector<Product>* localDatabase;
		int selectedProductIndex;

		System::ComponentModel::Container^ components;

		System::Windows::Forms::Panel^ sidebar;
		System::Windows::Forms::Label^ lblLogo;
		System::Windows::Forms::Button^ btnNavDashboard;
		System::Windows::Forms::Button^ btnNavSearch;
		System::Windows::Forms::Button^ btnNavCategories;
		System::Windows::Forms::Button^ btnNavBills;
		System::Windows::Forms::Button^ btnClose;
		System::Windows::Forms::Label^ lblTitle;
		System::Windows::Forms::Label^ lblSubtitle;
		System::Windows::Forms::Label^ lblSearchField;
		System::Windows::Forms::Panel^ divider;
		System::Windows::Forms::Button^ btnModeBarcode;
		System::Windows::Forms::Button^ btnModeCategory;
		System::Windows::Forms::TextBox^ txtSearch;
		System::Windows::Forms::Button^ btnGo;
		System::Windows::Forms::Button^ btnEdit;
		System::Windows::Forms::Label^ lblResultDisplay;
	private: System::Windows::Forms::Label^ Ah;


		System::String^ txtSearchPlaceholder;

#pragma region Windows Form Designer generated code
		void InitializeComponent(void)
		{
			this->sidebar = (gcnew System::Windows::Forms::Panel());
			this->lblLogo = (gcnew System::Windows::Forms::Label());
			this->btnNavDashboard = (gcnew System::Windows::Forms::Button());
			this->btnNavSearch = (gcnew System::Windows::Forms::Button());
			this->btnNavCategories = (gcnew System::Windows::Forms::Button());
			this->btnNavBills = (gcnew System::Windows::Forms::Button());
			this->btnClose = (gcnew System::Windows::Forms::Button());
			this->lblTitle = (gcnew System::Windows::Forms::Label());
			this->lblSubtitle = (gcnew System::Windows::Forms::Label());
			this->lblSearchField = (gcnew System::Windows::Forms::Label());
			this->divider = (gcnew System::Windows::Forms::Panel());
			this->btnModeBarcode = (gcnew System::Windows::Forms::Button());
			this->btnModeCategory = (gcnew System::Windows::Forms::Button());
			this->txtSearch = (gcnew System::Windows::Forms::TextBox());
			this->btnGo = (gcnew System::Windows::Forms::Button());
			this->btnEdit = (gcnew System::Windows::Forms::Button());
			this->lblResultDisplay = (gcnew System::Windows::Forms::Label());
			this->Ah = (gcnew System::Windows::Forms::Label());
			this->sidebar->SuspendLayout();
			this->SuspendLayout();
			// 
			// sidebar
			// 
			this->sidebar->BackColor = System::Drawing::Color::Teal;
			this->sidebar->Controls->Add(this->lblLogo);
			this->sidebar->Controls->Add(this->btnNavDashboard);
			this->sidebar->Controls->Add(this->btnNavSearch);
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
			this->lblLogo->ForeColor = System::Drawing::Color::White;
			this->lblLogo->Location = System::Drawing::Point(0, 18);
			this->lblLogo->Name = L"lblLogo";
			this->lblLogo->Size = System::Drawing::Size(200, 55);
			this->lblLogo->TabIndex = 0;
			this->lblLogo->Text = L"SuperMart";
			this->lblLogo->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
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
			// btnNavSearch
			// 
			this->btnNavSearch->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(40)), static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(255)));
			this->btnNavSearch->FlatAppearance->BorderSize = 0;
			this->btnNavSearch->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnNavSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->btnNavSearch->ForeColor = System::Drawing::Color::White;
			this->btnNavSearch->Location = System::Drawing::Point(0, 135);
			this->btnNavSearch->Name = L"btnNavSearch";
			this->btnNavSearch->Size = System::Drawing::Size(200, 42);
			this->btnNavSearch->TabIndex = 2;
			this->btnNavSearch->Text = L"   Search";
			this->btnNavSearch->TextAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnNavSearch->UseVisualStyleBackColor = false;
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
			this->btnClose->Location = System::Drawing::Point(760, 12);
			this->btnClose->Name = L"btnClose";
			this->btnClose->Size = System::Drawing::Size(40, 40);
			this->btnClose->TabIndex = 1;
			this->btnClose->Text = L"X";
			this->btnClose->UseVisualStyleBackColor = false;
			this->btnClose->Click += gcnew System::EventHandler(this, &pro::btnClose_Click);
			// 
			// lblTitle
			// 
			this->lblTitle->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 18));
			this->lblTitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(64)), static_cast<System::Int32>(static_cast<System::Byte>(64)),
				static_cast<System::Int32>(static_cast<System::Byte>(64)));
			this->lblTitle->Location = System::Drawing::Point(230, 28);
			this->lblTitle->Name = L"lblTitle";
			this->lblTitle->Size = System::Drawing::Size(380, 36);
			this->lblTitle->TabIndex = 2;
			this->lblTitle->Text = L"Search Products";
			// 
			// lblSubtitle
			// 
			this->lblSubtitle->Font = (gcnew System::Drawing::Font(L"Segoe UI", 9));
			this->lblSubtitle->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->lblSubtitle->Location = System::Drawing::Point(232, 65);
			this->lblSubtitle->Name = L"lblSubtitle";
			this->lblSubtitle->Size = System::Drawing::Size(380, 20);
			this->lblSubtitle->TabIndex = 3;
			this->lblSubtitle->Text = L"Search by barcode or browse by category";
			// 
			// lblSearchField
			// 
			this->lblSearchField->Font = (gcnew System::Drawing::Font(L"Lucida Fax", 11));
			this->lblSearchField->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(85)), static_cast<System::Int32>(static_cast<System::Byte>(85)),
				static_cast<System::Int32>(static_cast<System::Byte>(85)));
			this->lblSearchField->Location = System::Drawing::Point(230, 175);
			this->lblSearchField->Name = L"lblSearchField";
			this->lblSearchField->Size = System::Drawing::Size(300, 24);
			this->lblSearchField->TabIndex = 7;
			this->lblSearchField->Text = L"Barcode / Category Name";
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
			// btnModeBarcode
			// 
			this->btnModeBarcode->BackColor = System::Drawing::Color::Teal;
			this->btnModeBarcode->FlatAppearance->BorderSize = 0;
			this->btnModeBarcode->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnModeBarcode->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11, System::Drawing::FontStyle::Bold));
			this->btnModeBarcode->ForeColor = System::Drawing::Color::White;
			this->btnModeBarcode->Location = System::Drawing::Point(230, 108);
			this->btnModeBarcode->Name = L"btnModeBarcode";
			this->btnModeBarcode->Size = System::Drawing::Size(260, 50);
			this->btnModeBarcode->TabIndex = 5;
			this->btnModeBarcode->Text = L"Search by Barcode";
			this->btnModeBarcode->UseVisualStyleBackColor = false;
			this->btnModeBarcode->Click += gcnew System::EventHandler(this, &pro::btnModeBarcode_Click);
			// 
			// btnModeCategory
			// 
			this->btnModeCategory->BackColor = System::Drawing::Color::DarkRed;
			this->btnModeCategory->FlatAppearance->BorderColor = System::Drawing::Color::DarkRed;
			this->btnModeCategory->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnModeCategory->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->btnModeCategory->ForeColor = System::Drawing::Color::White;
			this->btnModeCategory->Location = System::Drawing::Point(508, 108);
			this->btnModeCategory->Name = L"btnModeCategory";
			this->btnModeCategory->Size = System::Drawing::Size(260, 50);
			this->btnModeCategory->TabIndex = 6;
			this->btnModeCategory->Text = L"Remove Item";
			this->btnModeCategory->UseVisualStyleBackColor = false;
			this->btnModeCategory->Click += gcnew System::EventHandler(this, &pro::btnModeCategory_Click);
			// 
			// txtSearch
			// 
			this->txtSearch->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->txtSearch->Font = (gcnew System::Drawing::Font(L"Segoe UI", 12));
			this->txtSearch->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(160)), static_cast<System::Int32>(static_cast<System::Byte>(160)),
				static_cast<System::Int32>(static_cast<System::Byte>(160)));
			this->txtSearch->Location = System::Drawing::Point(230, 202);
			this->txtSearch->Name = L"txtSearch";
			this->txtSearch->Size = System::Drawing::Size(470, 34);
			this->txtSearch->TabIndex = 8;
			this->txtSearch->Text = L"Scan or type here...";
			this->txtSearch->Enter += gcnew System::EventHandler(this, &pro::txtSearch_Enter);
			this->txtSearch->Leave += gcnew System::EventHandler(this, &pro::txtSearch_Leave);
			// 
			// btnGo
			// 
			this->btnGo->BackColor = System::Drawing::Color::Teal;
			this->btnGo->FlatAppearance->BorderSize = 0;
			this->btnGo->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnGo->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->btnGo->ForeColor = System::Drawing::Color::White;
			this->btnGo->Location = System::Drawing::Point(710, 202);
			this->btnGo->Name = L"btnGo";
			this->btnGo->Size = System::Drawing::Size(90, 44);
			this->btnGo->TabIndex = 9;
			this->btnGo->Text = L"Search";
			this->btnGo->UseVisualStyleBackColor = false;
			this->btnGo->Click += gcnew System::EventHandler(this, &pro::btnGo_Click);
			// 
			// btnEdit
			// 
			this->btnEdit->BackColor = System::Drawing::Color::DarkOrange;
			this->btnEdit->Cursor = System::Windows::Forms::Cursors::Hand;
			this->btnEdit->FlatAppearance->BorderSize = 0;
			this->btnEdit->FlatStyle = System::Windows::Forms::FlatStyle::Flat;
			this->btnEdit->Font = (gcnew System::Drawing::Font(L"Segoe UI", 10, System::Drawing::FontStyle::Bold));
			this->btnEdit->ForeColor = System::Drawing::Color::White;
			this->btnEdit->Location = System::Drawing::Point(710, 252);
			this->btnEdit->Name = L"btnEdit";
			this->btnEdit->Size = System::Drawing::Size(90, 44);
			this->btnEdit->TabIndex = 10;
			this->btnEdit->Text = L"Edit Item";
			this->btnEdit->UseVisualStyleBackColor = false;
			this->btnEdit->Click += gcnew System::EventHandler(this, &pro::btnEdit_Click);
			// 
			// lblResultDisplay
			// 
			this->lblResultDisplay->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(245)),
				static_cast<System::Int32>(static_cast<System::Byte>(247)), static_cast<System::Int32>(static_cast<System::Byte>(250)));
			this->lblResultDisplay->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->lblResultDisplay->Font = (gcnew System::Drawing::Font(L"Segoe UI", 11));
			this->lblResultDisplay->ForeColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(34)), static_cast<System::Int32>(static_cast<System::Byte>(34)),
				static_cast<System::Int32>(static_cast<System::Byte>(34)));
			this->lblResultDisplay->Location = System::Drawing::Point(230, 302);
			this->lblResultDisplay->Name = L"lblResultDisplay";
			this->lblResultDisplay->Padding = System::Windows::Forms::Padding(15);
			this->lblResultDisplay->Size = System::Drawing::Size(570, 180);
			this->lblResultDisplay->TabIndex = 11;
			this->lblResultDisplay->Text = L"Search for a product barcode to view its details...";
			// 
			// Ah
			// 
			this->Ah->AutoSize = true;
			this->Ah->Location = System::Drawing::Point(505, 268);
			this->Ah->Name = L"Ah";
			this->Ah->Size = System::Drawing::Size(44, 16);
			this->Ah->TabIndex = 12;
			this->Ah->Text = L"label1";
			this->Ah->Click += gcnew System::EventHandler(this, &pro::label1_Click);
			// 
			// pro
			// 
			this->BackColor = System::Drawing::Color::White;
			this->ClientSize = System::Drawing::Size(807, 493);
			this->Controls->Add(this->Ah);
			this->Controls->Add(this->sidebar);
			this->Controls->Add(this->btnClose);
			this->Controls->Add(this->lblTitle);
			this->Controls->Add(this->lblSubtitle);
			this->Controls->Add(this->divider);
			this->Controls->Add(this->btnModeBarcode);
			this->Controls->Add(this->btnModeCategory);
			this->Controls->Add(this->lblSearchField);
			this->Controls->Add(this->txtSearch);
			this->Controls->Add(this->btnGo);
			this->Controls->Add(this->btnEdit);
			this->Controls->Add(this->lblResultDisplay);
			this->DoubleBuffered = true;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"pro";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Search Products";
			this->sidebar->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private:
		// Updates display text panel layout representation matching memory arrays
		System::Void RenderProductDisplay(int index)
		{
			if (!this->localDatabase || index < 0 || index >= static_cast<int>(this->localDatabase->size())) return;

			System::String^ resName = msclr::interop::marshal_as<System::String^>((*this->localDatabase)[index].getName());
			//System::String^ resBarcode = msclr::interop::marshal_as<System::String^>((*this->localDatabase)[index].getBarcode());
			System::String^ resCategory = msclr::interop::marshal_as<System::String^>((*this->localDatabase)[index].getCategory());
			System::String^ resQty = msclr::interop::marshal_as<System::String^>((*this->localDatabase)[index].getQty());

			double parsedPrice = std::stod((*this->localDatabase)[index].getPrice());
			System::String^ resPrice = L"$" + parsedPrice.ToString("F2");

			this->lblResultDisplay->Text = L"Product Details Found:\n\n" +
				L"🔹 Name: " + resName + L"\n" +
				//L"🔹 Barcode: " + resBarcode + L"\n" +
				L"🔹 Category: " + resCategory + L"\n" +
				L"🔹 Stock Quantity: " + resQty + L"\n" +
				L"🔹 Unit Price: " + resPrice;
			
		}


		System::Void txtSearch_Enter(System::Object^ sender, System::EventArgs^ e)
		{
			if (this->txtSearch->Text == this->txtSearchPlaceholder)
			{
				this->txtSearch->Text = L"";
				this->txtSearch->ForeColor = System::Drawing::Color::FromArgb(34, 34, 34);
			}
		}

		System::Void txtSearch_Leave(System::Object^ sender, System::EventArgs^ e)
		{
			if (System::String::IsNullOrWhiteSpace(this->txtSearch->Text))
			{
				this->txtSearch->Text = this->txtSearchPlaceholder;
				this->txtSearch->ForeColor = System::Drawing::Color::FromArgb(160, 160, 160);
			}
		}

		System::Void btnClose_Click(System::Object^ sender, System::EventArgs^ e)
		{
			System::Windows::Forms::DialogResult result;
			result = System::Windows::Forms::MessageBox::Show(
				"Are you sure you want to exit?", "Confirmation",
				MessageBoxButtons::OKCancel, MessageBoxIcon::Warning
			);
			if (result == System::Windows::Forms::DialogResult::OK)
			{
				bool fl = false;
				std::ofstream file("items_data.csv");
				if (!file.is_open()) {
					fl = true;
				}
				if(fl) 
				{
					System::Windows::Forms::MessageBox::Show("Failed to open data file for saving.", "File Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
					System::Windows::Forms::Application::Exit();
				}
				file << "barcode, name, category, quantity, price, sold_items\n";
				for (int i = 0; i < this->localDatabase->size(); ++i)
				{
					file<<localDatabase->at(i).toCSV()<<'\n';
					
				}
				file.close();
				System::Windows::Forms::Application::Exit();
			}
		}

		// SEARCH BUTTON CLICK (Applies Case-Insensitive Pointer Loop Matching)
		System::Void btnGo_Click(System::Object^ sender, System::EventArgs^ e)
		{
			System::String^ managedSearchText = this->txtSearch->Text;
			if (managedSearchText == this->txtSearchPlaceholder || System::String::IsNullOrWhiteSpace(managedSearchText))
			{
				this->lblResultDisplay->Text = L"Please type or scan a barcode first.";
				this->btnEdit->Visible = false;
				this->btnModeCategory->Visible = false;
				this->selectedProductIndex = -1;
				return;
			}

			//if (!this->localDatabase) return;

			// Enforce explicit case-insensitive matching on the input string parameter
			//System::String^ lowerManagedSearch = managedSearchText->ToLower();
			std::string searchQuery = msclr::interop::marshal_as<std::string>(managedSearchText);

			bool matchedRecordFound = true;

			// Access fields sequentially using array pointer notations
			//for (int i = 0; i < localDatabase->size(); ++i) {
			//	String^ prods_item_name = (localDatabase->at(i).get_name_cashier());
			//	if (prods_item_name == item_name) {

			//		int qty_num = products->at(i).get_qty_cashier();

			//		products->at(i).setQuantity(qty_num - Convert::ToInt32(qty));
			//		break;
			//	}
			//}




			lblResultDisplay->Text = (localDatabase->size().ToString());
			Ah->Text = (this->localDatabase->size().ToString());
			for ( int i = 0; i < this->localDatabase->size(); ++i)
			{
				std::string b = (*this->localDatabase)[i].getBarcode();
				//std::string n = (*this->localDatabase)[i].getName();
				//std::string c = (*this->localDatabase)[i].getCategory();
				//Label^ lblAhmed = gcnew Label();
			
				//break;
				
				// Force database text records to lower-case via macro parameters
				//std::transform(all(b), b.begin(), ::tolower);
				//std::transform(all(n), n.begin(), ::tolower);
				//std::transform(all(c), c.begin(), ::tolower);
				
				// Perform unified substring and exact match configurations
				if (b == searchQuery )
				{
					selectedProductIndex = i;
					RenderProductDisplay(this->selectedProductIndex);

					// Enable editing and removing capabilities dynamically
					this->btnEdit->Visible = true;
					this->btnModeCategory->Visible = true;

					matchedRecordFound = true;
					break;
				}
			}
			
			//if(matchedRecordFound)
			//{
			//	this->lblResultDisplay->Text = L"✅ Product found matching: " + managedSearchText;

			//}

			if (!matchedRecordFound) {
				this->selectedProductIndex = -1;
				this->btnEdit->Visible = false;
				this->btnModeCategory->Visible = false;
				this->lblResultDisplay->Text = L"❌ No product matches: " + managedSearchText;
				System::Windows::Forms::MessageBox::Show("The barcode or name entered does not exist.", "Product Not Found", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}

		// EDIT BUTTON CLICK
		System::Void btnEdit_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (!this->localDatabase || this->selectedProductIndex == -1) return;

			int idx = this->selectedProductIndex;
			System::String^ currentName = msclr::interop::marshal_as<System::String^>((*this->localDatabase)[idx].getName());
			System::String^ currentQty = msclr::interop::marshal_as<System::String^>((*this->localDatabase)[idx].getQty());
			System::String^ currentPrice = msclr::interop::marshal_as<System::String^>((*this->localDatabase)[idx].getPrice());
			System::String^ currentCategory = msclr::interop::marshal_as<System::String^>((*this->localDatabase)[idx].getCategory());

			System::Windows::Forms::Form^ prompt = gcnew System::Windows::Forms::Form();
			prompt->Width = 360; prompt->Height = 270;
			prompt->Text = "Modify Product Attributes";
			prompt->StartPosition = FormStartPosition::CenterParent;
			prompt->FormBorderStyle = System::Windows::Forms::FormBorderStyle::FixedDialog;
			prompt->MaximizeBox = false; prompt->MinimizeBox = false;

			System::Windows::Forms::Label^ lblN = gcnew System::Windows::Forms::Label(); lblN->Text = "Product Name:"; lblN->Location = System::Drawing::Point(25, 25); lblN->Size = System::Drawing::Size(100, 20);
			System::Windows::Forms::TextBox^ txtN = gcnew System::Windows::Forms::TextBox(); txtN->Text = currentName; txtN->Location = System::Drawing::Point(140, 22); txtN->Width = 170;

			System::Windows::Forms::Label^ lblQ = gcnew System::Windows::Forms::Label(); lblQ->Text = "Quantity:"; lblQ->Location = System::Drawing::Point(25, 65); lblQ->Size = System::Drawing::Size(100, 20);
			System::Windows::Forms::TextBox^ txtQ = gcnew System::Windows::Forms::TextBox(); txtQ->Text = currentQty; txtQ->Location = System::Drawing::Point(140, 62); txtQ->Width = 170;

			System::Windows::Forms::Label^ lblP = gcnew System::Windows::Forms::Label(); lblP->Text = "Price Value ($):"; lblP->Location = System::Drawing::Point(25, 105); lblP->Size = System::Drawing::Size(100, 20);
			System::Windows::Forms::TextBox^ txtP = gcnew System::Windows::Forms::TextBox(); txtP->Text = currentPrice; txtP->Location = System::Drawing::Point(140, 102); txtP->Width = 170;

			System::Windows::Forms::Button^ btnSave = gcnew System::Windows::Forms::Button(); btnSave->Text = "Save Changes"; btnSave->Location = System::Drawing::Point(110, 165); btnSave->Size = System::Drawing::Size(130, 35);
			btnSave->DialogResult = System::Windows::Forms::DialogResult::OK;

			prompt->Controls->Add(lblN); prompt->Controls->Add(txtN);
			prompt->Controls->Add(lblQ); prompt->Controls->Add(txtQ);
			prompt->Controls->Add(lblP); prompt->Controls->Add(txtP);
			prompt->Controls->Add(btnSave);
			prompt->AcceptButton = btnSave;

			if (prompt->ShowDialog() == System::Windows::Forms::DialogResult::OK)
			{
				try
				{
					std::string modifiedName = msclr::interop::marshal_as<std::string>(txtN->Text);
					int modifiedQty = System::Int32::Parse(txtQ->Text);
					double modifiedPrice = System::Double::Parse(txtP->Text);

					(*this->localDatabase)[idx].setName(modifiedName);
					(*this->localDatabase)[idx].setQuantity(modifiedQty);
					(*this->localDatabase)[idx].setPrice(modifiedPrice);

					RenderProductDisplay(idx);
					System::Windows::Forms::MessageBox::Show("Changes saved locally in vector memory!", "Success", MessageBoxButtons::OK, MessageBoxIcon::Information);
				}
				catch (...)
				{
					System::Windows::Forms::MessageBox::Show("Formatting failed. Verify entries match correct parameters.", "Parsing Error", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
		}

		// REMOVE BUTTON CLICK
		System::Void btnModeCategory_Click(System::Object^ sender, System::EventArgs^ e)
		{
			if (!this->localDatabase || this->selectedProductIndex == -1) return;

			System::Windows::Forms::DialogResult confirm = System::Windows::Forms::MessageBox::Show(
				"Are you sure you want to remove this item? (This action sets its quantity to 0 inside our active vector container)",
				"Confirm Item Removal", MessageBoxButtons::YesNo, MessageBoxIcon::Question);

			if (confirm == System::Windows::Forms::DialogResult::Yes)
			{
				// Mutate target tracking quantity property matrix directly to 0
				(*this->localDatabase)[this->selectedProductIndex].setQuantity(0);

				RenderProductDisplay(this->selectedProductIndex);
				System::Windows::Forms::MessageBox::Show("Product stock has been zeroed out inside vector memory matrix!", "Item Removed", MessageBoxButtons::OK, MessageBoxIcon::Information);
			}
		}
	private: System::Void btnModeBarcode_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	

}
};
}