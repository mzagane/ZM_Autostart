object Form1: TForm1
  Left = 192
  Top = 114
  Width = 644
  Height = 222
  Caption = 'ZM AutoStart'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object Label1: TLabel
    Left = 32
    Top = 32
    Width = 77
    Height = 13
    Caption = 'Choisir un fichier'
  end
  object Label2: TLabel
    Left = 24
    Top = 72
    Width = 95
    Height = 13
    Caption = 'Le chemin du fichier'
    Visible = False
  end
  object Button1: TButton
    Left = 120
    Top = 24
    Width = 129
    Height = 25
    Caption = 'Parrcourir...'
    TabOrder = 0
    OnClick = Button1Click
  end
  object Edit1: TEdit
    Left = 120
    Top = 72
    Width = 513
    Height = 21
    TabOrder = 1
    Visible = False
  end
  object Button2: TButton
    Left = 416
    Top = 112
    Width = 75
    Height = 25
    Caption = 'OK'
    TabOrder = 2
    Visible = False
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 528
    Top = 112
    Width = 75
    Height = 25
    Caption = 'Annuler'
    TabOrder = 3
    Visible = False
    OnClick = Button3Click
  end
  object BitBtn1: TBitBtn
    Left = 544
    Top = 160
    Width = 75
    Height = 25
    Caption = '&Fermer'
    TabOrder = 4
    Kind = bkClose
  end
  object OpenDialog1: TOpenDialog
    Left = 584
    Top = 8
  end
end
