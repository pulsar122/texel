{***************************************
 *      T E X E L  Version 2.30r0      *
 * Copyright ½1994-2000 by Thomas Much *
 ***************************************
 *    Thomas Much, Gerwigstraže 46,    *
 *  76131 Karlsruhe, (0721) 62 28 41   *
 *        thomas@snailshell.de         *
 *      http://www.texel-home.de       *
 ***************************************
 *   erstellt am:         05.10.1994   *
 *   letztes Update am:   03.03.2000   *
 ***************************************}

{       | deutsch   | englisch          | franz”sisch      
	------|-----------|-------------------|------------------
  Final |           | ENGLISH           | FRENCH           
  Demo  |      DEMO |      DEMO ENGLISH | DEMO FRENCH     }

{$B+,D-,G-,I-,L-,N-,P-,Q-,R-,S-,T-,V-,X+,Z-}

{$M 182272}

{$DEFINE WDIALOG}
{DEFINE NVDI5}

program Texel;

uses

	txtypes,txmain;

begin
	TexelApp.Init(TEXELNAME);
	TexelApp.Run;
	TexelApp.Done;
end.