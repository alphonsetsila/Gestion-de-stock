#include "accueil.h"

using namespace System;
using namespace System ::Windows::Forms;

[STAThread]
void main(array<String^>^ arg) {
	Application::EnableVisualStyles();
	Application::SetCompatibleTextRenderingDefault(false);

	gestion_stock::accueil form;
	Application::Run(%form);
}