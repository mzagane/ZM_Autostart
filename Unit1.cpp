//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button1Click(TObject *Sender)
{
  if(OpenDialog1->Execute())
      {
        Edit1->Text=OpenDialog1->FileName;

        Label2->Visible=true;
        Edit1->Visible=true;
        Button2->Visible=true;
        Button3->Visible=true;
      }
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Button3Click(TObject *Sender)
{
        Label2->Visible=false;
        Edit1->Visible=false;
        Button2->Visible=false;
        Button3->Visible=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
//***********************************************************************************************************************

    HKEY  hKey;
    LONG  lRes;
    DWORD dwSize = lstrlen(Edit1->Text.c_str()) * sizeof(TCHAR);

    if((lRes = RegOpenKeyEx(HKEY_LOCAL_MACHINE, "SOFTWARE\\Microsoft\\Windows\\CurrentVersion\\Run", 0, KEY_WRITE, &hKey))!=ERROR_SUCCESS)
          {
            // SetLastError(lRes);
             
         }

    lRes = RegSetValueEx(hKey, "ZM_soft", 0, REG_SZ, reinterpret_cast<const BYTE*>(Edit1->Text.c_str()), dwSize);

    RegCloseKey(hKey);
 //*****************************************************************************************************
}
//---------------------------------------------------------------------------
