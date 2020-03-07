//---------------------------------------------------------------------------

#ifndef UnitAboutH
#define UnitAboutH
//---------------------------------------------------------------------------
#include <System.Classes.hpp>
#include <Vcl.Controls.hpp>
#include <Vcl.StdCtrls.hpp>
#include <Vcl.Forms.hpp>
//---------------------------------------------------------------------------
class TFormAbout : public TForm
{
__published:	// IDE-managed Components
	TButton *ButtonOK;
	TGroupBox *GroupBoxInfo;
	TGroupBox *GroupBoxInstruction;
	TLabel *LabelInstruction;
	TLabel *LabelLevel;
	TLabel *LabelAuthor;
	TLabel *LabelDue;
	void __fastcall ButtonOKClick(TObject *Sender);
private:	// User declarations
public:		// User declarations
	__fastcall TFormAbout(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TFormAbout *FormAbout;
//---------------------------------------------------------------------------
#endif
