#pragma once

#include "ConeServer.h"

namespace FUPDATESQLSERVER {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de frm_coneServer
	/// </summary>
	public ref class frm_coneServer : public System::Windows::Forms::Form
	{
	public:

		ToolTip^ tip;
		bool estaConectado;
		ConeServer^ coneS;
		String^ servidor;
		String^ usuario;
		String^ contra;
		String^ nombreBd;

	public:
		frm_coneServer(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			tip = gcnew ToolTip();
			tip->SetToolTip(txtServidor, "Si el servidor destino proporciona puerto escribalo despues de la dirección (Ejemplo 192.0.0.1:1433");
			estaConectado = false;
			btnConectar->Focus();
			txtServidor->Focus();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~frm_coneServer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnConectar;
	protected:
	private: System::Windows::Forms::Button^  btnCancelar;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  txtServidor;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::TextBox^  txtUsuario;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  txtContrasena;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::TextBox^  txtNombreBd;


	private:
		/// <summary>
		/// Variable del diseñador necesaria.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Método necesario para admitir el Diseñador. No se puede modificar
		/// el contenido de este método con el editor de código.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(frm_coneServer::typeid));
			this->btnConectar = (gcnew System::Windows::Forms::Button());
			this->btnCancelar = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtServidor = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->txtContrasena = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->txtNombreBd = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnConectar
			// 
			this->btnConectar->BackColor = System::Drawing::Color::SteelBlue;
			this->btnConectar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnConectar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnConectar->ForeColor = System::Drawing::Color::White;
			this->btnConectar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnConectar.Image")));
			this->btnConectar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnConectar->Location = System::Drawing::Point(198, 211);
			this->btnConectar->Name = L"btnConectar";
			this->btnConectar->Size = System::Drawing::Size(138, 33);
			this->btnConectar->TabIndex = 4;
			this->btnConectar->Text = L"Conectar";
			this->btnConectar->UseVisualStyleBackColor = false;
			this->btnConectar->Click += gcnew System::EventHandler(this, &frm_coneServer::btnConectar_Click);
			// 
			// btnCancelar
			// 
			this->btnCancelar->BackColor = System::Drawing::Color::SteelBlue;
			this->btnCancelar->DialogResult = System::Windows::Forms::DialogResult::Cancel;
			this->btnCancelar->FlatStyle = System::Windows::Forms::FlatStyle::Popup;
			this->btnCancelar->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->btnCancelar->ForeColor = System::Drawing::Color::White;
			this->btnCancelar->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"btnCancelar.Image")));
			this->btnCancelar->ImageAlign = System::Drawing::ContentAlignment::MiddleLeft;
			this->btnCancelar->Location = System::Drawing::Point(359, 211);
			this->btnCancelar->Name = L"btnCancelar";
			this->btnCancelar->Size = System::Drawing::Size(138, 33);
			this->btnCancelar->TabIndex = 5;
			this->btnCancelar->Text = L"Cancelar";
			this->btnCancelar->UseVisualStyleBackColor = false;
			this->btnCancelar->Click += gcnew System::EventHandler(this, &frm_coneServer::btnCancelar_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(12, 33);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(71, 20);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Servidor:";
			// 
			// txtServidor
			// 
			this->txtServidor->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->txtServidor->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtServidor->ForeColor = System::Drawing::Color::LightGray;
			this->txtServidor->Location = System::Drawing::Point(152, 30);
			this->txtServidor->Name = L"txtServidor";
			this->txtServidor->Size = System::Drawing::Size(345, 26);
			this->txtServidor->TabIndex = 7;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(12, 71);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(68, 20);
			this->label2->TabIndex = 8;
			this->label2->Text = L"Usuario:";
			// 
			// txtUsuario
			// 
			this->txtUsuario->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->txtUsuario->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtUsuario->ForeColor = System::Drawing::Color::LightGray;
			this->txtUsuario->Location = System::Drawing::Point(152, 68);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(345, 26);
			this->txtUsuario->TabIndex = 9;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(12, 114);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(96, 20);
			this->label3->TabIndex = 10;
			this->label3->Text = L"Contraseña:";
			// 
			// txtContrasena
			// 
			this->txtContrasena->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->txtContrasena->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtContrasena->ForeColor = System::Drawing::Color::LightGray;
			this->txtContrasena->Location = System::Drawing::Point(152, 111);
			this->txtContrasena->Name = L"txtContrasena";
			this->txtContrasena->PasswordChar = '*';
			this->txtContrasena->Size = System::Drawing::Size(345, 26);
			this->txtContrasena->TabIndex = 11;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label4->Location = System::Drawing::Point(12, 156);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(134, 20);
			this->label4->TabIndex = 12;
			this->label4->Text = L"Nombre de la BD:";
			// 
			// txtNombreBd
			// 
			this->txtNombreBd->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->txtNombreBd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtNombreBd->ForeColor = System::Drawing::Color::LightGray;
			this->txtNombreBd->Location = System::Drawing::Point(152, 153);
			this->txtNombreBd->Name = L"txtNombreBd";
			this->txtNombreBd->PasswordChar = '*';
			this->txtNombreBd->Size = System::Drawing::Size(345, 26);
			this->txtNombreBd->TabIndex = 13;
			// 
			// frm_coneServer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->CancelButton = this->btnCancelar;
			this->ClientSize = System::Drawing::Size(523, 267);
			this->Controls->Add(this->txtNombreBd);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->txtContrasena);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->txtUsuario);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->txtServidor);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->btnCancelar);
			this->Controls->Add(this->btnConectar);
			this->ForeColor = System::Drawing::Color::LightGray;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::None;
			this->Name = L"frm_coneServer";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Conectarse a SQL SERVER";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnCancelar_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}

	public: String^ getServidor() { return this->servidor; }
	public: String^ getUsuario() { return this->usuario; }
	public: String^ getContrasena() { return this->contra; }
	public: ConeServer^ getConexion() { return coneS; }
	public: String^ getNombreBd() { return nombreBd; }

	private: System::Void btnConectar_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtServidor->Text == "" || txtContrasena->Text == "" || txtUsuario->Text == "" || txtNombreBd->Text == "")
		{
			MessageBox::Show("Llene todos los campos para continuar.");
			estaConectado = false;
		}
		else
		{
			coneS = gcnew ConeServer();
			if (coneS->conectar(txtServidor->Text, txtUsuario->Text, txtContrasena->Text, txtNombreBd->Text) == nullptr)
			{
				MessageBox::Show("Ocurrio un error al conectar: " + coneS->getErrorMsg());
				estaConectado = false;
			}
			else
			{
				servidor = txtServidor->Text;
				usuario = txtUsuario->Text;
				contra = txtContrasena->Text;
				nombreBd = txtNombreBd->Text;
				estaConectado = true;
				this->Close();
			}
		}
	}
};
}