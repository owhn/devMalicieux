#pragma once

namespace exGraphique2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}

	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}


	protected:

	protected:

	private: System::Windows::Forms::TextBox^ txtNom;

	private: System::Windows::Forms::ComboBox^ cbxTitre;

	private: System::Windows::Forms::RadioButton^ rdoMin;
	private: System::Windows::Forms::RadioButton^ rdoMaj;
	private: System::Windows::Forms::Button^ btnValider;




	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->txtNom = (gcnew System::Windows::Forms::TextBox());
			this->cbxTitre = (gcnew System::Windows::Forms::ComboBox());
			this->rdoMaj = (gcnew System::Windows::Forms::RadioButton());
			this->rdoMin = (gcnew System::Windows::Forms::RadioButton());
			this->btnValider = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// txtNom
			// 
			this->txtNom->Location = System::Drawing::Point(188, 57);
			this->txtNom->Name = L"txtNom";
			this->txtNom->Size = System::Drawing::Size(100, 20);
			this->txtNom->TabIndex = 2;
			// 
			// cbxTitre
			// 
			this->cbxTitre->FormattingEnabled = true;
			this->cbxTitre->Location = System::Drawing::Point(47, 57);
			this->cbxTitre->Name = L"cbxTitre";
			this->cbxTitre->Size = System::Drawing::Size(121, 21);
			this->cbxTitre->TabIndex = 3;
			// 
			// rdoMaj
			// 
			this->rdoMaj->AutoSize = true;
			this->rdoMaj->Location = System::Drawing::Point(47, 112);
			this->rdoMaj->Name = L"rdoMaj";
			this->rdoMaj->Size = System::Drawing::Size(69, 17);
			this->rdoMaj->TabIndex = 4;
			this->rdoMaj->TabStop = true;
			this->rdoMaj->Text = L"Majeur(e)";
			this->rdoMaj->UseVisualStyleBackColor = true;
			// 
			// rdoMin
			// 
			this->rdoMin->AutoSize = true;
			this->rdoMin->Location = System::Drawing::Point(172, 112);
			this->rdoMin->Name = L"rdoMin";
			this->rdoMin->Size = System::Drawing::Size(69, 17);
			this->rdoMin->TabIndex = 5;
			this->rdoMin->TabStop = true;
			this->rdoMin->Text = L"Mineur(e)";
			this->rdoMin->UseVisualStyleBackColor = true;
			// 
			// btnValider
			// 
			this->btnValider->Location = System::Drawing::Point(339, 54);
			this->btnValider->Name = L"btnValider";
			this->btnValider->Size = System::Drawing::Size(146, 89);
			this->btnValider->TabIndex = 6;
			this->btnValider->Text = L"Valider";
			this->btnValider->UseVisualStyleBackColor = true;
			this->btnValider->Click += gcnew System::EventHandler(this, &MyForm::btnValider_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(523, 425);
			this->Controls->Add(this->btnValider);
			this->Controls->Add(this->rdoMin);
			this->Controls->Add(this->rdoMaj);
			this->Controls->Add(this->cbxTitre);
			this->Controls->Add(this->txtNom);
			this->Name = L"MyForm";
			this->Text = L"FENETR";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		private: System::Windows::Forms::TextBox^ tbxNom;


	private: System::Void btnValider_Click(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
