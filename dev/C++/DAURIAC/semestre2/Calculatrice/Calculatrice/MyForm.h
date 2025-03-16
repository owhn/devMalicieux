#pragma once

namespace Calculatrice {

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
	private: System::Windows::Forms::Button^ btn1;
	private: System::Windows::Forms::Button^ btn6;
	private: System::Windows::Forms::Button^ btn5;
	private: System::Windows::Forms::Button^ btn4;
	private: System::Windows::Forms::Button^ btn3;
	private: System::Windows::Forms::Button^ btn2;
	private: System::Windows::Forms::Button^ btnMult;

	private: System::Windows::Forms::Button^ btnMoins;
	private: System::Windows::Forms::Button^ btnPlus;
	private: System::Windows::Forms::Button^ btn9;
	private: System::Windows::Forms::Button^ btn8;
	private: System::Windows::Forms::Button^ btn7;
	private: System::Windows::Forms::Button^ btnEgal;
	private: System::Windows::Forms::RichTextBox^ txtbResult;



	protected:

	protected:

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
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btnMoins = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btnEgal = (gcnew System::Windows::Forms::Button());
			this->txtbResult = (gcnew System::Windows::Forms::RichTextBox());
			this->SuspendLayout();
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(12, 245);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(59, 51);
			this->btn1->TabIndex = 0;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(142, 188);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(59, 51);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(77, 188);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(59, 51);
			this->btn5->TabIndex = 2;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(12, 188);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(59, 51);
			this->btn4->TabIndex = 3;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(142, 245);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(59, 51);
			this->btn3->TabIndex = 4;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(77, 245);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(59, 51);
			this->btn2->TabIndex = 5;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			// 
			// btnMult
			// 
			this->btnMult->Location = System::Drawing::Point(207, 245);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(59, 51);
			this->btnMult->TabIndex = 6;
			this->btnMult->Text = L"x";
			this->btnMult->UseVisualStyleBackColor = true;
			// 
			// btnMoins
			// 
			this->btnMoins->Location = System::Drawing::Point(207, 188);
			this->btnMoins->Name = L"btnMoins";
			this->btnMoins->Size = System::Drawing::Size(59, 51);
			this->btnMoins->TabIndex = 7;
			this->btnMoins->Text = L"-";
			this->btnMoins->UseVisualStyleBackColor = true;
			// 
			// btnPlus
			// 
			this->btnPlus->Location = System::Drawing::Point(207, 131);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(59, 51);
			this->btnPlus->TabIndex = 8;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(142, 131);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(59, 51);
			this->btn9->TabIndex = 9;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(77, 131);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(59, 51);
			this->btn8->TabIndex = 10;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(12, 131);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(59, 51);
			this->btn7->TabIndex = 11;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			// 
			// btnEgal
			// 
			this->btnEgal->Location = System::Drawing::Point(207, 302);
			this->btnEgal->Name = L"btnEgal";
			this->btnEgal->Size = System::Drawing::Size(59, 51);
			this->btnEgal->TabIndex = 12;
			this->btnEgal->Text = L"=";
			this->btnEgal->UseVisualStyleBackColor = true;
			// 
			// txtbResult
			// 
			this->txtbResult->Location = System::Drawing::Point(12, 12);
			this->txtbResult->Name = L"txtbResult";
			this->txtbResult->Size = System::Drawing::Size(254, 96);
			this->txtbResult->TabIndex = 13;
			this->txtbResult->Text = L"";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 378);
			this->Controls->Add(this->txtbResult);
			this->Controls->Add(this->btnEgal);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnMoins);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);

		}
#pragma endregion
	};
}
