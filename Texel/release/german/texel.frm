;die Zahlenformate
;nur die _Namen_ in den Zeilen bis ";ende" dÅrfen geÑndert werden!
;wer irgend etwas anderes Ñndert, verliert die DateikompatibilitÑt!
;benutzerdefinierte Zahlenformate kînnen in texelusr.frm eingetragen werden

#0   Alle
#1   Benutzerdefiniert
#2   Zahlen
#3   Datum
#4   Uhrzeit
#5   Prozent etc.
#6   Wissenschaft
#7   WÑhrung
#8   Winkel
#9   Computer

m1  Januar Februar MÑrz April Mai Juni Juli August September Oktober November Dezember
m2  Jan Feb MÑr Apr Mai Jun Jul Aug Sep Okt Nov Dez
d1  Montag Dienstag Mittwoch Donnerstag Freitag Samstag Sonntag
d2  Mo Di Mi Do Fr Sa So

;ende


c   Weiû Schwarz Rot GrÅn Blau Zyan Gelb Magenta Hellgrau Dunkelgrau Dunkelrot DunkelgrÅn Dunkelblau Dunkelzyan Dunkelgelb Dunkelmagenta


2   1  {0|,00}
2   2  {0}
2   3  {#.##0}
2   4  {#.##0|,00}
2   5  {#.##0};-{#.##0}
2   6  [Schwarz]{#.##0};[Rot]-{#.##0}
2   7  {#.##0|,00};-{#.##0|,00}
2   8  [Schwarz]{#.##0|,00};[Rot]-{#.##0|,00}

3   9  [TT].[MM].[JJJJ]
3  10  [TT].[MM].[JJ]
3  11  [TT]. [MMM] [JJ]
3  12  [TT]. [MMM]
3  13  [MMM] [JJ]
3  14  [TTT], [TT]. [MMM] [JJ]
3  15  [TTTT], [T]. [MMMM] [JJJJ]
3  16  [TT].[MM].[JJJJ] [hh]:[mm]

4  17  [H]:[mm] [am/pm]
4  18  [H]:[mm]:[ss] [am/pm]
4  19  [hh]:[mm]
4  20  [hh]:[mm]:[ss]
4  21  [mm]:[ss]
4  22  [TT].[MM].[JJJJ] [hh]:[mm]

5  23  (100){0}%
5  24  (100){0|,00}%
5  25  (1000000){0} ppm
5  26  (1000000){0|,00} ppm

6  27  {0|,00000000E0}
6  28  {0|,00E+00}
6  29  {0|,0E+0}

7  30  [Schwarz]{#.##0|,00} DM;[Rot]-{#.##0|,00} DM
7  31  {#.##0|,00} DM;-{#.##0|,00} DM
7  32  [Schwarz]{#.##0} DM;[Rot]-{#.##0} DM
7  33  {#.##0} DM;-{#.##0} DM

8  34  {0}¯
8  35  {0|,00}¯
8  36  [w]¯
8  37  [w]¯ [wm]'
8  38  [w]¯ [wm]' [ws]"

3  39  [TTT]
3  40  [TTTT]

4  41  [#h]:[mm]
4  42  [#h]:[mm]:[ss]
4  43  [Schwarz][#h]:[mm];[Rot]-[#h]:[mm]
4  44  [Schwarz][#h]:[mm]:[ss];[Rot]-[#h]:[mm]:[ss]

9  45  0x[$4];-0x[$4]
9  46  &[&6];-&[&6]
9  47  %[%8];-%[%8]

7  48  [Schwarz]$ {#,##0|.00};[Rot]$ -{#,##0|.00}
7  49  $ {#,##0|.00};$ -{#,##0|.00}
7  50  [Schwarz]$ {#,##0};[Rot]$ -{#,##0}
7  51  $ {#,##0};$ -{#,##0}

7  52  [Schwarz]ú {#,##0|.00};[Rot]ú -{#,##0|.00}
7  53  ú {#,##0|.00};ú -{#,##0|.00}
7  54  [Schwarz]ú {#,##0};[Rot]ú -{#,##0}
7  55  ú {#,##0};ú -{#,##0}

3  56  [JJJJ] [MMM] [TT]
3  57  [JJ]/[MM]/[TT]
3  58  [JJJJ]/[MM]/[TT] [hh]:[mm]:[ss]
4  59  [JJJJ]-[MM]-[TT] [hh]:[mm]:[ss]

2  60  {0|.00}
2  61  {#,##0|.00}
2  62  {#,##0|.00};-{#,##0|.00}
2  63  [Schwarz]{#,##0|.00};[Rot]-{#,##0|.00}

7  64  [Schwarz]CAN $ {#,##0|.00};[Rot]CAN $ -{#,##0|.00}
7  65  CAN $ {#,##0|.00};CAN $ -{#,##0|.00}
7  66  [Schwarz]CAN $ {#,##0};[Rot]CAN $ -{#,##0}
7  67  CAN $ {#,##0};CAN $ -{#,##0}

7  68  [Schwarz]{#.##0|,00} FF;[Rot]-{#.##0|,00} FF
7  69  {#.##0|,00} FF;-{#.##0|,00} FF
7  70  [Schwarz]{#.##0} FF;[Rot]-{#.##0} FF
7  71  {#.##0} FF;-{#.##0} FF

3  72  [TT]/[MM]/[JJJJ]
3  73  [TT]/[MM]/[JJ]

9  74  WAHR;WAHR;FALSCH

7  75  [Schwarz]EUR {#.##0|,00};[Rot]EUR -{#.##0|,00}
7  76  EUR {#.##0|,00};EUR -{#.##0|,00}
7  77  [Schwarz]EUR {#.##0};[Rot]EUR -{#.##0}
7  78  EUR {#.##0};EUR -{#.##0}

7  79  [Schwarz]îS {#.##0|,00};[Rot]îS -{#.##0|,00}
7  80  îS {#.##0|,00};îS -{#.##0|,00}
7  81  [Schwarz]îS {#.##0};[Rot]îS -{#.##0}
7  82  îS {#.##0};îS -{#.##0}

7  83  [Schwarz]sfr {#.##0|,00};[Rot]sfr -{#.##0|,00}
7  84  sfr {#.##0|,00};sfr -{#.##0|,00}
7  85  [Schwarz]sfr {#.##0};[Rot]sfr -{#.##0}
7  86  sfr {#.##0};sfr -{#.##0}

= 86
