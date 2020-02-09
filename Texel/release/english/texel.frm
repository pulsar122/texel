;Number formats
;only the _names_ in the lines before ";end" can be changed!
;file compatibility will be lost if anything else is changed!
;user-defined number formats can be entered in texelusr.frm

#0 All
#1 User defined
#2 Numbers
#3 Date
#4 Time
#5 Percent etc.
#6 Science
#7 Currency
#8 Angular functions
#9 Computer

m1 January February March April May June July August September October November December
m2 Jan Feb Mar Apr May Jun Jul Aug Sep Oct Nov Dec
d1 Monday Tuesday Wednesday Thursday Friday Saturday Sunday
d2 Mon Tue Wed Thu Fri Sat Sun

;end


c White Black Red Green Blue Cyan Yellow Magenta LightGrey DarkGrey DarkRed DarkGreen DarkBlue DarkCyan DarkYellow DarkMagenta


2   1  {0|,00}
2   2  {0}
2   3  {#.##0}
2   4  {#.##0|,00}
2   5  {#.##0};-{#.##0}
2   6  [Black]{#.##0};[Red]-{#.##0}
2   7  {#.##0|,00};-{#.##0|,00}
2   8  [Black]{#.##0|,00};[Red]-{#.##0|,00}

3   9  [DD].[MM].[YYYY]
3  10  [DD].[MM].[YY]
3  11  [DD]. [MMM] [YY]
3  12  [DD]. [MMM]
3  13  [MMM] [YY]
3  14  [DDD], [DD]. [MMM] [YY]
3  15  [DDDD], [D]. [MMMM] [YYYY]
3  16  [DD].[MM].[YYYY] [hh]:[mm]

4  17  [H]:[mm] [am/pm]
4  18  [H]:[mm]:[ss] [am/pm]
4  19  [hh]:[mm]
4  20  [hh]:[mm]:[ss]
4  21  [mm]:[ss]
4  22  [DD].[MM].[YYYY] [hh]:[mm]

5  23  (100){0}%
5  24  (100){0|,00}%
5  25  (1000000){0} ppm
5  26  (1000000){0|,00} ppm

6  27  {0|,00000000E0}
6  28  {0|,00E+00}
6  29  {0|,0E+0}

7  30  [Black]{#.##0|,00} DM;[Red]-{#.##0|,00} DM
7  31  {#.##0|,00} DM;-{#.##0|,00} DM
7  32  [Black]{#.##0} DM;[Red]-{#.##0} DM
7  33  {#.##0} DM;-{#.##0} DM

8  34  {0}ø
8  35  {0|,00}ø
8  36  [w]ø
8  37  [w]ø [wm]'
8  38  [w]ø [wm]' [ws]"

3  39  [DDD]
3  40  [DDDD]

4  41  [#h]:[mm]
4  42  [#h]:[mm]:[ss]
4  43  [Black][#h]:[mm];[Red]-[#h]:[mm]
4  44  [Black][#h]:[mm]:[ss];[Red]-[#h]:[mm]:[ss]

9  45  0x[$4];-0x[$4]
9  46  &[&6];-&[&6]
9  47  %[%8];-%[%8]

7  48  [Black]$ {#,##0|.00};[Red]$ -{#,##0|.00}
7  49  $ {#,##0|.00};$ -{#,##0|.00}
7  50  [Black]$ {#,##0};[Red]$ -{#,##0}
7  51  $ {#,##0};$ -{#,##0}

7  52  [Black]œ {#,##0|.00};[Red]œ -{#,##0|.00}
7  53  œ {#,##0|.00};œ -{#,##0|.00}
7  54  [Black]œ {#,##0};[Red]œ -{#,##0}
7  55  œ {#,##0};œ -{#,##0}

3  56  [YYYY] [MMM] [DD]
3  57  [YY]/[MM]/[DD]
3  58  [YYYY]/[MM]/[DD] [hh]:[mm]:[ss]
4  59  [YYYY]-[MM]-[DD] [hh]:[mm]:[ss]

2  60  {0|.00}
2  61  {#,##0|.00}
2  62  {#,##0|.00};-{#,##0|.00}
2  63  [Black]{#,##0|.00};[Red]-{#,##0|.00}

7  64  [Black]CAN $ {#,##0|.00};[Red]CAN $ -{#,##0|.00}
7  65  CAN $ {#,##0|.00};CAN $ -{#,##0|.00}
7  66  [Black]CAN $ {#,##0};[Red]CAN $ -{#,##0}
7  67  CAN $ {#,##0};CAN $ -{#,##0}

7  68  [Black]{#.##0|,00} FF;[Red]-{#.##0|,00} FF
7  69  {#.##0|,00} FF;-{#.##0|,00} FF
7  70  [Black]{#.##0} FF;[Red]-{#.##0} FF
7  71  {#.##0} FF;-{#.##0} FF

3  72  [DD]/[MM]/[YYYY]
3  73  [DD]/[MM]/[YY]

9  74  TRUE;TRUE;FALSE

7  75  [Black]EUR {#.##0|,00};[Red]EUR -{#.##0|,00}
7  76  EUR {#.##0|,00};EUR -{#.##0|,00}
7  77  [Black]EUR {#.##0};[Red]EUR -{#.##0}
7  78  EUR {#.##0};EUR -{#.##0}

7  79  [Black]”S {#.##0|,00};[Red]”S -{#.##0|,00}
7  80  ”S {#.##0|,00};”S -{#.##0|,00}
7  81  [Black]”S {#.##0};[Red]”S -{#.##0}
7  82  ”S {#.##0};”S -{#.##0}

7  83  [Black]sfr {#.##0|,00};[Red]sfr -{#.##0|,00}
7  84  sfr {#.##0|,00};sfr -{#.##0|,00}
7  85  [Black]sfr {#.##0};[Red]sfr -{#.##0}
7  86  sfr {#.##0};sfr -{#.##0}

= 86
