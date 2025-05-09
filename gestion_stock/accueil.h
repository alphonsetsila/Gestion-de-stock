#pragma once

namespace gestion_stock {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::SQLite;

	/// <summary>
	/// Summary for accueil
	/// </summary>
	public ref class accueil : public System::Windows::Forms::Form
	{
	public:
		accueil(void)
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
		~accueil()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Panel^  pan_ajout;
	protected: 

	private: System::Windows::Forms::Button^  btn_ajouter;
	protected: 

	private: System::Windows::Forms::ComboBox^  cb_categorie;
	private: System::Windows::Forms::TextBox^  txt_qte;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txt_nom;

	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Panel^  pan_modif;

	private: System::Windows::Forms::Button^  btn_modifier;
	private: System::Windows::Forms::ComboBox^  cb_m_categorie;
	private: System::Windows::Forms::TextBox^  txt_m_qte;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::TextBox^  txt_m_nom;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::DataGridView^  dgv;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  categorie;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  id_produit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  nom_produit;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  qte;
	private: System::Windows::Forms::Button^  btn_select;
	private: System::Windows::Forms::Button^  btn_suppr;
	private: System::Windows::Forms::TextBox^  txt_recherche;
	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Label^  Facture;
	private: System::Windows::Forms::Button^  btn_valider;
	private: System::Windows::Forms::TextBox^  txt_n;
	private: System::Windows::Forms::TextBox^  txt_ather;

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
			this->pan_ajout = (gcnew System::Windows::Forms::Panel());
			this->btn_ajouter = (gcnew System::Windows::Forms::Button());
			this->cb_categorie = (gcnew System::Windows::Forms::ComboBox());
			this->txt_qte = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txt_nom = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->pan_modif = (gcnew System::Windows::Forms::Panel());
			this->btn_modifier = (gcnew System::Windows::Forms::Button());
			this->cb_m_categorie = (gcnew System::Windows::Forms::ComboBox());
			this->txt_m_qte = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->txt_m_nom = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->dgv = (gcnew System::Windows::Forms::DataGridView());
			this->categorie = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->id_produit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->nom_produit = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->qte = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btn_select = (gcnew System::Windows::Forms::Button());
			this->btn_suppr = (gcnew System::Windows::Forms::Button());
			this->txt_recherche = (gcnew System::Windows::Forms::TextBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->txt_ather = (gcnew System::Windows::Forms::TextBox());
			this->txt_n = (gcnew System::Windows::Forms::TextBox());
			this->btn_valider = (gcnew System::Windows::Forms::Button());
			this->Facture = (gcnew System::Windows::Forms::Label());
			this->pan_ajout->SuspendLayout();
			this->pan_modif->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgv))->BeginInit();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->SuspendLayout();
			// 
			// pan_ajout
			// 
			this->pan_ajout->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pan_ajout->Controls->Add(this->btn_ajouter);
			this->pan_ajout->Controls->Add(this->cb_categorie);
			this->pan_ajout->Controls->Add(this->txt_qte);
			this->pan_ajout->Controls->Add(this->label2);
			this->pan_ajout->Controls->Add(this->txt_nom);
			this->pan_ajout->Controls->Add(this->label3);
			this->pan_ajout->Controls->Add(this->label4);
			this->pan_ajout->Controls->Add(this->label1);
			this->pan_ajout->Location = System::Drawing::Point(24, 12);
			this->pan_ajout->Name = L"pan_ajout";
			this->pan_ajout->Size = System::Drawing::Size(155, 217);
			this->pan_ajout->TabIndex = 1;
			// 
			// btn_ajouter
			// 
			this->btn_ajouter->Location = System::Drawing::Point(18, 175);
			this->btn_ajouter->Name = L"btn_ajouter";
			this->btn_ajouter->Size = System::Drawing::Size(118, 23);
			this->btn_ajouter->TabIndex = 5;
			this->btn_ajouter->Text = L"AJOUTER";
			this->btn_ajouter->UseVisualStyleBackColor = true;
			this->btn_ajouter->Click += gcnew System::EventHandler(this, &accueil::btn_ajouter_Click);
			// 
			// cb_categorie
			// 
			this->cb_categorie->FormattingEnabled = true;
			this->cb_categorie->Location = System::Drawing::Point(15, 94);
			this->cb_categorie->Name = L"cb_categorie";
			this->cb_categorie->Size = System::Drawing::Size(121, 21);
			this->cb_categorie->TabIndex = 3;
			// 
			// txt_qte
			// 
			this->txt_qte->Location = System::Drawing::Point(15, 140);
			this->txt_qte->Name = L"txt_qte";
			this->txt_qte->Size = System::Drawing::Size(121, 20);
			this->txt_qte->TabIndex = 4;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(15, 121);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(41, 13);
			this->label2->TabIndex = 0;
			this->label2->Text = L"Qantit�";
			// 
			// txt_nom
			// 
			this->txt_nom->Location = System::Drawing::Point(15, 49);
			this->txt_nom->Name = L"txt_nom";
			this->txt_nom->Size = System::Drawing::Size(121, 20);
			this->txt_nom->TabIndex = 2;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(15, 75);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(52, 13);
			this->label3->TabIndex = 0;
			this->label3->Text = L"Cat�gorie";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(57, 13);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(42, 13);
			this->label4->TabIndex = 0;
			this->label4->Text = L"AJOUT";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(15, 30);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(64, 13);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Nom produit";
			// 
			// pan_modif
			// 
			this->pan_modif->BorderStyle = System::Windows::Forms::BorderStyle::FixedSingle;
			this->pan_modif->Controls->Add(this->btn_modifier);
			this->pan_modif->Controls->Add(this->cb_m_categorie);
			this->pan_modif->Controls->Add(this->txt_m_qte);
			this->pan_modif->Controls->Add(this->label5);
			this->pan_modif->Controls->Add(this->txt_m_nom);
			this->pan_modif->Controls->Add(this->label6);
			this->pan_modif->Controls->Add(this->label7);
			this->pan_modif->Controls->Add(this->label8);
			this->pan_modif->Enabled = false;
			this->pan_modif->Location = System::Drawing::Point(201, 12);
			this->pan_modif->Name = L"pan_modif";
			this->pan_modif->Size = System::Drawing::Size(155, 217);
			this->pan_modif->TabIndex = 1;
			// 
			// btn_modifier
			// 
			this->btn_modifier->Location = System::Drawing::Point(18, 175);
			this->btn_modifier->Name = L"btn_modifier";
			this->btn_modifier->Size = System::Drawing::Size(118, 23);
			this->btn_modifier->TabIndex = 5;
			this->btn_modifier->Text = L"MODIFIER";
			this->btn_modifier->UseVisualStyleBackColor = true;
			this->btn_modifier->Click += gcnew System::EventHandler(this, &accueil::btn_modifier_Click);
			// 
			// cb_m_categorie
			// 
			this->cb_m_categorie->FormattingEnabled = true;
			this->cb_m_categorie->Location = System::Drawing::Point(15, 94);
			this->cb_m_categorie->Name = L"cb_m_categorie";
			this->cb_m_categorie->Size = System::Drawing::Size(121, 21);
			this->cb_m_categorie->TabIndex = 3;
			// 
			// txt_m_qte
			// 
			this->txt_m_qte->Location = System::Drawing::Point(15, 140);
			this->txt_m_qte->Name = L"txt_m_qte";
			this->txt_m_qte->Size = System::Drawing::Size(121, 20);
			this->txt_m_qte->TabIndex = 4;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(15, 121);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(41, 13);
			this->label5->TabIndex = 0;
			this->label5->Text = L"Qantit�";
			// 
			// txt_m_nom
			// 
			this->txt_m_nom->Location = System::Drawing::Point(15, 49);
			this->txt_m_nom->Name = L"txt_m_nom";
			this->txt_m_nom->Size = System::Drawing::Size(121, 20);
			this->txt_m_nom->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(15, 75);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(52, 13);
			this->label6->TabIndex = 0;
			this->label6->Text = L"Cat�gorie";
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(37, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(84, 13);
			this->label7->TabIndex = 0;
			this->label7->Text = L"MODIFICATION";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(15, 30);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(64, 13);
			this->label8->TabIndex = 0;
			this->label8->Text = L"Nom produit";
			// 
			// dgv
			// 
			this->dgv->AllowUserToAddRows = false;
			this->dgv->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::Fill;
			this->dgv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgv->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(4) {this->categorie, this->id_produit, 
				this->nom_produit, this->qte});
			this->dgv->Location = System::Drawing::Point(12, 60);
			this->dgv->MultiSelect = false;
			this->dgv->Name = L"dgv";
			this->dgv->RowHeadersVisible = false;
			this->dgv->Size = System::Drawing::Size(884, 238);
			this->dgv->TabIndex = 2;
			// 
			// categorie
			// 
			this->categorie->HeaderText = L"CATEGORIE";
			this->categorie->Name = L"categorie";
			this->categorie->ReadOnly = true;
			// 
			// id_produit
			// 
			this->id_produit->HeaderText = L"ID PRODUIT";
			this->id_produit->Name = L"id_produit";
			this->id_produit->ReadOnly = true;
			// 
			// nom_produit
			// 
			this->nom_produit->HeaderText = L"NOM PRODUIT";
			this->nom_produit->Name = L"nom_produit";
			this->nom_produit->ReadOnly = true;
			// 
			// qte
			// 
			this->qte->HeaderText = L"QUANTITE";
			this->qte->Name = L"qte";
			this->qte->ReadOnly = true;
			// 
			// btn_select
			// 
			this->btn_select->Location = System::Drawing::Point(572, 309);
			this->btn_select->Name = L"btn_select";
			this->btn_select->Size = System::Drawing::Size(227, 23);
			this->btn_select->TabIndex = 3;
			this->btn_select->Text = L"MODIFIER LE PRODUIT SELECTIONNE";
			this->btn_select->UseVisualStyleBackColor = true;
			this->btn_select->Click += gcnew System::EventHandler(this, &accueil::btn_select_Click);
			// 
			// btn_suppr
			// 
			this->btn_suppr->Location = System::Drawing::Point(805, 309);
			this->btn_suppr->Name = L"btn_suppr";
			this->btn_suppr->Size = System::Drawing::Size(91, 23);
			this->btn_suppr->TabIndex = 3;
			this->btn_suppr->Text = L"SUPPRIMER";
			this->btn_suppr->UseVisualStyleBackColor = true;
			this->btn_suppr->Click += gcnew System::EventHandler(this, &accueil::btn_suppr_Click);
			// 
			// txt_recherche
			// 
			this->txt_recherche->Location = System::Drawing::Point(12, 34);
			this->txt_recherche->Name = L"txt_recherche";
			this->txt_recherche->Size = System::Drawing::Size(100, 20);
			this->txt_recherche->TabIndex = 4;
			this->txt_recherche->KeyUp += gcnew System::Windows::Forms::KeyEventHandler(this, &accueil::txt_recherche_KeyUp);
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(12, 18);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(63, 13);
			this->label9->TabIndex = 0;
			this->label9->Text = L"Rechercher";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->label9);
			this->panel1->Controls->Add(this->txt_recherche);
			this->panel1->Controls->Add(this->dgv);
			this->panel1->Controls->Add(this->btn_suppr);
			this->panel1->Controls->Add(this->btn_select);
			this->panel1->Location = System::Drawing::Point(12, 246);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(912, 343);
			this->panel1->TabIndex = 5;
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->Facture);
			this->panel2->Controls->Add(this->btn_valider);
			this->panel2->Controls->Add(this->txt_n);
			this->panel2->Controls->Add(this->txt_ather);
			this->panel2->Location = System::Drawing::Point(394, 12);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(226, 216);
			this->panel2->TabIndex = 6;
			// 
			// txt_ather
			// 
			this->txt_ather->Location = System::Drawing::Point(21, 47);
			this->txt_ather->Name = L"txt_ather";
			this->txt_ather->Size = System::Drawing::Size(169, 20);
			this->txt_ather->TabIndex = 0;
			// 
			// txt_n
			// 
			this->txt_n->Location = System::Drawing::Point(24, 96);
			this->txt_n->Name = L"txt_n";
			this->txt_n->Size = System::Drawing::Size(166, 20);
			this->txt_n->TabIndex = 1;
			// 
			// btn_valider
			// 
			this->btn_valider->Location = System::Drawing::Point(24, 141);
			this->btn_valider->Name = L"btn_valider";
			this->btn_valider->Size = System::Drawing::Size(166, 35);
			this->btn_valider->TabIndex = 2;
			this->btn_valider->Text = L"valider";
			this->btn_valider->UseVisualStyleBackColor = true;
			// 
			// Facture
			// 
			this->Facture->AutoSize = true;
			this->Facture->Location = System::Drawing::Point(86, 14);
			this->Facture->Name = L"Facture";
			this->Facture->Size = System::Drawing::Size(43, 13);
			this->Facture->TabIndex = 3;
			this->Facture->Text = L"Facture";
			// 
			// accueil
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(936, 601);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->pan_modif);
			this->Controls->Add(this->pan_ajout);
			this->Name = L"accueil";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"accueil";
			this->Load += gcnew System::EventHandler(this, &accueil::accueil_Load);
			this->pan_ajout->ResumeLayout(false);
			this->pan_ajout->PerformLayout();
			this->pan_modif->ResumeLayout(false);
			this->pan_modif->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->dgv))->EndInit();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel2->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		int id_pro;
	private: System::Void accueil_Load(System::Object^  sender, System::EventArgs^  e) {
				 //Maka categorie ary atao ao anatin'ny CB
				 String^ path = System::IO::Path::Combine(Application::StartupPath, "gestion_stock.db");
				 SQLiteConnection^ conn = nullptr;
				 SQLiteDataReader^ r = nullptr;
				 try{
					 conn = gcnew SQLiteConnection("Data source = "+path);
					 conn->Open();
					 //cmd
					 
					 // CB
					 cmd->CommandText = "select * from categorie";
					 r = cmd->ExecuteReader();
					 while(r->Read()){
						 cb_categorie->Items->Add(r["categorie"]->ToString());
						 cb_m_categorie->Items->Add(r["categorie"]->ToString());
					 }
					 r->Close();
					 // DGV
					 dgv->Rows->Clear();
					 cmd->CommandText = "select produit.*, categorie.categorie from produit inner join categorie on produit.id_categorie = categorie.id_categorie";
					 r = cmd->ExecuteReader();
					 while(r->Read()){
						 dgv->Rows->Add(r["categorie"]->ToString(),r["id_produit"]->ToString(),r["nom_produit"]->ToString(),r["qte"]->ToString());
					 }
				 }
				 finally{
					 if(r != nullptr)
						 r->Close();
					 if(conn != nullptr)
						 conn->Close();
				 }
			 }
	private: System::Void btn_ajouter_Click(System::Object^  sender, System::EventArgs^  e) {
				 if(txt_nom->Text != "" && txt_qte->Text != "" && cb_categorie->SelectedIndex != -1){
					String^ path = System::IO::Path::Combine(Application::StartupPath, "gestion_stock.db");
					SQLiteConnection^ conn = nullptr;
					SQLiteDataReader^ r = nullptr;
					try{
						 conn = gcnew SQLiteConnection("Data source = "+path);
						 conn->Open();
						 //cmd
						 SQLiteCommand^ cmd = conn->CreateCommand();
						 cmd->CommandText = "select id_categorie from categorie where categorie = @cat";
						 cmd->Parameters->AddWithValue("@cat", cb_categorie->SelectedItem->ToString());
						 int id_cat = 0;
						 r = cmd->ExecuteReader();
						 id_cat = int::Parse(r["id_categorie"]->ToString());
						 r->Close();
						 cmd->CommandText = "insert into produit (nom_produit, qte, id_categorie) values (@nom,@qte,@id_cat)";
						 cmd->Parameters->AddWithValue("@nom", txt_nom->Text);
						 cmd->Parameters->AddWithValue("@qte", txt_qte->Text);
						 cmd->Parameters->AddWithValue("@id_cat", id_cat);
						 cmd->ExecuteNonQuery();

						 //MAJ
						 // DGV
						 dgv->Rows->Clear();
						 cmd->CommandText = "select produit.*, categorie.categorie from produit inner join categorie on produit.id_categorie = categorie.id_categorie";
						 r = cmd->ExecuteReader();
						 while(r->Read()){
							 dgv->Rows->Add(r["categorie"]->ToString(),r["id_produit"]->ToString(),r["nom_produit"]->ToString(),r["qte"]->ToString());
						 }
					}
					finally{
						 if(r != nullptr)
							 r->Close();
						 if(conn != nullptr)
							 conn->Close();
						 txt_nom->Text ="";
						 txt_qte->Text = "";
						 cb_categorie->SelectedIndex = -1;
					}
				 }
			 }
private: System::Void txt_recherche_KeyUp(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
			String^ key = txt_recherche->Text;
			String^ path = System::IO::Path::Combine(Application::StartupPath, "gestion_stock.db");
			SQLiteConnection^ conn = nullptr;
			SQLiteDataReader^ r = nullptr;
			try{
					conn = gcnew SQLiteConnection("Data source = "+path);
					conn->Open();
					//cmd
					SQLiteCommand^ cmd = conn->CreateCommand();
					
					//MAJ
					// DGV
					dgv->Rows->Clear();
					cmd->CommandText = "select produit.*, categorie.categorie from produit inner join categorie on produit.id_categorie = categorie.id_categorie where produit.nom_produit like @key";
					cmd->Parameters->AddWithValue("@key", "%"+key+"%");
					r = cmd->ExecuteReader();
					while(r->Read()){
						dgv->Rows->Add(r["categorie"]->ToString(),r["id_produit"]->ToString(),r["nom_produit"]->ToString(),r["qte"]->ToString());
					}
			}
			finally{
					if(r != nullptr)
						r->Close();
					if(conn != nullptr)
						conn->Close();
					txt_nom->Text ="";
					txt_qte->Text = "";
					cb_categorie->SelectedIndex = -1;
			}
		 }
private: System::Void btn_select_Click(System::Object^  sender, System::EventArgs^  e) {
			 String^ categorie = dgv->CurrentRow->Cells["categorie"]->Value->ToString();
			 id_pro = int::Parse(dgv->CurrentRow->Cells["id_produit"]->Value->ToString());
			 String^ nom_produit = dgv->CurrentRow->Cells["nom_produit"]->Value->ToString();
			 String^ qte = dgv->CurrentRow->Cells["qte"]->Value->ToString();

			 pan_modif->Enabled = true;
			 txt_m_nom -> Text = nom_produit;
			 txt_m_qte -> Text = qte;
			 cb_m_categorie->SelectedItem = categorie; 
		 }
private: System::Void btn_modifier_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(txt_m_nom->Text != "" && txt_m_qte->Text != "" && cb_m_categorie->SelectedIndex != -1){
				String^ path = System::IO::Path::Combine(Application::StartupPath, "gestion_stock.db");
				SQLiteConnection^ conn = nullptr;
				SQLiteDataReader^ r = nullptr;
				try{
						conn = gcnew SQLiteConnection("Data source = "+path);
						conn->Open();
						//cmd
						SQLiteCommand^ cmd = conn->CreateCommand();
						cmd->CommandText = "select id_categorie from categorie where categorie = @cat";
						cmd->Parameters->AddWithValue("@cat", cb_m_categorie->SelectedItem->ToString());
						int id_cat = 0;
						r = cmd->ExecuteReader();
						id_cat = int::Parse(r["id_categorie"]->ToString());
						r->Close();
						cmd->CommandText = "update produit set nom_produit = @nom, qte = @qte, id_categorie = @id_cat where id_produit = @id";
						cmd->Parameters->AddWithValue("@nom", txt_m_nom->Text);
						cmd->Parameters->AddWithValue("@qte", txt_m_qte->Text);
						cmd->Parameters->AddWithValue("@id_cat", id_cat);
						cmd->Parameters->AddWithValue("@id", id_pro);
						cmd->ExecuteNonQuery();

						//MAJ
						// DGV
						dgv->Rows->Clear();
						cmd->CommandText = "select produit.*, categorie.categorie from produit inner join categorie on produit.id_categorie = categorie.id_categorie";
						r = cmd->ExecuteReader();
						while(r->Read()){
							dgv->Rows->Add(r["categorie"]->ToString(),r["id_produit"]->ToString(),r["nom_produit"]->ToString(),r["qte"]->ToString());
						}
				}
				finally{
						if(r != nullptr)
							r->Close();
						if(conn != nullptr)
							conn->Close();
						txt_m_nom->Text ="";
						txt_m_qte->Text = "";
						cb_m_categorie->SelectedIndex = -1;
						pan_modif->Enabled = false;
				}
			 }
		 }
private: System::Void btn_suppr_Click(System::Object^  sender, System::EventArgs^  e) {
			id_pro = int::Parse(dgv->CurrentRow->Cells["id_produit"]->Value->ToString());
			String^ path = System::IO::Path::Combine(Application::StartupPath, "gestion_stock.db");
			SQLiteConnection^ conn = nullptr;
			SQLiteDataReader^ r = nullptr;
			try{
					conn = gcnew SQLiteConnection("Data source = "+path);
					conn->Open();
					//cmd
					SQLiteCommand^ cmd = conn->CreateCommand();
					cmd->CommandText = "delete from produit where id_produit = @id";
					
					cmd->Parameters->AddWithValue("@id", id_pro);
					cmd->ExecuteNonQuery();

					//MAJ
					// DGV
					dgv->Rows->Clear();
					cmd->CommandText = "select produit.*, categorie.categorie from produit inner join categorie on produit.id_categorie = categorie.id_categorie";
					r = cmd->ExecuteReader();
					while(r->Read()){
						dgv->Rows->Add(r["categorie"]->ToString(),r["id_produit"]->ToString(),r["nom_produit"]->ToString(),r["qte"]->ToString());
					}
			}
			finally{
					if(r != nullptr)
						r->Close();
					if(conn != nullptr)
						conn->Close();
			}
		 }
};
}
