#pragma once

#include "ConeServer.h"
#include "frm_coneServer.h"

namespace FUPDATESQLSERVER {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::IO;
	using namespace System::Text;

	/// <summary>
	/// Resumen de MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
		ConeServer^ coneServer;
		String^ nombreArchi;
		array<String^>^ encabezados;
	private: System::Windows::Forms::Panel^  panel5;
	private: System::Windows::Forms::Panel^  panelTxtSqlServer;
	private: System::Windows::Forms::Panel^  panel6;
	private: System::Windows::Forms::OpenFileDialog^  openFile;
	private: System::Windows::Forms::DataGridView^  tableCsv;
	private: System::Windows::Forms::ProgressBar^  bar;


			 frm_coneServer^ frmCone;

	public:
		MainForm(void)
		{
			InitializeComponent();
			//
			//TODO: agregar código de constructor aquí
			//
			frmCone = nullptr;
			coneServer = nullptr;
			bar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			coneServer = gcnew ConeServer();
		}

	protected:
		/// <summary>
		/// Limpiar los recursos que se estén usando.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^  mainMenu;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^  menuArchivo;
	private: System::Windows::Forms::ToolStripMenuItem^  itemAbrirCSV;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator1;
	private: System::Windows::Forms::ToolStripMenuItem^  itemConectarseSQLSERVER;
	private: System::Windows::Forms::ToolStripSeparator^  toolStripSeparator2;
	private: System::Windows::Forms::ToolStripMenuItem^  itemSalir;
	private: System::Windows::Forms::ToolStripMenuItem^  menuAyuda;
	private: System::Windows::Forms::ToolStripMenuItem^  itemVerDoc;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::Panel^  panel1;
	private: System::Windows::Forms::Label^  lbdConectadoInfo;
	private: System::Windows::Forms::Panel^  panel2;
	private: System::Windows::Forms::Panel^  panel4;
	private: System::Windows::Forms::Splitter^  splitter1;
	private: System::Windows::Forms::Panel^  panelArchivoCSV;

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::RichTextBox^  txtSql;
	private: System::Windows::Forms::Label^  lbdZoom;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Button^  btnEjecutar;
	private: System::Windows::Forms::ContextMenuStrip^  menuTxtSql;
	private: System::Windows::Forms::ToolStripMenuItem^  opCopiarTxtSql;
	private: System::Windows::Forms::ToolStripMenuItem^  opPegarTxtSql;
	private: System::Windows::Forms::ToolStripMenuItem^  opZoomMas;
	private: System::Windows::Forms::ToolStripMenuItem^  opZoomMenos;

	protected:
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
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(MainForm::typeid));
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle5 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->mainMenu = (gcnew System::Windows::Forms::MenuStrip());
			this->menuArchivo = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->itemAbrirCSV = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator1 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->itemConectarseSQLSERVER = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->toolStripSeparator2 = (gcnew System::Windows::Forms::ToolStripSeparator());
			this->itemSalir = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->menuAyuda = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->itemVerDoc = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->bar = (gcnew System::Windows::Forms::ProgressBar());
			this->lbdConectadoInfo = (gcnew System::Windows::Forms::Label());
			this->panel2 = (gcnew System::Windows::Forms::Panel());
			this->panel4 = (gcnew System::Windows::Forms::Panel());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->panel5 = (gcnew System::Windows::Forms::Panel());
			this->btnEjecutar = (gcnew System::Windows::Forms::Button());
			this->panelTxtSqlServer = (gcnew System::Windows::Forms::Panel());
			this->txtSql = (gcnew System::Windows::Forms::RichTextBox());
			this->menuTxtSql = (gcnew System::Windows::Forms::ContextMenuStrip(this->components));
			this->opCopiarTxtSql = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opPegarTxtSql = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opZoomMas = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->opZoomMenos = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->panel6 = (gcnew System::Windows::Forms::Panel());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->lbdZoom = (gcnew System::Windows::Forms::Label());
			this->splitter1 = (gcnew System::Windows::Forms::Splitter());
			this->panelArchivoCSV = (gcnew System::Windows::Forms::Panel());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->tableCsv = (gcnew System::Windows::Forms::DataGridView());
			this->openFile = (gcnew System::Windows::Forms::OpenFileDialog());
			this->mainMenu->SuspendLayout();
			this->panel1->SuspendLayout();
			this->panel2->SuspendLayout();
			this->panel4->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->panel5->SuspendLayout();
			this->panelTxtSqlServer->SuspendLayout();
			this->menuTxtSql->SuspendLayout();
			this->panel6->SuspendLayout();
			this->panelArchivoCSV->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tableCsv))->BeginInit();
			this->SuspendLayout();
			// 
			// mainMenu
			// 
			this->mainMenu->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) { this->menuArchivo, this->menuAyuda });
			this->mainMenu->Location = System::Drawing::Point(0, 0);
			this->mainMenu->Name = L"mainMenu";
			this->mainMenu->Size = System::Drawing::Size(1421, 24);
			this->mainMenu->TabIndex = 0;
			this->mainMenu->Text = L"Menú";
			// 
			// menuArchivo
			// 
			this->menuArchivo->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->itemAbrirCSV,
					this->toolStripSeparator1, this->itemConectarseSQLSERVER, this->toolStripSeparator2, this->itemSalir
			});
			this->menuArchivo->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuArchivo.Image")));
			this->menuArchivo->Name = L"menuArchivo";
			this->menuArchivo->Size = System::Drawing::Size(76, 20);
			this->menuArchivo->Text = L"Archivo";
			// 
			// itemAbrirCSV
			// 
			this->itemAbrirCSV->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"itemAbrirCSV.Image")));
			this->itemAbrirCSV->Name = L"itemAbrirCSV";
			this->itemAbrirCSV->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->itemAbrirCSV->Size = System::Drawing::Size(250, 22);
			this->itemAbrirCSV->Text = L"Abrir CSV";
			this->itemAbrirCSV->Click += gcnew System::EventHandler(this, &MainForm::itemAbrirCSV_Click);
			// 
			// toolStripSeparator1
			// 
			this->toolStripSeparator1->Name = L"toolStripSeparator1";
			this->toolStripSeparator1->Size = System::Drawing::Size(247, 6);
			// 
			// itemConectarseSQLSERVER
			// 
			this->itemConectarseSQLSERVER->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"itemConectarseSQLSERVER.Image")));
			this->itemConectarseSQLSERVER->Name = L"itemConectarseSQLSERVER";
			this->itemConectarseSQLSERVER->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::T));
			this->itemConectarseSQLSERVER->Size = System::Drawing::Size(250, 22);
			this->itemConectarseSQLSERVER->Text = L"Conectarse a SQL-SERVER";
			this->itemConectarseSQLSERVER->Click += gcnew System::EventHandler(this, &MainForm::itemConectarseSQLSERVER_Click);
			// 
			// toolStripSeparator2
			// 
			this->toolStripSeparator2->Name = L"toolStripSeparator2";
			this->toolStripSeparator2->Size = System::Drawing::Size(247, 6);
			// 
			// itemSalir
			// 
			this->itemSalir->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"itemSalir.Image")));
			this->itemSalir->Name = L"itemSalir";
			this->itemSalir->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::Q));
			this->itemSalir->Size = System::Drawing::Size(250, 22);
			this->itemSalir->Text = L"Salir";
			this->itemSalir->Click += gcnew System::EventHandler(this, &MainForm::itemSalir_Click);
			// 
			// menuAyuda
			// 
			this->menuAyuda->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->itemVerDoc });
			this->menuAyuda->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"menuAyuda.Image")));
			this->menuAyuda->Name = L"menuAyuda";
			this->menuAyuda->Size = System::Drawing::Size(69, 20);
			this->menuAyuda->Text = L"Ayuda";
			// 
			// itemVerDoc
			// 
			this->itemVerDoc->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"itemVerDoc.Image")));
			this->itemVerDoc->Name = L"itemVerDoc";
			this->itemVerDoc->Size = System::Drawing::Size(178, 22);
			this->itemVerDoc->Text = L"Ver Documentación";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label1->ForeColor = System::Drawing::Color::LightGray;
			this->label1->Location = System::Drawing::Point(12, 9);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(92, 17);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Conectado a:";
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->bar);
			this->panel1->Controls->Add(this->lbdConectadoInfo);
			this->panel1->Controls->Add(this->label1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel1->Location = System::Drawing::Point(0, 24);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(1421, 38);
			this->panel1->TabIndex = 2;
			// 
			// bar
			// 
			this->bar->Location = System::Drawing::Point(200, 9);
			this->bar->Name = L"bar";
			this->bar->Size = System::Drawing::Size(1209, 23);
			this->bar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
			this->bar->TabIndex = 3;
			this->bar->Visible = false;
			// 
			// lbdConectadoInfo
			// 
			this->lbdConectadoInfo->AutoSize = true;
			this->lbdConectadoInfo->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.5F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lbdConectadoInfo->ForeColor = System::Drawing::Color::LightGray;
			this->lbdConectadoInfo->Location = System::Drawing::Point(110, 10);
			this->lbdConectadoInfo->Name = L"lbdConectadoInfo";
			this->lbdConectadoInfo->Size = System::Drawing::Size(84, 16);
			this->lbdConectadoInfo->TabIndex = 2;
			this->lbdConectadoInfo->Text = L"Sin conexión";
			// 
			// panel2
			// 
			this->panel2->Controls->Add(this->panel4);
			this->panel2->Controls->Add(this->splitter1);
			this->panel2->Controls->Add(this->panelArchivoCSV);
			this->panel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel2->Location = System::Drawing::Point(0, 62);
			this->panel2->Name = L"panel2";
			this->panel2->Size = System::Drawing::Size(1421, 479);
			this->panel2->TabIndex = 3;
			// 
			// panel4
			// 
			this->panel4->Controls->Add(this->groupBox1);
			this->panel4->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel4->Location = System::Drawing::Point(882, 0);
			this->panel4->Name = L"panel4";
			this->panel4->Size = System::Drawing::Size(539, 479);
			this->panel4->TabIndex = 2;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->panel5);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox1->ForeColor = System::Drawing::Color::LightGray;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(539, 479);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Script SQL";
			// 
			// panel5
			// 
			this->panel5->Controls->Add(this->btnEjecutar);
			this->panel5->Controls->Add(this->panelTxtSqlServer);
			this->panel5->Controls->Add(this->panel6);
			this->panel5->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel5->Location = System::Drawing::Point(3, 16);
			this->panel5->Name = L"panel5";
			this->panel5->Size = System::Drawing::Size(533, 460);
			this->panel5->TabIndex = 4;
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
			this->btnEjecutar->Location = System::Drawing::Point(386, 418);
			this->btnEjecutar->Name = L"btnEjecutar";
			this->btnEjecutar->Size = System::Drawing::Size(138, 33);
			this->btnEjecutar->TabIndex = 3;
			this->btnEjecutar->Text = L"Ejecutar";
			this->btnEjecutar->UseVisualStyleBackColor = false;
			this->btnEjecutar->Click += gcnew System::EventHandler(this, &MainForm::btnEjecutar_Click);
			// 
			// panelTxtSqlServer
			// 
			this->panelTxtSqlServer->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->panelTxtSqlServer->Controls->Add(this->txtSql);
			this->panelTxtSqlServer->Location = System::Drawing::Point(6, 28);
			this->panelTxtSqlServer->Name = L"panelTxtSqlServer";
			this->panelTxtSqlServer->Size = System::Drawing::Size(524, 384);
			this->panelTxtSqlServer->TabIndex = 1;
			// 
			// txtSql
			// 
			this->txtSql->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(30)), static_cast<System::Int32>(static_cast<System::Byte>(30)),
				static_cast<System::Int32>(static_cast<System::Byte>(30)));
			this->txtSql->ContextMenuStrip = this->menuTxtSql;
			this->txtSql->Dock = System::Windows::Forms::DockStyle::Fill;
			this->txtSql->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->txtSql->ForeColor = System::Drawing::Color::LightGray;
			this->txtSql->Location = System::Drawing::Point(0, 0);
			this->txtSql->Name = L"txtSql";
			this->txtSql->Size = System::Drawing::Size(524, 384);
			this->txtSql->TabIndex = 0;
			this->txtSql->Text = L"";
			this->txtSql->MouseClick += gcnew System::Windows::Forms::MouseEventHandler(this, &MainForm::txtSql_MouseClick);
			// 
			// menuTxtSql
			// 
			this->menuTxtSql->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(4) {
				this->opCopiarTxtSql, this->opPegarTxtSql,
					this->opZoomMas, this->opZoomMenos
			});
			this->menuTxtSql->Name = L"menuTxtSql";
			this->menuTxtSql->Size = System::Drawing::Size(158, 92);
			// 
			// opCopiarTxtSql
			// 
			this->opCopiarTxtSql->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"opCopiarTxtSql.Image")));
			this->opCopiarTxtSql->Name = L"opCopiarTxtSql";
			this->opCopiarTxtSql->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::C));
			this->opCopiarTxtSql->Size = System::Drawing::Size(157, 22);
			this->opCopiarTxtSql->Text = L"Copiar";
			this->opCopiarTxtSql->Click += gcnew System::EventHandler(this, &MainForm::opCopiarTxtSql_Click);
			// 
			// opPegarTxtSql
			// 
			this->opPegarTxtSql->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"opPegarTxtSql.Image")));
			this->opPegarTxtSql->Name = L"opPegarTxtSql";
			this->opPegarTxtSql->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::V));
			this->opPegarTxtSql->Size = System::Drawing::Size(157, 22);
			this->opPegarTxtSql->Text = L"Pegar";
			this->opPegarTxtSql->Click += gcnew System::EventHandler(this, &MainForm::opPegarTxtSql_Click);
			// 
			// opZoomMas
			// 
			this->opZoomMas->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"opZoomMas.Image")));
			this->opZoomMas->Name = L"opZoomMas";
			this->opZoomMas->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::I));
			this->opZoomMas->Size = System::Drawing::Size(157, 22);
			this->opZoomMas->Text = L"Zoom +";
			this->opZoomMas->Click += gcnew System::EventHandler(this, &MainForm::opZoomMas_Click);
			// 
			// opZoomMenos
			// 
			this->opZoomMenos->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"opZoomMenos.Image")));
			this->opZoomMenos->Name = L"opZoomMenos";
			this->opZoomMenos->ShortcutKeys = static_cast<System::Windows::Forms::Keys>((System::Windows::Forms::Keys::Control | System::Windows::Forms::Keys::O));
			this->opZoomMenos->Size = System::Drawing::Size(157, 22);
			this->opZoomMenos->Text = L"Zoom -";
			this->opZoomMenos->Click += gcnew System::EventHandler(this, &MainForm::opZoomMenos_Click);
			// 
			// panel6
			// 
			this->panel6->Controls->Add(this->label2);
			this->panel6->Controls->Add(this->lbdZoom);
			this->panel6->Dock = System::Windows::Forms::DockStyle::Top;
			this->panel6->Location = System::Drawing::Point(0, 0);
			this->panel6->Name = L"panel6";
			this->panel6->Size = System::Drawing::Size(533, 22);
			this->panel6->TabIndex = 0;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(3, 0);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(37, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Zoom:";
			// 
			// lbdZoom
			// 
			this->lbdZoom->AutoSize = true;
			this->lbdZoom->Location = System::Drawing::Point(56, 0);
			this->lbdZoom->Name = L"lbdZoom";
			this->lbdZoom->Size = System::Drawing::Size(33, 13);
			this->lbdZoom->TabIndex = 2;
			this->lbdZoom->Text = L"100%";
			// 
			// splitter1
			// 
			this->splitter1->Location = System::Drawing::Point(879, 0);
			this->splitter1->Name = L"splitter1";
			this->splitter1->Size = System::Drawing::Size(3, 479);
			this->splitter1->TabIndex = 1;
			this->splitter1->TabStop = false;
			// 
			// panelArchivoCSV
			// 
			this->panelArchivoCSV->Controls->Add(this->groupBox2);
			this->panelArchivoCSV->Dock = System::Windows::Forms::DockStyle::Left;
			this->panelArchivoCSV->Location = System::Drawing::Point(0, 0);
			this->panelArchivoCSV->Name = L"panelArchivoCSV";
			this->panelArchivoCSV->Size = System::Drawing::Size(879, 479);
			this->panelArchivoCSV->TabIndex = 0;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->tableCsv);
			this->groupBox2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->groupBox2->ForeColor = System::Drawing::Color::LightGray;
			this->groupBox2->Location = System::Drawing::Point(0, 0);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(879, 479);
			this->groupBox2->TabIndex = 0;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Archivo CSV";
			// 
			// tableCsv
			// 
			dataGridViewCellStyle1->ForeColor = System::Drawing::Color::Black;
			this->tableCsv->AlternatingRowsDefaultCellStyle = dataGridViewCellStyle1;
			this->tableCsv->AutoSizeColumnsMode = System::Windows::Forms::DataGridViewAutoSizeColumnsMode::AllCells;
			this->tableCsv->BackgroundColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(28)), static_cast<System::Int32>(static_cast<System::Byte>(28)),
				static_cast<System::Int32>(static_cast<System::Byte>(28)));
			this->tableCsv->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->tableCsv->ColumnHeadersBorderStyle = System::Windows::Forms::DataGridViewHeaderBorderStyle::None;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleCenter;
			dataGridViewCellStyle2->BackColor = System::Drawing::Color::SteelBlue;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::Color::LightGray;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tableCsv->ColumnHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->tableCsv->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle3->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			dataGridViewCellStyle3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle3->ForeColor = System::Drawing::Color::LightGray;
			dataGridViewCellStyle3->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle3->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle3->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->tableCsv->DefaultCellStyle = dataGridViewCellStyle3;
			this->tableCsv->Dock = System::Windows::Forms::DockStyle::Fill;
			this->tableCsv->EnableHeadersVisualStyles = false;
			this->tableCsv->GridColor = System::Drawing::Color::LightGray;
			this->tableCsv->Location = System::Drawing::Point(3, 16);
			this->tableCsv->Name = L"tableCsv";
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle4->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			dataGridViewCellStyle4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			dataGridViewCellStyle4->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle4->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle4->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle4->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->tableCsv->RowHeadersDefaultCellStyle = dataGridViewCellStyle4;
			this->tableCsv->RowHeadersVisible = false;
			dataGridViewCellStyle5->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(37)), static_cast<System::Int32>(static_cast<System::Byte>(37)),
				static_cast<System::Int32>(static_cast<System::Byte>(38)));
			dataGridViewCellStyle5->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			dataGridViewCellStyle5->ForeColor = System::Drawing::Color::LightGray;
			this->tableCsv->RowsDefaultCellStyle = dataGridViewCellStyle5;
			this->tableCsv->RowTemplate->DefaultCellStyle->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->tableCsv->RowTemplate->DefaultCellStyle->Font = (gcnew System::Drawing::Font(L"Comic Sans MS", 9.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->tableCsv->RowTemplate->DefaultCellStyle->ForeColor = System::Drawing::Color::LightGray;
			this->tableCsv->SelectionMode = System::Windows::Forms::DataGridViewSelectionMode::FullRowSelect;
			this->tableCsv->Size = System::Drawing::Size(873, 460);
			this->tableCsv->TabIndex = 0;
			// 
			// openFile
			// 
			this->openFile->FileName = L"openFile";
			this->openFile->Filter = L"Archivos CSV|*.csv";
			this->openFile->Title = L"F-UPDATE-SQLSERVER - CSV";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(45)), static_cast<System::Int32>(static_cast<System::Byte>(45)),
				static_cast<System::Int32>(static_cast<System::Byte>(48)));
			this->ClientSize = System::Drawing::Size(1421, 541);
			this->Controls->Add(this->panel2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->mainMenu);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MainMenuStrip = this->mainMenu;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterParent;
			this->Text = L"F-UPDATE-SQLSERVER";
			this->mainMenu->ResumeLayout(false);
			this->mainMenu->PerformLayout();
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->panel2->ResumeLayout(false);
			this->panel4->ResumeLayout(false);
			this->groupBox1->ResumeLayout(false);
			this->panel5->ResumeLayout(false);
			this->panelTxtSqlServer->ResumeLayout(false);
			this->menuTxtSql->ResumeLayout(false);
			this->panel6->ResumeLayout(false);
			this->panel6->PerformLayout();
			this->panelArchivoCSV->ResumeLayout(false);
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->tableCsv))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

#pragma region Eventos de cerrados de forms

	private: System::Void cerrando_frmConeServer(System::Object^ sender, FormClosedEventArgs^ e)
	{
		if (frmCone->estaConectado)
		{
			coneServer = frmCone->getConexion();
			lbdConectadoInfo->Text = frmCone->getServidor();
		}
	}

#pragma endregion

	private: System::Void txtSql_MouseClick(System::Object^  sender, System::Windows::Forms::MouseEventArgs^  e) {
		if (e->Button == System::Windows::Forms::MouseButtons::Right)
		{
			menuTxtSql->Show(Cursor->Position);
		}
	}
	private: System::Void itemSalir_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Close();
	}
	private: System::Void itemConectarseSQLSERVER_Click(System::Object^  sender, System::EventArgs^  e) {

		if (frmCone != nullptr)
		{
			delete frmCone;
		}

		if (coneServer != nullptr)
		{
			delete coneServer;
			coneServer = gcnew ConeServer();
		}

		frmCone = gcnew frm_coneServer();
		frmCone->FormClosed += gcnew FormClosedEventHandler(this, &MainForm::cerrando_frmConeServer);
		frmCone->Show();
	}

	private: System::Void opZoomMas_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtSql->ZoomFactor < 2)
		{
			txtSql->ZoomFactor += 0.05;
			lbdZoom->Text = (txtSql->ZoomFactor * 100).ToString() + " %";
		}
	}
	private: System::Void opZoomMenos_Click(System::Object^  sender, System::EventArgs^  e) {
		if (txtSql->ZoomFactor > 0.1)
		{
			txtSql->ZoomFactor -= 0.05;
			lbdZoom->Text = (txtSql->ZoomFactor * 100).ToString() + " %";
		}
	}

	public: DataTable^ ConvertCSVtoDataTable(String^ strFilePath)
	{
		StreamReader^ sr = gcnew StreamReader(strFilePath);
		array <String^>^ headers = encabezados = sr->ReadLine()->Split(',');
		DataTable^ dt = gcnew DataTable();
		for each(String^ header in headers)
		{
			dt->Columns->Add(header);
		}

		bar->Visible = true;
		bar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;
		bar->Maximum = 500000;
		bar->Value = 0;
		this->Update();

		while (!sr->EndOfStream)
		{
			array<String^>^ rows = sr->ReadLine()->Split(',');
			for (int i = 0; i < rows->Length; i++)
			{
				String^ str = rows[i]->Replace("\"", "");
				rows[i] = str;
			}
			DataRow^ dr = dt->NewRow();
			for (int i = 0; i < headers->Length; i++)
			{
				dr[i] = rows[i];
			}
			dt->Rows->Add(dr);
			bar->Value++;
			this->Update();
		}

		bar->Visible = false;
		bar->Style = System::Windows::Forms::ProgressBarStyle::Continuous;

		return dt;
	}

	private: System::Void itemAbrirCSV_Click(System::Object^  sender, System::EventArgs^  e) {
		if (openFile->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			nombreArchi = openFile->FileName;
			tableCsv->DataSource = ConvertCSVtoDataTable(nombreArchi);
		}
	}

	private: System::Void btnEjecutar_Click(System::Object^  sender, System::EventArgs^  e) {
		if (tableCsv->Rows->Count < 1)
		{
			MessageBox::Show("Importe primero un archivo csv");
			return;
		}
		else
		if (coneServer->estaConectado())
		{
			bar->Visible = true;
			bar->Maximum = tableCsv->Rows->Count;
			bar->Value = 0;
			this->Update();
			String^ query = txtSql->Text;
			for (int fil = 1; fil < tableCsv->Rows->Count; fil++)
			{
				for (int col = 0; col < tableCsv->Rows[fil]->Cells->Count; col++)
				{
					for each(String^ cabecera in encabezados)
					{
						if (cabecera == tableCsv->Columns[col]->HeaderText)
						{
							//---- Pendiente buscar porque no puedo reemplazar por ejemplo [nombre] por el valor
							//---- y si puedo reemplazar solo nombre por el valor
							String^ valor = tableCsv->Rows[fil]->Cells[col]->Value->ToString();
							query = query->Replace(cabecera, valor);
						}
					}
				}
				if (!coneServer->ejecutarScriptSql(query))
				{
					MessageBox::Show(coneServer->getErrorMsg());
				}
				bar->Value = fil;
				this->Update();
			}
			bar->Visible = false;
		}
		else
		{
			MessageBox::Show("Conectese primero a una base de datos.");
		}

	}

	public: void pegarEnTxtSql()
	{
		if (!Clipboard::ContainsText(TextDataFormat::Text))
		{
			return;
		}

		int i = 0;
		String^ s;

		i = txtSql->SelectionStart;
		s = txtSql->Text->Substring(i);
		txtSql->Text = txtSql->Text->Substring(0, i);
		txtSql->Text = txtSql->Text + Clipboard::GetText(TextDataFormat::Text);
		txtSql->Text = txtSql->Text + s;
	}

	public: void copiarDesdeTxtSql()
	{
		const int i = txtSql->SelectionStart;
		Clipboard::SetText(txtSql->SelectedText);
		txtSql->SelectionStart = i;
	}

	private: System::Void opPegarTxtSql_Click(System::Object^  sender, System::EventArgs^  e) {
		pegarEnTxtSql();
	}
	private: System::Void opCopiarTxtSql_Click(System::Object^  sender, System::EventArgs^  e) {
		copiarDesdeTxtSql();
	}
};
}
