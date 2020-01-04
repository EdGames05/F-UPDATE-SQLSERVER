#pragma once

namespace FUPDATESQLSERVER {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frm_docs
	/// </summary>
	public ref class frm_docs : public System::Windows::Forms::Form
	{
	public:
		frm_docs(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frm_docs()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  btnEjecutar;
	private: System::Windows::Forms::ContextMenuStrip^  contextMenuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  copiarURLToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;
	protected:

	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frm_docs::typeid));
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->contextMenuStrip1 = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->copiarURLToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->btnEjecutar = (gcnew System::Windows::Forms::Button());
			this->contextMenuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightGray;
			this->label1->Location = System::Drawing::Point(12, 18);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(217, 29);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Información de uso";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->ForeColor = System::Drawing::Color::LightGray;
			this->label2->Location = System::Drawing::Point(14, 70);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(509, 289);
			this->label2->TabIndex = 1;
			this->label2->Text = resources->GetString(L"label2.Text");
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->ForeColor = System::Drawing::Color::LightGray;
			this->label3->Location = System::Drawing::Point(636, 18);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(69, 29);
			this->label3->TabIndex = 2;
			this->label3->Text = L"Autor";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->ContextMenuStrip = this->contextMenuStrip1;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->ForeColor = System::Drawing::Color::LightGray;
			this->label4->Location = System::Drawing::Point(638, 70);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(364, 102);
			this->label4->TabIndex = 3;
			this->label4->Text = L"Allam López\r\n\r\nHecho con C++/CLI\r\n\r\nCódigo fuente disponible en:\r\nhttps://github."
				L"com/EdGames05/F-UPDATE-SQLSERVER";
			this->label4->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &frm_docs::label4_MouseClick);
			// 
			// contextMenuStrip1
			// 
			this->contextMenuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->copiarURLToolStripMenuItem });
			this->contextMenuStrip1->Name = L"contextMenuStrip1";
			this->contextMenuStrip1->Size = System::Drawing::Size(181, 48);
			// 
			// copiarURLToolStripMenuItem
			// 
			this->copiarURLToolStripMenuItem->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"copiarURLToolStripMenuItem.Image")));
			this->copiarURLToolStripMenuItem->Name = L"copiarURLToolStripMenuItem";
			this->copiarURLToolStripMenuItem->Size = System::Drawing::Size(180, 22);
			this->copiarURLToolStripMenuItem->Text = L"Copiar URL";
			this->copiarURLToolStripMenuItem->Click += gcnew System::EventHandler(this, &frm_docs::copiarURLToolStripMenuItem_Click);
			// 
			// btnEjecutar
			// 
			this->btnEjecutar->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Right));
			this->btnEjecutar->BackColor = System::Drawing::Color::SteelBlue;
			this->btnEjecutar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnEjecutar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnEjecutar->ForeColor = System::Drawing::Color::White;
			this->btnEjecutar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnEjecutar.Image")));
			this->btnEjecutar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnEjecutar->Location = System::Drawing::Point(864, 326);
			this->btnEjecutar->Name = L"btnEjecutar";
			this->btnEjecutar->Size = System::Drawing::Size(138, 33);
			this->btnEjecutar->TabIndex = 4;
			this->btnEjecutar->Text = L"Cerrar";
			this->btnEjecutar->UseVisualStyleBackColor = false;
			this->btnEjecutar->Click += gcnew System::EventHandler(this, &frm_docs::btnEjecutar_Click);
			// 
			// frm_docs
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			this->ClientSize = System::Drawing::Size(1063, 389);
			this->Controls->Add(this->btnEjecutar);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frm_docs";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Documentación";
			this->contextMenuStrip1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnEjecutar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void label4_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		contextMenuStrip1->Show(Cursor->Position);
	}
	private: System::Void copiarURLToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		Clipboard::Clear();
		Clipboard::SetText("https://github.com/EdGames05/F-UPDATE-SQLSERVER");
	}
};
}
