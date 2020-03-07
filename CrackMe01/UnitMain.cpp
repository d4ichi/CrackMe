//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "UnitMain.h"
#include "UnitAbout.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TFormMain *FormMain;
//---------------------------------------------------------------------------


// Define a key
const char* key = "FASTCALL";

// Key Evaluation Function
 void __fastcall EvalKey(const char* key, String input_key){

	// Compare the plain text key and user input.
	if (input_key==key) {
		Application->MessageBox(L"Activation completed successfully. Good job!", L"Activation Successful", MB_ICONINFORMATION);
	}else{
		Application->MessageBox(L"The serial key you entered is invalid.", L"Activation Failed", MB_ICONERROR);
	}

}

__fastcall TFormMain::TFormMain(TComponent* Owner)
	: TForm(Owner)
{
}
//---------------------------------------------------------------------------
void __fastcall TFormMain::ButtonExitClick(TObject *Sender)
{
	Application->Terminate();
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::ButtonAboutClick(TObject *Sender)
{
	FormAbout->Show();
}
//---------------------------------------------------------------------------

void __fastcall TFormMain::ButtonActivateClick(TObject *Sender)
{
	String input_key = EditKey->Text;
	EvalKey(key, input_key);
}
//---------------------------------------------------------------------------

 void __fastcall TFormMain::EditKeyPress(TObject *Sender, System::WideChar &Key){
  if(Key == VK_RETURN){
	String input_key = EditKey->Text;
	EvalKey(key, input_key);
	Key = 0;
  }
}
