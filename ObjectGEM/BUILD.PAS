{****************************************
 *   O b j e c t G E M   Version 1.50   *
 *   Copyright 1992-98 by Thomas Much   *
 ****************************************
 *            Build-Programm            *
 ****************************************
 *     Thomas Much, Gerwigstra�e 46,    *
 * 76131 Karlsruhe, Fax (0721) 62 28 21 *
 *          Thomas Much @ KA2           *
 *  Thomas.Much@stud.uni-karlsruhe.de   *
 *  www.uni-karlsruhe.de/~Thomas.Much   *
 ****************************************
 *      erstellt am:        03.03.1994  *
 *      letztes Update am:  03.01.1998  *
 ****************************************}

{
  WICHTIGE ANMERKUNGEN ZUM QUELLTEXT:

	ObjectGEM ist Freeware, d.h. jeder darf die Units verwenden, ohne
	f�r die damit entwickelten Programme Lizenzen o.�. zahlen zu m�ssen,
	so lange alle Dateien _zusammen_ und _unver�ndert_ (!) weitergegeben
	werden.
	
	Ich freue mich nat�rlich trotzdem �ber kleine Aufmerksamkeiten wie
	Belegexemplare, originelle T-Shirts (L oder XL) sowie gr�nen Tee
	aus Japan :-)

  WICHTIG: Wer den Quelltext ver�ndert und dann Probleme beim Compilieren,
  Ausf�hren o.�. hat, kann nicht damit rechnen, da� ich den Fehler suche;
  tritt der Fehler allerdings auch mit dem Original-Quelltext auf, w�rde
  ich mich �ber eine genaue Fehlerbeschreibung freuen. Ver�nderte Quell-
  texte d�rfen _nicht_ weitergegeben werden, dies w�re ein Versto� gegen
  das Copyright!

  Wer beim Durchst�bern des Textes auf vermeintliche Fehler oder verbesse-
  rungsw�rdige Stellen trifft (von letzterem gibt es sicherlich noch viele),
  kann mir dies gerne mitteilen - ich habe auch ich nichts gegen kostenlos
  zur Verf�gung gestellte optimierte Routinen (sofern sich jemand die M�he
  macht). Wer in anderen Projekten, die nicht in direkter Konkurrenz zu
  ObjectGEM stehen, einzelne Routinen verwenden m�chte, wendet sich bitte
  an mich (ein solcher Austausch sollte kein Problem sein).

  Wer sich auf nicht dokumentierte "implementation"- oder "private"-Eigen-
  schaften verl��t, darf sich nicht �ber Inkompatibilit�ten zu sp�teren
  Versionen wundern; wer meint, eine Dokumentationsl�cke entdeckt zu haben,
  kann mir dies gerne mitteilen.

  Kleine Info zum Schlu�: Als "default tabsize" verwende ich 2. Wer drei
  Punkte ("...") im Quelltext entdeckt, hat eine Stelle gefunden, an der
  ich z.Z. arbeite ;-)

  "M�ge die OOP mit Euch sein!"
}


{$B+,D-,G-,I-,L-,N-,P-,Q-,R-,S-,T-,V-,X+,Z-}

program Build;

	uses  Objects,
				OTypes,
				OProcs,
				OWindows,
				OValidat,
				ODialogs,
				OStdWnds,
				ODB;

begin
end.