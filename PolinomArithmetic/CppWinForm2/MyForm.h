#pragma once
#include <stdio.h>
#include "Poli.h"
#include "SupportMethod.h"


namespace CppWinForm2 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button10;
	private: System::Windows::Forms::Button^  button11;
	private: System::Windows::Forms::Button^  button12;
	private: System::Windows::Forms::Button^  button13;


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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button10 = (gcnew System::Windows::Forms::Button());
			this->button11 = (gcnew System::Windows::Forms::Button());
			this->button12 = (gcnew System::Windows::Forms::Button());
			this->button13 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(44, 50);
			this->textBox1->Multiline = true;
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(80, 40);
			this->textBox1->TabIndex = 0;
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(234, 50);
			this->textBox2->Multiline = true;
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(89, 40);
			this->textBox2->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(41, 23);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(146, 15);
			this->label1->TabIndex = 2;
			this->label1->Text = L"������������ �������";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(231, 23);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 15);
			this->label2->TabIndex = 3;
			this->label2->Text = L"����� ����������";
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(44, 179);
			this->textBox3->Multiline = true;
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(328, 36);
			this->textBox3->TabIndex = 4;
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &MyForm::textBox3_TextChanged);
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(46, 280);
			this->textBox4->Multiline = true;
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(326, 36);
			this->textBox4->TabIndex = 5;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(42, 142);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(91, 20);
			this->label3->TabIndex = 6;
			this->label3->Text = L"1 �������";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(42, 229);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(91, 20);
			this->label4->TabIndex = 7;
			this->label4->Text = L"2 �������";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(41, 109);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(256, 17);
			this->label5->TabIndex = 8;
			this->label5->Text = L"���������� ����: x0 x1 x2 x3 x4 ... x9";
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(47, 335);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(56, 40);
			this->button1->TabIndex = 9;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(131, 335);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(56, 40);
			this->button2->TabIndex = 10;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(316, 335);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(56, 40);
			this->button3->TabIndex = 11;
			this->button3->Text = L"1� *";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(46, 443);
			this->textBox5->Multiline = true;
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(326, 36);
			this->textBox5->TabIndex = 12;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(43, 415);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(89, 20);
			this->label6->TabIndex = 13;
			this->label6->Text = L"���������";
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(356, 50);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(49, 40);
			this->button4->TabIndex = 14;
			this->button4->Text = L"Acc";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(537, 117);
			this->textBox6->Multiline = true;
			this->textBox6->Name = L"textBox6";
			this->textBox6->Size = System::Drawing::Size(202, 45);
			this->textBox6->TabIndex = 15;
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(537, 50);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(90, 40);
			this->button5->TabIndex = 16;
			this->button5->Text = L"Add Monom To 1";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(401, 229);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(90, 40);
			this->button6->TabIndex = 17;
			this->button6->Text = L"Show";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &MyForm::button6_Click);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(649, 50);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(90, 40);
			this->button7->TabIndex = 18;
			this->button7->Text = L"Add Monom To 2";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &MyForm::button7_Click);
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(411, 335);
			this->textBox7->Multiline = true;
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(41, 40);
			this->textBox7->TabIndex = 19;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(378, 344);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(30, 20);
			this->label7->TabIndex = 20;
			this->label7->Text = L"��";
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(316, 381);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(56, 40);
			this->button8->TabIndex = 21;
			this->button8->Text = L"2� *";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &MyForm::button8_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label8->Location = System::Drawing::Point(378, 390);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(30, 20);
			this->label8->TabIndex = 22;
			this->label8->Text = L"��";
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(411, 381);
			this->textBox8->Multiline = true;
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(41, 40);
			this->textBox8->TabIndex = 23;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(401, 175);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(90, 40);
			this->button9->TabIndex = 24;
			this->button9->Text = L"�������� 1 �������";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &MyForm::button9_Click);
			// 
			// button10
			// 
			this->button10->Location = System::Drawing::Point(401, 280);
			this->button10->Name = L"button10";
			this->button10->Size = System::Drawing::Size(90, 40);
			this->button10->TabIndex = 25;
			this->button10->Text = L"�������� 2 �������";
			this->button10->UseVisualStyleBackColor = true;
			this->button10->Click += gcnew System::EventHandler(this, &MyForm::button10_Click);
			// 
			// button11
			// 
			this->button11->Location = System::Drawing::Point(216, 335);
			this->button11->Name = L"button11";
			this->button11->Size = System::Drawing::Size(56, 40);
			this->button11->TabIndex = 26;
			this->button11->Text = L"*";
			this->button11->UseVisualStyleBackColor = true;
			this->button11->Click += gcnew System::EventHandler(this, &MyForm::button11_Click);
			// 
			// button12
			// 
			this->button12->Location = System::Drawing::Point(508, 200);
			this->button12->Name = L"button12";
			this->button12->Size = System::Drawing::Size(90, 40);
			this->button12->TabIndex = 27;
			this->button12->Text = L"�������� 1 �������";
			this->button12->UseVisualStyleBackColor = true;
			this->button12->Click += gcnew System::EventHandler(this, &MyForm::button12_Click);
			// 
			// button13
			// 
			this->button13->Location = System::Drawing::Point(508, 255);
			this->button13->Name = L"button13";
			this->button13->Size = System::Drawing::Size(90, 40);
			this->button13->TabIndex = 28;
			this->button13->Text = L"�������� 2 �������";
			this->button13->UseVisualStyleBackColor = true;
			this->button13->Click += gcnew System::EventHandler(this, &MyForm::button13_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(803, 533);
			this->Controls->Add(this->button13);
			this->Controls->Add(this->button12);
			this->Controls->Add(this->button11);
			this->Controls->Add(this->button10);
			this->Controls->Add(this->button9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->button7);
			this->Controls->Add(this->button6);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"MyForm";
			this->Text = L"Polinom Arithmetic";
			this->Load += gcnew System::EventHandler(this, &MyForm::MyForm_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		int maxst; int num;//������������ ������� � ����� ����������
		CircleList *p1,*p2,*res;//����� ��������
		int k1,k2;//������������ ��� ���������
		Polinom *pol1, *pol2, *pres;
private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
	string vvod;
	System::String^ s = textBox1->Text;
	vvod = SysToStd(s);
	if ((vvod == "") || (vvod == "������� ��������"))
	{
		vvod = "������� ��������";
		s = StdToSys(vvod);
		textBox1->Text = s;
	}
	else
	{
		maxst = System::Convert::ToInt32(textBox1->Text);
		textBox1->ReadOnly = true;
	}
	string vvod2;
	System::String^ s2 = textBox2->Text;
	vvod2 = SysToStd(s2);
	if ((vvod2 == "") || (vvod2 == "������� ��������"))
	{
		vvod2 = "������� ��������";
		s2 = StdToSys(vvod2);
		textBox2->Text = s2;
	}
	else
	{
		num = System::Convert::ToInt32(textBox2->Text);
		textBox2->ReadOnly = true;
	}
	pol1=new Polinom(maxst,num);
	pol2 = new Polinom(maxst, num);
	pres = new Polinom(maxst, num);
}
private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
	string vvod;
	System::String^ s = textBox6->Text;
	vvod = SysToStd(s);
	if ((vvod == "") || (vvod == "������� ��������"))
	{
		vvod = "������� ��������";
		s = StdToSys(vvod);
		textBox6->Text = s;
	}
	else
	{
		string str;
		System::String^ s = textBox6->Text;
		str = SysToStd(s);
		pol1->AddMonom(str);
	}
	


}
private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		textBox3->Text = StdToSys(pol1->PolinomtoString());
		textBox4->Text = StdToSys(pol2->PolinomtoString());	
}
private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
	string vvod;
	System::String^ s = textBox6->Text;
	vvod = SysToStd(s);
	if ((vvod == "")||(vvod=="������� ��������"))
	{
		vvod = "������� ��������";
		s = StdToSys(vvod);
		textBox6->Text = s;
	}
	else
	{
		string str;
		System::String^ s = textBox6->Text;
		str = SysToStd(s);
		pol2->AddMonom(str);
	}
}
private: System::Void MyForm_Load(System::Object^  sender, System::EventArgs^  e) {
	//
}
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
	*pres = *pol1 + *pol2;
	textBox5->Text = StdToSys(pres->PolinomtoString());
}
private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
	*pres = *pol1 - *pol2;
	textBox5->Text = StdToSys(pres->PolinomtoString());
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
	string str;
	System::String^ s = textBox7->Text;
	str = SysToStd(s);
	if(str=="")
	{
		k1 = 0;
	}
	else
	{
		k1= System::Convert::ToInt32(textBox7->Text);
	}
	*pres = *pol1*k1;
	textBox5->Text = StdToSys(pres->PolinomtoString());
}
private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
	string str;
	System::String^ s = textBox8->Text;
	str = SysToStd(s);
	if (str == "")
	{
		k2 = 0;
	}
	else
	{
		k2 = System::Convert::ToInt32(textBox8->Text);
	}
	*pres = *pol2*k2;
	textBox5->Text = StdToSys(pres->PolinomtoString());
}

private: System::Void textBox3_TextChanged(System::Object^  sender, System::EventArgs^  e) {
	//
}


private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
	string vvod;
	System::String^ s = textBox3->Text;
	vvod = SysToStd(s);
	if ((vvod == "") || (vvod == "������� ��������"))
	{
		vvod = "������� ��������";
		s = StdToSys(vvod);
		textBox3->Text = s;
	}
	else
	{
		string str;
		System::String^ s = textBox3->Text;
		str = SysToStd(s);
		pol1->StringtoPolinom(str);
	}
}
private: System::Void button10_Click(System::Object^  sender, System::EventArgs^  e) {
	string vvod;
	System::String^ s = textBox4->Text;
	vvod = SysToStd(s);
	if ((vvod == "") || (vvod == "������� ��������"))
	{
		vvod = "������� ��������";
		s = StdToSys(vvod);
		textBox4->Text = s;
	}
	else
	{
		string str;
		System::String^ s = textBox4->Text;
		str = SysToStd(s);
		pol2->StringtoPolinom(str);
	}
}
private: System::Void button11_Click(System::Object^  sender, System::EventArgs^  e) {
	*pres = *pol1 * *pol2;
	textBox5->Text = StdToSys(pres->PolinomtoString());
}
private: System::Void button12_Click(System::Object^  sender, System::EventArgs^  e) {
	pol1 = new Polinom(maxst, num);
}
private: System::Void button13_Click(System::Object^  sender, System::EventArgs^  e) {
	pol2 = new Polinom(maxst, num);
}
};
}
