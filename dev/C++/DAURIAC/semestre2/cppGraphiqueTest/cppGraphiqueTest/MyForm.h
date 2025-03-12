#pragma once

namespace cppGraphiqueTest {

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
	private: System::Windows::Forms::Label^ lblPrenom;
	private: System::Windows::Forms::Button^ btnValiderPrenom;
	protected:


	private: System::Windows::Forms::TextBox^ txtPrenom;


	protected:

	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->lblPrenom = (gcnew System::Windows::Forms::Label());
			this->btnValiderPrenom = (gcnew System::Windows::Forms::Button());
			this->txtPrenom = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lblPrenom
			// 
			this->lblPrenom->AutoSize = true;
			this->lblPrenom->Location = System::Drawing::Point(13, 34);
			this->lblPrenom->Name = L"lblPrenom";
			this->lblPrenom->Size = System::Drawing::Size(49, 13);
			this->lblPrenom->TabIndex = 0;
			this->lblPrenom->Text = L"Prénom :";
			// 
			// btnValiderPrenom
			// 
			this->btnValiderPrenom->Location = System::Drawing::Point(205, 29);
			this->btnValiderPrenom->Name = L"btnValiderPrenom";
			this->btnValiderPrenom->Size = System::Drawing::Size(75, 23);
			this->btnValiderPrenom->TabIndex = 1;
			this->btnValiderPrenom->Text = L"Valider";
			this->btnValiderPrenom->UseVisualStyleBackColor = true;
			this->btnValiderPrenom->Click += gcnew System::EventHandler(this, &MyForm::btnValiderPrenom_Click);
			// 
			// txtPrenom
			// 
			this->txtPrenom->Location = System::Drawing::Point(86, 29);
			this->txtPrenom->Name = L"txtPrenom";
			this->txtPrenom->Size = System::Drawing::Size(100, 20);
			this->txtPrenom->TabIndex = 2;
			this->txtPrenom->KeyPress += gcnew System::Windows::Forms::KeyPressEventHandler(this, &MyForm::txtPrenom_KeyPress);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(500, 261);
			this->Controls->Add(this->txtPrenom);
			this->Controls->Add(this->btnValiderPrenom);
			this->Controls->Add(this->lblPrenom);
			this->Name = L"MyForm";
			this->Text = L"FENETR";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnValiderPrenom_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ Prenom = txtPrenom->Text;
		if (Prenom=="") MessageBox::Show("Rentre ton prénom imbécile");
		else MessageBox::Show(Prenom + " est votre prénom.");
	};


	private: System::Void txtPrenom_KeyPress(System::Object^ sender, System::Windows::Forms::KeyPressEventArgs^ e) {
		if (e->KeyChar == (char)Keys::Enter) {
			String^ Prenom = txtPrenom->Text;
			if (Prenom == "") MessageBox::Show("Rentre ton prénom imbécile");
			else MessageBox::Show(Prenom + " est votre prénom.");
		}


	};
};
}