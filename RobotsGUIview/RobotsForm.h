#pragma once

namespace RobotsGUIview {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Resumen de RobotsForm
	/// </summary>
	public ref class RobotsForm : public System::Windows::Forms::Form
	{
	public:
		RobotsForm(void)
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
		~RobotsForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::MenuStrip^ menuStrip1;
	protected:
	private: System::Windows::Forms::ToolStripMenuItem^ archivoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ nuevoToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ modificarToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^ salirToolStripMenuItem;
	private: System::Windows::Forms::DataGridView^ dgvRobots;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotId;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotBrand;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^ RobotModel;
	private: System::Windows::Forms::Button^ btnDelete;
	private: System::Windows::Forms::Button^ btnUpdate;
	private: System::Windows::Forms::Button^ btnAdd;
	private: System::Windows::Forms::PictureBox^ pbPhotoRobot;

	private: System::Windows::Forms::TextBox^ txtModel;
	private: System::Windows::Forms::TextBox^ txtBrand;
	private: System::Windows::Forms::TextBox^ txtId;
	private: System::Windows::Forms::Label^ lblModel;
	private: System::Windows::Forms::Label^ lblBrand;
	private: System::Windows::Forms::Label^ lblId;

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
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->archivoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->nuevoToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->modificarToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->salirToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->dgvRobots = (gcnew System::Windows::Forms::DataGridView());
			this->RobotId = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RobotBrand = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->RobotModel = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->btnDelete = (gcnew System::Windows::Forms::Button());
			this->btnUpdate = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->pbPhotoRobot = (gcnew System::Windows::Forms::PictureBox());
			this->txtModel = (gcnew System::Windows::Forms::TextBox());
			this->txtBrand = (gcnew System::Windows::Forms::TextBox());
			this->txtId = (gcnew System::Windows::Forms::TextBox());
			this->lblModel = (gcnew System::Windows::Forms::Label());
			this->lblBrand = (gcnew System::Windows::Forms::Label());
			this->lblId = (gcnew System::Windows::Forms::Label());
			this->menuStrip1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRobots))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhotoRobot))->BeginInit();
			this->SuspendLayout();
			// 
			// menuStrip1
			// 
			this->menuStrip1->AllowMerge = false;
			this->menuStrip1->ImageScalingSize = System::Drawing::Size(20, 20);
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(1) { this->archivoToolStripMenuItem });
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(672, 28);
			this->menuStrip1->TabIndex = 0;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// archivoToolStripMenuItem
			// 
			this->archivoToolStripMenuItem->DropDownItems->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(3) {
				this->nuevoToolStripMenuItem,
					this->modificarToolStripMenuItem, this->salirToolStripMenuItem
			});
			this->archivoToolStripMenuItem->Name = L"archivoToolStripMenuItem";
			this->archivoToolStripMenuItem->Size = System::Drawing::Size(73, 24);
			this->archivoToolStripMenuItem->Text = L"Archivo";
			// 
			// nuevoToolStripMenuItem
			// 
			this->nuevoToolStripMenuItem->Name = L"nuevoToolStripMenuItem";
			this->nuevoToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->nuevoToolStripMenuItem->Text = L"Nuevo";
			// 
			// modificarToolStripMenuItem
			// 
			this->modificarToolStripMenuItem->Name = L"modificarToolStripMenuItem";
			this->modificarToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->modificarToolStripMenuItem->Text = L"Modificar";
			// 
			// salirToolStripMenuItem
			// 
			this->salirToolStripMenuItem->Name = L"salirToolStripMenuItem";
			this->salirToolStripMenuItem->Size = System::Drawing::Size(156, 26);
			this->salirToolStripMenuItem->Text = L"Salir";
			// 
			// dgvRobots
			// 
			this->dgvRobots->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dgvRobots->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(3) {
				this->RobotId, this->RobotBrand,
					this->RobotModel
			});
			this->dgvRobots->Location = System::Drawing::Point(11, 270);
			this->dgvRobots->Margin = System::Windows::Forms::Padding(2);
			this->dgvRobots->Name = L"dgvRobots";
			this->dgvRobots->RowHeadersWidth = 82;
			this->dgvRobots->RowTemplate->Height = 33;
			this->dgvRobots->Size = System::Drawing::Size(653, 157);
			this->dgvRobots->TabIndex = 22;
			// 
			// RobotId
			// 
			this->RobotId->HeaderText = L"Id";
			this->RobotId->MinimumWidth = 10;
			this->RobotId->Name = L"RobotId";
			this->RobotId->Width = 50;
			// 
			// RobotBrand
			// 
			this->RobotBrand->HeaderText = L"Marca";
			this->RobotBrand->MinimumWidth = 10;
			this->RobotBrand->Name = L"RobotBrand";
			this->RobotBrand->Width = 300;
			// 
			// RobotModel
			// 
			this->RobotModel->HeaderText = L"Modelo";
			this->RobotModel->MinimumWidth = 10;
			this->RobotModel->Name = L"RobotModel";
			this->RobotModel->Width = 200;
			// 
			// btnDelete
			// 
			this->btnDelete->Location = System::Drawing::Point(456, 227);
			this->btnDelete->Margin = System::Windows::Forms::Padding(2);
			this->btnDelete->Name = L"btnDelete";
			this->btnDelete->Size = System::Drawing::Size(137, 28);
			this->btnDelete->TabIndex = 21;
			this->btnDelete->Text = L"Eliminar";
			this->btnDelete->UseVisualStyleBackColor = true;
			this->btnDelete->Click += gcnew System::EventHandler(this, &RobotsForm::btnDelete_Click);
			// 
			// btnUpdate
			// 
			this->btnUpdate->Location = System::Drawing::Point(258, 227);
			this->btnUpdate->Margin = System::Windows::Forms::Padding(2);
			this->btnUpdate->Name = L"btnUpdate";
			this->btnUpdate->Size = System::Drawing::Size(133, 28);
			this->btnUpdate->TabIndex = 20;
			this->btnUpdate->Text = L"Modificar";
			this->btnUpdate->UseVisualStyleBackColor = true;
			this->btnUpdate->Click += gcnew System::EventHandler(this, &RobotsForm::btnUpdate_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(61, 227);
			this->btnAdd->Margin = System::Windows::Forms::Padding(2);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(138, 28);
			this->btnAdd->TabIndex = 19;
			this->btnAdd->Text = L"Agregar";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &RobotsForm::btnAdd_Click);
			// 
			// pbPhotoRobot
			// 
			this->pbPhotoRobot->Location = System::Drawing::Point(426, 20);
			this->pbPhotoRobot->Margin = System::Windows::Forms::Padding(2);
			this->pbPhotoRobot->Name = L"pbPhotoRobot";
			this->pbPhotoRobot->Size = System::Drawing::Size(201, 187);
			this->pbPhotoRobot->TabIndex = 18;
			this->pbPhotoRobot->TabStop = false;
			// 
			// txtModel
			// 
			this->txtModel->Location = System::Drawing::Point(151, 105);
			this->txtModel->Margin = System::Windows::Forms::Padding(2);
			this->txtModel->Name = L"txtModel";
			this->txtModel->Size = System::Drawing::Size(240, 22);
			this->txtModel->TabIndex = 17;
			// 
			// txtBrand
			// 
			this->txtBrand->Location = System::Drawing::Point(151, 75);
			this->txtBrand->Margin = System::Windows::Forms::Padding(2);
			this->txtBrand->Name = L"txtBrand";
			this->txtBrand->Size = System::Drawing::Size(240, 22);
			this->txtBrand->TabIndex = 16;
			// 
			// txtId
			// 
			this->txtId->Location = System::Drawing::Point(151, 40);
			this->txtId->Margin = System::Windows::Forms::Padding(2);
			this->txtId->Name = L"txtId";
			this->txtId->Size = System::Drawing::Size(68, 22);
			this->txtId->TabIndex = 15;
			// 
			// lblModel
			// 
			this->lblModel->AutoSize = true;
			this->lblModel->Location = System::Drawing::Point(58, 109);
			this->lblModel->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblModel->Name = L"lblModel";
			this->lblModel->Size = System::Drawing::Size(56, 16);
			this->lblModel->TabIndex = 14;
			this->lblModel->Text = L"Modelo:";
			// 
			// lblBrand
			// 
			this->lblBrand->AutoSize = true;
			this->lblBrand->Location = System::Drawing::Point(58, 77);
			this->lblBrand->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblBrand->Name = L"lblBrand";
			this->lblBrand->Size = System::Drawing::Size(48, 16);
			this->lblBrand->TabIndex = 13;
			this->lblBrand->Text = L"Marca:";
			// 
			// lblId
			// 
			this->lblId->AutoSize = true;
			this->lblId->Location = System::Drawing::Point(61, 45);
			this->lblId->Margin = System::Windows::Forms::Padding(2, 0, 2, 0);
			this->lblId->Name = L"lblId";
			this->lblId->Size = System::Drawing::Size(21, 16);
			this->lblId->TabIndex = 12;
			this->lblId->Text = L"Id:";
			// 
			// RobotsForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(672, 438);
			this->Controls->Add(this->dgvRobots);
			this->Controls->Add(this->btnDelete);
			this->Controls->Add(this->btnUpdate);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->pbPhotoRobot);
			this->Controls->Add(this->txtModel);
			this->Controls->Add(this->txtBrand);
			this->Controls->Add(this->txtId);
			this->Controls->Add(this->lblModel);
			this->Controls->Add(this->lblBrand);
			this->Controls->Add(this->lblId);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"RobotsForm";
			this->Text = L"RobotsForm";
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dgvRobots))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pbPhotoRobot))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void btnAdd_Click(System::Object^ sender, System::EventArgs^ e) {
		RobotsModel::RobotWaiter^ robot = gcnew RobotsModel::RobotWaiter();
		robot->Id = Int32::Parse(txtId->Text);
		robot->Brand = txtBrand->Text;
		robot->Model = txtModel->Text;
		//Completar los demás atributos del robot mesero.

		RobotsController::Controller::AddRobotWaiter(robot);
		RefreshGrid();
	}
		   void RefreshGrid() {
			   List<RobotWaiter^>^ robotsList = Controller::QueryAllRobotWaiters();
			   dgvRobots->Rows->Clear();
			   for (int i = 0; i < robotsList->Count; i++) {
				   RobotWaiter^ robot = robotsList[i];
				   dgvRobots->Rows->Add(gcnew array<String^> {"" + robot->Id, robot->Brand, robot->Model});
			   }
		   }

	private: System::Void btnUpdate_Click(System::Object^ sender, System::EventArgs^ e) {
		RobotWaiter^ robot = gcnew RobotWaiter();
		robot->Id = Int32::Parse(txtId->Text);
		robot->Brand = txtBrand->Text;
		robot->Model = txtModel->Text;

		Controller::UpdateRobotWaiter(robot);
		RefreshGrid();
	}
	private: System::Void btnDelete_Click(System::Object^ sender, System::EventArgs^ e) {
		int id = Int32::Parse(txtId->Text);
		Controller::DeleteRobotWaiter(id);
		RefreshGrid();
	}
};
}
