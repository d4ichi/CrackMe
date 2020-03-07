//---------------------------------------------------------------------------

#ifndef UnitMainH
#define UnitMainH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
#include <Vcl.ExtCtrls.hpp>
#include <Vcl.Imaging.pngimage.hpp>
//---------------------------------------------------------------------------
class TFormMain : public TForm
{
__published:	// IDE-managed Components
	TButton *ButtonActivate;
	TButton *ButtonAbout;
	TButton *ButtonExit;
	TImage *Image;
	TLabel *LabelKey;
	TEdit *EditKey;
	TPanel *PanelName;
	void __fastcall ButtonExitClick(TObject *Sender);
	void __fastcall ButtonAboutClick(TObject *Sender);
	void __fastcall ButtonActivateClick(TObject *Sender);
    void __fastcall EditKeyPress(TObject *Sender, System::WideChar &Key);
private:	// User declarations
public:		// User declarations
	__fastcall TFormMain(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormMain *FormMain;
//---------------------------------------------------------------------------
#endif
