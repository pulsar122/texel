unit txabout;
{ 1999-03-07 }

interface

uses

	OWindows;


type

	PAbout = ^TAbout;
	TAbout = object(TMenu)
		serst     : PStatic;
		serscroll,
		sertxt    : string;
		arraycount: integer;
		tstart    : word;
		procedure Work; virtual;
	end;




implementation

uses

	Dos,Gem,
	OTypes,OProcs,
	txrsc,txlang,txtypes,txmain,txprocs;


type

	PAboutDialog = ^TAboutDialog;
	TAboutDialog = object(THyperDialog)
		procedure EndDlg(Indx: integer; DblClick: boolean); virtual;
	end;



procedure TAboutDialog.EndDlg(Indx: integer; DblClick: boolean);
	var s: string;

	begin
		if (Indx=RTAASH) and DblClick then
			begin
				s:=GetEnv('GEMJINGPATH');
				if length(s)=0 then s:=TexelApp.DataPath+GEMJING;
				if Exist(s) then
					if Exist(TexelApp.DataPath+TEXELSOUND) then
						begin
							BusyMouse;
							Application^.StartApp(s,'-q '+TexelApp.DataPath+TEXELSOUND);
							ArrowMouse
						end
			end;
		inherited EndDlg(Indx,DblClick)
	end;



procedure TAbout.Work;
	var p : PStatic;
	    pc: PControl;
	    s : string;
	    pb: PButton;

	begin
		if ADialog=nil then
			begin
				TexelApp.ActivateExtResource;
				ADialog:=new(PAboutDialog,Init(nil,TITLE_ABOUT,STG_ABOUT,ICNTITLE_ABOUT,RTABOUT));
				if ADialog<>nil then
					begin
						new(p,Init(ADialog,RTAVERSION,26,false,BUBBLE_EASTEREGG));
						if p<>nil then
							begin
								s:=StrPSpace(2-length(ltoa(RELEASE)));
								{$IFDEF DEMO}
								if RELEASE=0 then p^.SetText('   ASH-TEXEL Version '+VtoS(TEXELVER))
								else
									p^.SetText(s+'ASH-TEXEL Version '+VtoS(TEXELVER)+'r'+ltoa(RELEASE))
								{$ELSE}
								if RELEASE=0 then p^.SetText('   ASH-TEXEL Version '+VtoS(TEXELVER))
								else
									p^.SetText(s+'ASH-TEXEL Version '+VtoS(TEXELVER)+'r'+ltoa(RELEASE))
								{$ENDIF}
							end;
						new(p,Init(ADialog,RTADATE,13,false,BUBBLE_EASTEREGG));
						if p<>nil then p^.SetText('('+TEXELDATE+')');
						new(p,Init(ADialog,RTANAME,41,false,''));
						if p<>nil then
							begin
								{$IFDEF DEMO}
								p^.Clear
								{$ELSE}
								p^.SetText('Name:     '+decode_name(ash_name))
								{$ENDIF}
							end;
						new(serst,Init(ADialog,RTASERNO,41,false,''));
						sertxt:='';
						serscroll:=dank[0];
						arraycount:=0;
						tstart:=0;
						if serst<>nil then
							begin
								{$IFDEF DEMO}
								sertxt:='      -- D E M O V E R S I O N --';
								{$ELSE}
								sertxt:='Reg.-Nr.: '+decode_name(ash_serno);
								{$ENDIF}
								serst^.SetText(sertxt)
							end;
						if Application^.Attr.Colors<16 then
							begin
								new(pc,Init(ADialog,RTAKREIS,''));
								if pc<>nil then pc^.Hide(false);
								new(pc,Init(ADialog,RTASCHATTEN,''));
								if pc<>nil then pc^.SetColor(White)
							end;
						new(pc,Init(ADialog,RTAASH,''));
						if pc<>nil then pc^.ID:=id_NoExit;
						new(PButton,Init(ADialog,RTAOK,id_OK,true,BUBBLE_ABOUT_OK))
					end;
				TexelApp.DeactivateExtResource
			end;
		if ADialog<>nil then
			begin
				ADialog^.MakeWindow
			end
	end;

end.