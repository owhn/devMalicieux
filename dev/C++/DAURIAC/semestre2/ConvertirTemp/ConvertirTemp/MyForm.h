#pragma once
#include <string>

namespace ConvertirTemp {

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
	private: System::Windows::Forms::TextBox^ txtbTempIni;
	protected:

	protected:

	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ btnFar;
	private: System::Windows::Forms::Button^ btnCels;
	private: System::Windows::Forms::TextBox^ txtbTempFin;
	private: System::Windows::Forms::TextBox^ txtbCels;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ txtbFar;
	private: System::Windows::Forms::Label^ label3;




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
			this->txtbTempIni = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->btnFar = (gcnew System::Windows::Forms::Button());
			this->btnCels = (gcnew System::Windows::Forms::Button());
			this->txtbTempFin = (gcnew System::Windows::Forms::TextBox());
			this->txtbCels = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtbFar = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// txtbTempIni
			// 
			this->txtbTempIni->Location = System::Drawing::Point(69, 52);
			this->txtbTempIni->Name = L"txtbTempIni";
			this->txtbTempIni->Size = System::Drawing::Size(100, 20);
			this->txtbTempIni->TabIndex = 0;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(69, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(126, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Température à convertir :";
			// 
			// btnFar
			// 
			this->btnFar->Location = System::Drawing::Point(69, 78);
			this->btnFar->Name = L"btnFar";
			this->btnFar->Size = System::Drawing::Size(97, 23);
			this->btnFar->TabIndex = 2;
			this->btnFar->Text = L"Convertir en F";
			this->btnFar->UseVisualStyleBackColor = true;
			this->btnFar->Click += gcnew System::EventHandler(this, &MyForm::btnFar_Click);
			// 
			// btnCels
			// 
			this->btnCels->Location = System::Drawing::Point(172, 78);
			this->btnCels->Name = L"btnCels";
			this->btnCels->Size = System::Drawing::Size(97, 23);
			this->btnCels->TabIndex = 3;
			this->btnCels->Text = L"Convertir en C";
			this->btnCels->UseVisualStyleBackColor = true;
			this->btnCels->Click += gcnew System::EventHandler(this, &MyForm::btnCels_Click);
			// 
			// txtbTempFin
			// 
			this->txtbTempFin->Location = System::Drawing::Point(175, 52);
			this->txtbTempFin->Name = L"txtbTempFin";
			this->txtbTempFin->Size = System::Drawing::Size(201, 20);
			this->txtbTempFin->TabIndex = 4;
			// 
			// txtbCels
			// 
			this->txtbCels->Location = System::Drawing::Point(72, 187);
			this->txtbCels->Name = L"txtbCels";
			this->txtbCels->Size = System::Drawing::Size(100, 20);
			this->txtbCels->TabIndex = 5;
			this->txtbCels->TextChanged += gcnew System::EventHandler(this, &MyForm::txtbCels_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(179, 193);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(18, 13);
			this->label2->TabIndex = 6;
			this->label2->Text = L"°C";
			// 
			// txtbFar
			// 
			this->txtbFar->Location = System::Drawing::Point(221, 186);
			this->txtbFar->Name = L"txtbFar";
			this->txtbFar->Size = System::Drawing::Size(100, 20);
			this->txtbFar->TabIndex = 7;
			this->txtbFar->TextChanged += gcnew System::EventHandler(this, &MyForm::txtbFar_TextChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(328, 193);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(17, 13);
			this->label3->TabIndex = 8;
			this->label3->Text = L"°F";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(696, 439);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtbFar);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtbCels);
			this->Controls->Add(this->txtbTempFin);
			this->Controls->Add(this->btnCels);
			this->Controls->Add(this->btnFar);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtbTempIni);
			this->Name = L"MyForm";
			this->Text = L"FENETR";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	private :
		bool isUpdating = false;


	private: System::Void btnFar_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtbTempIni->Text != "") {
			double tempIni = Convert::ToDouble(this->txtbTempIni->Text);
			double tempCtoF = tempIni * 1.8 + 32;
			this->txtbTempFin->Text = Convert::ToString(tempCtoF) + "°F";
		}
	}

	private: System::Void btnCels_Click(System::Object^ sender, System::EventArgs^ e) {
		if (txtbTempIni->Text != "") {
			double tempIni = Convert::ToDouble(this->txtbTempIni->Text);
			double tempFtoC = (tempIni - 32) * 5 / 9;
			this->txtbTempFin->Text = Convert::ToString(tempFtoC) + "°C";
		}
	}

	private: System::Void txtbCels_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txtbCels->Text != "") {
			if (!isUpdating) {
				try {
					this->isUpdating = true;
					double tempIni = Convert::ToDouble(this->txtbCels->Text);
					double tempCtoF = tempIni * 1.8 + 32;
					this->txtbFar->Text = Convert::ToString(tempCtoF);
				}
				catch (FormatException^) {
					this->txtbFar->Text = "";
				}
				finally {
					this->isUpdating = false;
				}
			}
		}
	}

	private: System::Void txtbFar_TextChanged(System::Object^ sender, System::EventArgs^ e) {
		if (txtbFar->Text != "") {
			if (!isUpdating) {
				try {
					this->isUpdating = true;
					double tempIni = Convert::ToDouble(this->txtbFar->Text);
					double tempFtoC = (tempIni - 32) * 5 / 9;
					this->txtbCels->Text = Convert::ToString(tempFtoC);
				}
				catch (FormatException^) {
					this->txtbFar->Text = "";
				}
				finally {
					this->isUpdating = false;
				}
			}
		}
	}
};
	}
