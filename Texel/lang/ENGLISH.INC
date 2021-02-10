{ English include file for Texel 2.3 }
{ 2000-03-?? ?? }

{ ############################################################################## }

{ texel.grp }

	GROUP_GENERAL_RANGE     = 'Range';
	GROUP_GENERAL_ROWS      = 'Rows';
	
	GROUP_SETUP_START       = 'Program start';
	GROUP_SETUP_END         = 'Program end';

	GROUP_TIP_TITLE         = 'Did you know?';

	GROUP_EXPORT_SAVEWITH   = 'Save with';
	GROUP_EXPORT_TYPE       = 'Typ';
	GROUP_EXPORT_DOCTYPE    = 'Documenttyp';
	GROUP_EXPORT_XLSVER     = 'Version';
	GROUP_EXPORT_TEXELVER   = 'Version';

	GROUP_LAYOUT_MARGINS    = 'Margin';
	GROUP_LAYOUT_CENTER     = 'Centering';
	GROUP_LAYOUT_NUM        = 'Numbering';
	GROUP_LAYOUT_HEAD       = 'Header';
	GROUP_LAYOUT_FOOT       = 'Footer';
	GROUP_LAYOUT_PRINTWITH  = 'Print with';
	GROUP_LAYOUT_PRINTRANGE = 'Print range';

	GROUP_INFO_FILE         = 'File';

	GROUP_DELCELL_FILL      = 'Fill';

	GROUP_FIND_DIRECTION    = 'Order';
	GROUP_FIND_SEARCHIN     = 'Search in';
	GROUP_FIND_SEARCHAS     = 'Search as';
	GROUP_FIND_FORBACKWARD  = 'Direction';

	GROUP_REPLACE_DIRECTION = 'Order';
	GROUP_REPLACE_REPLIN    = 'Replace in';
	GROUP_REPLACE_FORBACK   = 'Direction';

	GROUP_INSERT_PASTE      = 'Insert';
	GROUP_INSERT_OPERATION  = 'Maths operation';

	GROUP_DIAGRAM_CHANGE    = 'Change';
	GROUP_DIAGRAM_AXISLEFT  = 'Y axis';
	GROUP_DIAGRAM_AXISBOTM  = 'X xis';
	GROUP_DIAGRAM_DATA      = 'Data rows';
	GROUP_DIAGRAM_NAMESIN   = 'Names in';
	GROUP_DIAGRAM_SIZE      = 'Size';

	GROUP_SHEET_SIZE        = 'Size';
	GROUP_SHEET_RULER       = 'Ruler';
	GROUP_SHEET_GENERAL     = 'General';

	GROUP_SORT_WHAT         = 'Sort by';
	GROUP_SORT_NUMBERS      = 'Numbers';
	GROUP_SORT_SPACES       = 'Emptycells';
	GROUP_SORT_SORT1        = 'Sorting from';
	GROUP_SORT_SORT2        = 'Afterwards';
	GROUP_SORT_SORT3        = 'Afterwards';

	GROUP_TEXT_FX           = 'Effects';
	GROUP_TEXT_ANGLE        = 'Angle';
	GROUP_TEXT_ALIGNMENT    = 'Alignment';
	GROUP_TEXT_MISC         = 'General';

	GROUP_BORDER_BLOCK      = 'Block';
	GROUP_BORDER_CELLS      = 'Cells';

	GROUP_OBJECT_BACKGR     = 'Background';
	GROUP_OBJECT_TEXT       = 'Text';
	GROUP_OBJECT_IMAGE      = 'Graphic';
	
	GROUP_PATHS_OBJECTS     = 'Objekte';
	GROUP_PATHS_IMPORT      = 'Import';
	
	GROUP_ELEMENT_CHECKBOX  = 'Control checkbox';

{ texel.hlp }

	BUBBLE_EASTEREGG       = '"Holland has beautiful islands, Heidelberg beautiful spreadsheets!"';

	BUBBLE_GENERAL_RANGE    = 'Shows the current block on which the actions of this dialog operate. You can define a new block with the mouse or with Control+B.';
	BUBBLE_GENERAL_HELP     = 'Calls the ST-Guide online help. If ST-Guide is not installed this button will be disabled';
	BUBBLE_GENERAL_CANCEL   = 'Closes the dialog without carrying out the action';
	BUBBLE_GENERAL_SET      = 'Setzt die aktuellen Werte dieses Dialogs im markierten Block, ohne den Dialog zu verlassen';
	BUBBLE_GENERAL_SET2     = 'Setzt die aktuellen Werte, ohne den Dialog zu verlassen';
	BUBBLE_GENERAL_SETOK    = 'Setzt die aktuellen Werte im markierten Bereich und verlÑût den Dialog';
	BUBBLE_GENERAL_OK       = 'Accepts the current values and closes the dialog';
	BUBBLE_GENERAL_OK2      = 'Accept the settings';
	BUBBLE_GENERAL_OBJSET   = 'Setzt die aktuellen Werte dieses Dialogs beim zugehîrigen Objekt, ohne den Dialog zu verlassen';
	BUBBLE_GENERAL_OBJSETOK = 'Accepts the current values and closes the dialog';
	BUBBLE_GENERAL_CLOSE    = 'Schlieût den Dialog';
	
	BUBBLE_SETUP_DEFDOC     = 'Sets the default values which will be used when creating a new worksheet';
	BUBBLE_SETUP_WINDOW     = 'Defines window options for all worksheets';
	BUBBLE_SETUP_GENERAL    = 'Defines options which affect the whole application';
	BUBBLE_SETUP_STARTEND   = 'Sets the program behaviour on starting or quitting Texel';
	BUBBLE_SETUP_START      = 'Sets the program behaviour on starting Texel';
	BUBBLE_SETUP_END        = 'Sets the program behaviour on quitting Texel';
	BUBBLE_SETUP_ROWS       = 'The default number of rows in a new sheet (max. 16384)';
	BUBBLE_SETUP_COLUMNS    = 'The default number of columns in a new sheet (max. 702)';
	BUBBLE_SETUP_COLWIDTH   = 'The column width is specified in characters; it will be converted to pixels from the font in use';
	BUBBLE_SETUP_AUTOCALC   = 'Determines whether auto-calculation should be enabled for new sheets (actually this should always be the case)';
	BUBBLE_SETUP_FONTID     = 'Sets the default font';
	BUBBLE_SETUP_FONTSIZE   = 'Sets the default font size';
	BUBBLE_SETUP_SIZERRANGE = 'When changing row height or column width with the mouse, determines the sensitivity of the separator region to mouse clicks';
	BUBBLE_SETUP_FPOINT     = 'Sets the number of decimal places displayed for each number input';
	BUBBLE_SETUP_HISTORY    = 'Sets the maximum number of entries in the Block dialog (Control+B)';
	BUBBLE_SETUP_CRSWRAP    = 'Cursor wrap: Cursor jumps to opposite edge if moved off the edge of the sheet';
	BUBBLE_SETUP_XINPUT     = 'If this button is checked, keyboard input will be to the window under the mouse cursor (otherwise to the topped window)';
	BUBBLE_SETUP_CLOSER     = 'If this button is checked, clicking the closer box of a dialog corresponds to the <Cancel> button, otherwise the <OK> button (changes become active on the next program start!)';
	BUBBLE_SETUP_NEW        = 'A new sheet will be displayed by default when starting the program';
	BUBBLE_SETUP_OPEN       = 'If this button is checked, the file selector will be displayed at program start';
	BUBBLE_SETUP_NOTHING    = 'If this button is checked, Texel will only display the menu on startup';
	BUBBLE_SETUP_FULLSIZE   = 'If checked, sheets will be displayed at maximum size when loaded. With big screens this option can be annoying';
	{$IFDEF NVDI5}
	BUBBLE_SETUP_BLOCK      = 'This option will not need with NVDI5.';
	{$ELSE}
	BUBBLE_SETUP_BLOCK      = 'Check this box if the screen display does not match printed output with GDOS (the settings become active on the next program start!)';
	{$ENDIF}
	BUBBLE_SETUP_RECALC     = 'Recalculates a sheet when it is loaded (important for dates). Should only be switched off on slow computers';
	BUBBLE_SETUP_RTBLOCK    = 'Realtime block marking can be too slow on a slow computer, therefore you can switch it off by checking this box';
	BUBBLE_SETUP_BACKUP     = 'If checked, an old file with the same name is renamed to .BAK before the current file is saved';
	BUBBLE_SETUP_PRINTER    = 'Configures the standard printer driver';
	BUBBLE_SETUP_TOOLBAR    = 'Determines whether the Toolbar is visible when a new sheet is created';
	BUBBLE_SETUP_CURRENCY   = 'Determines which currency format will be used with the Toolbar button';
	BUBBLE_SETUP_OVERFLOW   = 'If the number is too large to fit in the cell it will be displayed as (###). Switching this off gives a speed advantage for slower computers!';
	BUBBLE_SETUP_BOTTOMLINE = 'If checked, leave enough space at the bottom of the sheet window for the display of e.g. SMU or AppLine';
	BUBBLE_SETUP_SAVEOPT    = 'Save the settings of this dialog automatically when Texel is quit';
	BUBBLE_SETUP_SAVEWORK   = 'Saves the environment (which Texel sheets are open) automatically when Texel is quit';
	BUBBLE_SETUP_EXCELDATE  = 'Determines whether a new sheet calculates dates in Excel format';
	BUBBLE_SETUP_FORMERR    = 'If enabled, an error caused by the incorrect input of formulae is displayed by BubbleHelp';
	BUBBLE_SETUP_FORMCELL   = 'If this option is enabled as well as the one above, the Input line displays the faulty formula';
	BUBBLE_SETUP_INFODIAL   = 'If this option is enabled, an info dialog will open before a new document is created. The author'#39's name, contents of the sheet etc. can be entered.';
	BUBBLE_SETUP_PATHS      = 'Sets the default path used when the file selector is called';

	BUBBLE_INPUT_EMPTY      = 'The input line is empty.';

	BUBBLE_SHEET_TOGGLE     = 'Marks the whole sheet - or if a block is already marked - clears the marking';
	
	BUBBLE_BLOCK_EDIT       = 'After the call this contains the current block. If this is not to be altered, one can enter an empty character string';
	BUBBLE_BLOCK_LIST       = 'Shows previously marked blocks as well as cell variables';
	BUBBLE_BLOCK_OK         = 'Exits the block dialog. If the edit field contains a valid block, the list is updated';

	BUBBLE_FNBAR_FONTID     = 'Sets the fonts used in the cells (Alt+F)';
	BUBBLE_FNBAR_FONTSIZE   = 'Sets the font size (Alt+R)';
	BUBBLE_FNBAR_PERCENT    = 'Alters the display size of the sheet (Alt+Z)';
	BUBBLE_FNBAR_BACKCOLOR  = 'Alters the background colour of the current cell(s)';
	BUBBLE_FNBAR_PATTERN    = 'Alters the background fill of the current cell(s)';
	BUBBLE_FNBAR_AUTOCURSOR = 'Sets direction of cursor movement with <Return>(AutoCursor)';
	BUBBLE_FNBAR_BLOCK      = 'Shows the current cell markings (Cursor/Block) or allows input of a range (Control+B)';
	BUBBLE_FNBAR_CANCEL     = 'Terminates char. entry into a cell <Tab>';
	BUBBLE_FNBAR_OK         = 'Confirms entry of chars in cell <Return>';
	BUBBLE_FNBAR_TEXTCOLOR  = 'Changes text colour in current block';
	BUBBLE_FNBAR_BORDER     = 'Adds a border to the current block or cell';
	BUBBLE_FNBAR_TBONOFF    = 'Switches the Toolbar on or off';
	
	BUBBLE_TOOLBAR_SAVE     = 'Saves the sheet (Control+S)';
	BUBBLE_TOOLBAR_PRINT    = 'Prints the sheet (Control+P)';
	BUBBLE_TOOLBAR_CUT      = 'Cuts the current selection (Control+X)';
	BUBBLE_TOOLBAR_COPY     = 'Copies the current selection to the clipboard (Control+C)';
	BUBBLE_TOOLBAR_PASTE    = 'Pastes the contents of the clipboard at the current position (Control+V)';
	BUBBLE_TOOLBAR_SUM      = 'Activates the cell last active and places the Sum function on the Input line. If a block is selected this range will be inserted into the function (F10)';
	BUBBLE_TOOLBAR_FN       = 'Calls the functions dialog (Shift+Control+F)';
	BUBBLE_TOOLBAR_BOLD     = 'Switches bold on or off for text in a marked block or cell (F2)';
	BUBBLE_TOOLBAR_ITALIC   = 'Switches italic on or off for text in a marked block or cell (F3)';
	BUBBLE_TOOLBAR_UNDERL   = 'Switches underline on or off for text in a marked block or cell (F4)';
	BUBBLE_TOOLBAR_LEFT     = 'Left justifies the text in a block or cell (F5)';
	BUBBLE_TOOLBAR_CENTER   = 'Centre justifies the text in a block or cell (F6)';
	BUBBLE_TOOLBAR_RIGHT    = 'Right justifies the text in a block or cell (F7)';
	BUBBLE_TOOLBAR_NUMBER   = 'Alter number format in current cell(s) to {0,00}';
	BUBBLE_TOOLBAR_DATE     = 'Alter number format in current cell(s) to [DD].[MM].[YYYY]';
	BUBBLE_TOOLBAR_MONEY    = 'Alters the number format to the default currency chosen with "Options - Settings"';
	BUBBLE_TOOLBAR_PERCENT  = 'Alters number format in current cell/s to (100){0}%';
	BUBBLE_TOOLBAR_SORTUP   = 'Sorts the current block, forwards, on the first three columns';
	BUBBLE_TOOLBAR_SORTDOWN = 'Sorts the current block, backwards, on the first three columns';
	BUBBLE_TOOLBAR_FPLUS    = 'Increases the number of decimal places in a formula or constant cell by one (F8)';
	BUBBLE_TOOLBAR_FMINUS   = 'Decreases the number of decimal places in a formula or constant cell by one (F9)';
	BUBBLE_TOOLBAR_DIAGRAM  = 'Creates a bar chart from the marked block. <Shift> swaps line/column used for the X axis';
	BUBBLE_TOOLBAR_HOME     = 'Moves the cursor to cell A1 (Home)   ';

	BUBBLE_TEXTATTR_BOLD    = 'Font style bold';
	BUBBLE_TEXTATTR_LIGHT   = 'Font style light';
	BUBBLE_TEXTATTR_ITALIC  = 'Font style italic';
	BUBBLE_TEXTATTR_UNDERL  = 'Font style underlined';
	BUBBLE_TEXTATTR_OUTL    = 'Font style outlined';
	BUBBLE_TEXTATTR_SHADOW  = 'Shadowed (not available with all GDOS versions and screen drivers)';
	BUBBLE_TEXTATTR_ROTAT   = 'Sets the rotation of the text. With bitmapped fonts this can only be in 90 degree steps';
	BUBBLE_TEXTATTR_SKEW    = 'Slope or skew of font'{$IFNDEF NVDI5}+' (only with vector fonts)'{$ENDIF};
	BUBBLE_TEXTATTR_CLIP    = 'Sets whether text should be clipped if it crosses a cell border';
	BUBBLE_TEXTATTR_LEFT    = 'Left just. text ';
	BUBBLE_TEXTATTR_CENTER  = 'Horizontally centred text';
	BUBBLE_TEXTATTR_RIGHT   = 'Right just. text';
	BUBBLE_TEXTATTR_COLOR   = 'Sets the text colour';
	BUBBLE_TEXTATTR_CROTAT  = 'Pay regard to text rotation angle?';
	BUBBLE_TEXTATTR_CSKEW   = 'Pay regard to text skewing?';
	BUBBLE_TEXTATTR_CHALIGN = 'Pay regard to horizontal alignment?';
	BUBBLE_TEXTATTR_CVALIGN = 'Pay regard to vertical alignment?';
	BUBBLE_TEXTATTR_CCOLOR  = 'Pay regard to text colour?';
	BUBBLE_TEXTATTR_TOP     = 'Text aligned to top';
	BUBBLE_TEXTATTR_MIDDLE  = 'Vertically centred text';
	BUBBLE_TEXTATTR_BOTTOM  = 'Text aligned to bottom';
	BUBBLE_TEXTATTR_FXOFF   = 'Switches all text effects off';
	BUBBLE_TEXTATTR_FXIGNOR = 'Disregard all text effects';
	
	BUBBLE_NUMFORM_CATEGORY = 'Lists the available function categories';
	BUBBLE_NUMFORM_FORMLIST = 'Lists the number formats available within the category selected at left';
	BUBBLE_NUMFORM_FORMAT   = 'Shows the selected number format at full length';
	BUBBLE_NUMFORM_PREVIEW  = 'If the top left cell in the selected block contains a number, a preview of the format applied to the number is shown';
	BUBBLE_NUMFORM_NEW      = 'Creates a new, user-defined number format';
	BUBBLE_NUMFORM_DELETE   = 'Deletes the selected user-defined number format';
	BUBBLE_NUMFORM_CHANGE   = 'Accepts the edits to the user-defined number format';
	
	BUBBLE_ROWSIZE_BLOCK    = 'These are the marked rows which will have their height altered';
	BUBBLE_ROWSIZE_HEIGHT   = 'The new row height in mm (accuracy 1/100mm)';
	BUBBLE_ROWSIZE_OK       = 'Sets the marked row(s) to the specified height and closes the dialog';
	
	BUBBLE_COLSIZE_BLOCK    = 'These are the marked columns which will have their width altered';
	BUBBLE_COLSIZE_WIDTH    = 'The new column width in mm (accuracy 1/100)';
	BUBBLE_COLSIZE_OK       = 'Sets the marked column(s) to the specified width and closes the dialog';

	BUBBLE_COLNAME_SEL      = 'The selected column whose name will be changed';
	BUBBLE_COLNAME_OLD      = 'The old column name';
	BUBBLE_COLNAME_NEW      = 'The new column name';
	BUBBLE_COLNAME_OK       = 'Assigns the new name to the selected column and closes the dialog';
	
	BUBBLE_PATTERN_NAME     = 'The name of the selected colour (for monochrome resolutions)';
	BUBBLE_PATTERN_COLORS   = 'The system colours. Colours not available in the current screen resolution are shown as black.';
	BUBBLE_PATTERN_PATTERN  = 'The fill pattern can be applied to lighten colours';
	BUBBLE_PATTERN_PREVIEW  = 'Preview of the result';
	
	BUBBLE_BORDER_OUTLINE   = 'Puts a frame (outline) around the current block (has priority over the individual lines)';
	BUBBLE_BORDER_TOP       = 'Draws a line at the top of every selected cell';
	BUBBLE_BORDER_BOTTOM    = 'Draws a line at the bottom of every selected cell';
	BUBBLE_BORDER_LEFT      = 'Draws a line at the left of every selected cell';
	BUBBLE_BORDER_RIGHT     = 'Draws a line at the right of every selected cell';
	BUBBLE_BORDER_HOR       = 'Draws a hoorizontal line through every selected cell';
	BUBBLE_BORDER_VERT      = 'Draws a vertical line through every selected cell';
	BUBBLE_BORDER_OCOLOR    = 'Sets the colour of the block outline (has priority over the individual lines)';
	BUBBLE_BORDER_4COLOR    = 'Sets the colour for all the lines in the selection. Adjacent edges all have the same colour afterwards!';
	BUBBLE_BORDER_HCOLOR    = 'Sets the colour for horizontal lines through the cells';
	BUBBLE_BORDER_VCOLOR    = 'Sets the colour for vertical lines through the cells';
	
	BUBBLE_CLIP_IMPORT      = 'ASCII import for the current clipboard file';
	BUBBLE_CLIP_OK          = 'Loads a DIF or CSV file from the clipboard';
	
	BUBBLE_ABOUT_OK         = 'Closes the "About..." dialog';
	
	BUBBLE_LAYOUT_TMARGIN   = 'Sets the margin to leave above the header';
	BUBBLE_LAYOUT_BMARGIN   = 'Sets the margin to leave below the footer';
	BUBBLE_LAYOUT_LMARGIN   = 'Space to leave for left margin';
	BUBBLE_LAYOUT_RMARGIN   = 'Space to leave for right margin';
	BUBBLE_LAYOUT_HCENTER   = 'Centres the sheet or sheet section horizontally between the margins';
	BUBBLE_LAYOUT_VCENTER   = 'Centres the sheet or sheet section vertically between the margins';
	BUBBLE_LAYOUT_GRID      = 'Sets whether to print a grey or dotted raster over cells which do not have an explicit border';
	BUBBLE_LAYOUT_NUMBERS   = 'Should the row number be printed';
	BUBBLE_LAYOUT_NAMES     = 'Should the column number be printed';
	BUBBLE_LAYOUT_PRNTRANGE = 'Here one can enter the range which is to be printed. Just this region will be printed if the corresponding radio button is selected in the Print dialog';
	BUBBLE_LAYOUT_LHEAD     = 'Left justified text in header';
	BUBBLE_LAYOUT_CHEAD     = 'Centred text in header';
	BUBBLE_LAYOUT_RHEAD     = 'Right justified text in header';
	BUBBLE_LAYOUT_LFOOT     = 'Left justified text in footer';
	BUBBLE_LAYOUT_CFOOT     = 'Centred text in footer';
	BUBBLE_LAYOUT_RFOOT     = 'Right justified text in footer';
	BUBBLE_LAYOUT_NUMHOR    = 'Number the partial sheets horizontally';
	BUBBLE_LAYOUT_NUMVERT   = 'Number the partial sheets vertically';
	BUBBLE_LAYOUT_PLHEAD    = 'If checked, left justified header text will be printed';
	BUBBLE_LAYOUT_PCHEAD    = 'If checked, centred  header text will be printed';
	BUBBLE_LAYOUT_PRHEAD    = 'If checked, right justified header text will be printed';
	BUBBLE_LAYOUT_PLFOOT    = 'If checked, left justified footer text will be printed';
	BUBBLE_LAYOUT_PCFOOT    = 'If checked, centred footer text will be printed';
	BUBBLE_LAYOUT_PRFOOT    = 'If checked, right justified footer text will be printed';
	BUBBLE_LAYOUT_POBJECTS  = 'If checked, embedded objects will be printed';
	BUBBLE_LAYOUT_MHEAD     = 'The amount of space reserved for the header';
	BUBBLE_LAYOUT_MFOOT     = 'The amount of space reserved for the footer';
	BUBBLE_LAYOUT_MINIMAL   = 'Calculates optimum heights for the header and footer (depends on whether text will be printed there!)';

	BUBBLE_FN_GROUPS        = 'Lists all available function categories';
	BUBBLE_FN_FUNCTIONS     = 'Lists the functions available within the category selected on the left';
	BUBBLE_FN_SYNTAX        = 'Shows the syntax of the selected function';
	BUBBLE_FN_DESCR         = 'A short explanation of the current function. A more detailed description can be found in the ST-Guide online help.';
	BUBBLE_FN_INSERT        = 'Inserts the current function at the cursor position on the Input line. If this is not possible (because the cursor is incorrectly placed), the bell will sound!';
	BUBBLE_FN_OK            = 'Inserts the current function at the cursor position on the Input line. If this is not possible (because the cursor is incorrectly placed), the bell will sound!'
						                 +' The dialog will then be closed.';

	BUBBLE_OBJATTR_BACKGR   = 'Sets the object background attributes';
	BUBBLE_OBJATTR_TRANS    = 'If checked, the background of the object is transparent.';
	BUBBLE_OBJATTR_BORDER   = 'If checked, the object has a border (black line) drawn around it';
	BUBBLE_OBJATTR_BGCOL    = 'Sets the background colour';
	
	BUBBLE_IMGOBJ_BGCOL     = 'Sets the background colour';
	BUBBLE_IMGOBJ_IMGCOL    = 'Sets the image colour';
	BUBBLE_IMGOBJ_BACKGR    = 'Sets the image background attribute';
	BUBBLE_IMGOBJ_IMAGE     = 'Sets the image foreground attributes';
	BUBBLE_IMGOBJ_TRANS     = 'If checked, the image object lies transparently over the cells, otherwise the background of the image is drawn.';
	BUBBLE_IMGOBJ_BORDER    = 'If checked, the object has a border (black line) drawn around it';
	
	BUBBLE_TXTOBJ_BGCOL     = 'Sets the background colour';
	BUBBLE_TXTOBJ_TXTCOL    = 'Sets the text colour';
	BUBBLE_TXTOBJ_BACKGR    = 'Sets the text object background attributes';
	BUBBLE_TXTOBJ_TEXT      = 'Sets the text object foreground attributes';
	BUBBLE_TXTOBJ_TRANS     = 'If checked, the background of the object is transparent.';
	BUBBLE_TXTOBJ_BORDER    = 'If checked, the object has a border (black line) drawn around it';
	BUBBLE_TXTOBJ_FONTID    = 'Sets the font';
	BUBBLE_TXTOBJ_FONTSIZE  = 'Sets the font size';
	
	BUBBLE_ELM_CHECKBOX     = 'The properties of the dialog elements can be set here';
	BUBBLE_ELM_TITLE        = 'The checkbox title is selected here';
	BUBBLE_ELM_CELL         = 'The cell, in which the value 0 or 1 is written (e.g. TRUE/FALSE).';

	BUBBLE_INSOBJ_SERVER    = 'Starts all required servers, if they have been terminated between calls.';
	BUBBLE_INSOBJ_LIST      = 'In this list are all the object types that can be embedded';
	BUBBLE_INSOBJ_INSERT    = 'Calls the fileselector, to select an object to insert.';
	BUBBLE_INSOBJ_OK        = 'Calls the file selector, to select an object to insert. The dialog is then closed.';
	
	BUBBLE_IMPASC_FILE      = 'The name of the database file to import';
	BUBBLE_IMPASC_ROWS      = 'Specifies whether the lines (in the sheet) are saved as rows or columns in the file';
	BUBBLE_IMPASC_HOR       = 'Lines are saved in the file as rows. This is the normal case.';
	BUBBLE_IMPASC_VERT      = 'Lines are saved in the file as columns. The file lines become the sheet columns.';
	BUBBLE_IMPASC_LINEEND   = 'What character(s) mark the end of a file line (normally CR+LF)';
	BUBBLE_IMPASC_CELLDIV   = 'What character(s) seperate the fields within each file line (usual are tab, comma or semicolon)';
	BUBBLE_IMPASC_QUOTECHAR = 'What character(s) surround normal text fields within each file line';
	BUBBLE_IMPASC_QUOTING   = 'Sets whether quotes will be doubled on export (this is almost always the case)';
	BUBBLE_IMPASC_FPOINT    = 'What is the decimal seperator';
	BUBBLE_IMPASC_OK        = 'Imports the file into a new sheet';
	BUBBLE_IMPASC_FILTER    = 'Specifies from which operating system the ASCII-text originates - in order to import the umlauts correctly. So that more than the standard "Atari" filter is available, KEYTAB has to be installed.';

	BUBBLE_IMPDB_SOURCE     = 'The name of the database file to import';
	BUBBLE_IMPDB_IMPORT     = 'The marked field on the left of the list is added to the import fields on the right';
	BUBBLE_IMPDB_IGNORE     = 'The marked field on the right of the list is moved to the left and will not be imported';
	BUBBLE_IMPDB_ALL        = 'Import all fields';
	BUBBLE_IMPDB_NONE       = 'Do not import any fields. Click to re-sort fields as they were in the database.';
	BUBBLE_IMPDB_IGNORELIST = 'This list contains the fields which you do not wish to have imported';
	BUBBLE_IMPDB_IMPORTLIST = 'This list contains the fields which you wish to have imported. Data will be imported in the order show.';
	BUBBLE_IMPDB_OK         = 'Imports the database into a new sheet';

	BUBBLE_EXPORT_FORMULA   = 'Save the formula as a plain text string, constants will be saved without formatting';
	BUBBLE_EXPORT_VALUE     = 'Formulae and constants will be saved as a number in the current number format';
	BUBBLE_EXPORT_LINEHOR   = 'Rows are saved as file lines (as rows). This is the normal case.';
	BUBBLE_EXPORT_LINEVERT  = 'Sheet columns are saved in the file as lines';
	BUBBLE_EXPORT_LINEEND   = 'The character(s) to use as a line end marker (normally CR+LF)';
	BUBBLE_EXPORT_CELLDIV   = 'The characters used to separate cell data (usually tab, comma or semi-colon)';
	BUBBLE_EXPORT_QUOTECHAR = 'The character(s) used to surround plain text';
	BUBBLE_EXPORT_QUOTING   = 'Sets whether quotes should be doubled on export (this is almost always the case)';
	BUBBLE_EXPORT_FPOINT    = 'The decimal separator to use';
	BUBBLE_EXPORT_EMPTY     = 'No further settings are possible with this export format';
	BUBBLE_EXPORT_HTML      = 'The options for HTML export';
	BUBBLE_EXPORT_DIF       = 'The options for DIF export';
	BUBBLE_EXPORT_CSV       = 'The options for CSV export';
	BUBBLE_EXPORT_ASCII     = 'The options for ASCII export';
	BUBBLE_EXPORT_XLS       = 'The options for Excel export';
	BUBBLE_EXPORT_RTITLE    = 'If this button is selected, the given area is exported, otherwise the whole sheet is exported';
	BUBBLE_EXPORT_FORMATS   = 'With this Popup the export format can be selected';
	BUBBLE_EXPORT_CLIPBOARD = 'If this button is selected, data is automatically exported to the clipboard';
	BUBBLE_EXPORT_FILE      = 'Calls the file selector, to select a destination for the exported file';
	BUBBLE_EXPORT_FILENAME  = 'The filename for the exported data (if this has been been chosen)';
	BUBBLE_EXPORT_EXPORT    = 'Exports the sheet';
	BUBBLE_EXPORT_OK        = 'Exports the sheet and closes the dialog';
	BUBBLE_EXPORT_SAVEWITH  = 'Determines which parts or attributes of the sheet are to be exported';
	BUBBLE_EXPORT_DOCTYPE   = 'Sets the HTML document type. "3.0" is Netscape standard, "3.2" and "4.0" are the official W3C standards. At present "3.2" is the best choice.';
	BUBBLE_EXPORT_SAVEDT    = 'Adds a DOCTYPE flag. This is only necessary if the file is not to be included in another HTML document.';
	BUBBLE_EXPORT_COLORS    = 'Exports the colours to the HTML table';
	BUBBLE_EXPORT_FONTS     = 'Exports the font names to the HTML table. Only works if colours are also exported.';
	BUBBLE_EXPORT_DIFTYPE   = 'Set the DIF type, M$ products use a non-standard format as usual...';
	BUBBLE_EXPORT_DIFSTAND  = 'Choose this option to export a standard DIF file';
	BUBBLE_EXPORT_DIFMS     = 'Choose this option to export a DIF file that M$ products import correctly';
	BUBBLE_EXPORT_ROWS      = 'Sets the direction of cell export';
	BUBBLE_EXPORT_DIFFORM   = 'If checked, use number format on export';
	BUBBLE_EXPORT_CSVFORM   = 'If checked, use number format on export';
	BUBBLE_EXPORT_ASCIIFORM = 'If checked, use number format on export';
	BUBBLE_EXPORT_EMBED     = 'If checked, inserted objects will be exported with the <EMBED> tag. Most objects can only be correctly displayed by CAB, not with Netscape or M$ Internet Explorer.';
	BUBBLE_EXPORT_FILTER    = 'Specifies for which operating system the ASCII text should be exported - in order to export umlauts correctly. So that more than the standard "Atari" filter is available, KEYTAB has to be installed.';
	BUBBLE_EXPORT_ESCAPES   = 'WARNING, ONLY FOR HTML EXPERTS!!! If this option is active, the four HTML-control characters <>&" are not converted in HTML names, so that one can directly insert HTML code in the cells.';
	BUBBLE_EXPORT_XLSVER    = 'For which Excel version the Texel document should be exported. Excel 2.0 (BIFF2) can be read by all versions of Excel.';
	BUBBLE_EXPORT_CSS       = 'From HTML 4.0 sets the level of "Cascading Style Sheets", with CSS various attributes (text colour etc.) are saved. The current standard is CSS1 (CSS Level 1).';
	BUBBLE_EXPORT_KEYTAB    = 'KEYTAB.PRG must be copied to the Auto folder. After a reboot various character filters will be available, which will used automatically by RTF and Excel export.';
	BUBBLE_EXPORT_TEXEL     = 'The options for the export of older Texel files';
	BUBBLE_EXPORT_TEXELVER  = 'Which Texel version the document should be exported to.';

	BUBBLE_CLEAR_FILL       = 'Fills the deleted area with empty cells (identical with "Delete all")';
	BUBBLE_CLEAR_LEFT       = 'Moves cells on the right of the original block into the deleted';
	BUBBLE_CLEAR_RIGHT      = 'Moves cells on the left of the original block into the deleted';
	BUBBLE_CLEAR_UP         = 'Moves the cells below the original block into the deleted block';
	BUBBLE_CLEAR_DOWN       = 'Moves the cells above the deleted block into the deleted block';
	BUBBLE_CLEAR_ROW        = 'Extends the block selection to the entire row';
	BUBBLE_CLEAR_COLUMN     = 'Extends the block selection to the entire column';
	BUBBLE_CLEAR_OK         = 'Deletes the selected block and closes the dialog';
	
	BUBBLE_INSERT_LEFT      = 'Moves the cells in the marked block to the left by the width of the block';
	BUBBLE_INSERT_RIGHT     = 'Moves the cells in the marked block to the right by the width of the block';
	BUBBLE_INSERT_UP        = 'Moves the cells in the marked block up by the height of the block';
	BUBBLE_INSERT_DOWN      = 'Moves the cells in the marked block down by the height of the block';
	BUBBLE_INSERT_ROW       = 'Extends the block selection to the entire row';
	BUBBLE_INSERT_COLUMN    = 'Extends the block selection to the entire column';
	BUBBLE_INSERT_OK        = 'Moves the marked block (puts in its place empty cells) and closes the dialog';
	
	BUBBLE_INSVAL_ALL       = 'Formulae, numbers and attributes are inserted';
	BUBBLE_INSVAL_FORMULA   = 'Formulae and numbers are inserted';
	BUBBLE_INSVAL_VALUE     = 'Only numbers are inserted, formulae take their current numerical value';
	BUBBLE_INSVAL_FORMAT    = 'Only attributes are transferred';
	BUBBLE_INSVAL_NOTE      = 'Only notes are transferred';
	BUBBLE_INSVAL_OPNONE    = 'The inserted cells replace the destination cells';
	BUBBLE_INSVAL_OPADD     = 'The inserted cells contents are added to the destination cells contents';
	BUBBLE_INSVAL_OPSUB     = 'The inserted cells contents are subtracted from the destination cells contents';
	BUBBLE_INSVAL_OPMUL     = 'The inserted cells contents are multiplied with the destination cells contents';
	BUBBLE_INSVAL_OPDIV     = 'The destination cells contents are divided by the inserted cells contents';
	BUBBLE_INSVAL_EMPTY     = 'If checked, empty cells are not copied, so will not delete the destination cells';
	BUBBLE_INSVAL_TRANSPOSE = 'If checked, on insert rows become columns and columns become rows';
	BUBBLE_INSVAL_INSERT    = 'Inserts cells from the clipboard without exiting the dialog';
	BUBBLE_INSVAL_OK        = 'Inserts cells from the clipboard and closes dialog';
	
	BUBBLE_PRINT_FILE       = 'The filename of the document to be printed';
	BUBBLE_PRINT_SHEET      = 'If this box is NOT checked, the user will be prompted to insert new pages';
	BUBBLE_PRINT_FEED       = 'If this box is checked, a page feed is sent after printing to printers and metafiles';
	BUBBLE_PRINT_COPIES     = 'Determines the number of copies of the document that are printed';
	BUBBLE_PRINT_SCALE      = 'Sets the scale factor to enlarge or shrink the output';
	BUBBLE_PRINT_DRIVER     = 'Specify a driver for the output device';
	BUBBLE_PRINT_PRINT      = 'Print the document';
	BUBBLE_PRINT_DEVICE     = 'Specify the output device';
	BUBBLE_PRINT_BW         = 'With this option, all text colors (except white) are printed in black and all background colors (except black) are printed in white';
	BUBBLE_PRINT_RANGE      = 'Print area is taken from "Page Setup". If no range is specified there, then this setting defaults to "All".';
	BUBBLE_PRINT_ALL        = 'Prints the document up to the bottom rightmost cells used';
	BUBBLE_PRINT_SELECTION  = 'Prints the currently selected block';
	BUBBLE_PRINT_PAPER      = 'Sets the paper size used for printers and images'{$IFNDEF NVDI5}+' (as of NVDI3)'{$ENDIF};
	BUBBLE_PRINT_PAGEFROM   = 'Specifies which side of a split table should be printed. The numbering is set in "Page Setup".';
	BUBBLE_PRINT_PAGETO     = 'Determines up to which side of a split table should be printed. If the values are too high, printing stops after the last page.  If nothing is entered here, only one page will be printed.';
	BUBBLE_PRINT_LAYOUT     = 'Calls the "Page Setup" dialog';
	BUBBLE_PRINT_PREVIEW    = 'Preview the printed output';
	BUBBLE_PRINT_OK         = 'Applies the settings (without printing)';
	BUBBLE_PRINT_INFO       = 'Show information about the device driver';

	BUBBLE_SHFORM_SIZE      = 'Here it is possible to alter the sheet size';
	BUBBLE_SHFORM_ROWS      = 'Sets the number of rows (max. 16384)';
	BUBBLE_SHFORM_COLUMNS   = 'Sets the number of columns (max. 702)';
	BUBBLE_SHFORM_FONTID    = 'Choose the font to use for the sheet rows and column lables';
	BUBBLE_SHFORM_FONTSIZE  = 'Choose the font size to use for the sheet rows and column lables';
	BUBBLE_SHFORM_GRID      = 'If checked, single grid lines are also drawn';
	BUBBLE_SHFORM_AUTOCALC  = 'Should the sheet be recalculated with every new entry (AutoCalc)';
	BUBBLE_SHFORM_FORM      = 'If checked, the sheet becomes a template. It cannot be saved in error under its original name but each time it is saved a new name'
	                           +' is requested';
	BUBBLE_SHFORM_HRULER    = 'Draws a horizontal millimeter rule under the Toolbar';
	BUBBLE_SHFORM_VRULER    = 'Draws a vertical millimeter rule under the Toolbar';
	BUBBLE_SHFORM_RMOUSE    = 'Determines if the mouse position is shown on the ruler';
	BUBBLE_SHFORM_RLAYOUT   = 'Determines if the ruler pays attention to page breaks in output';
	BUBBLE_SHFORM_OBJECTS   = 'Determines whether embedded objects should be displayed on the sheet; this can be disabled for speed';
	BUBBLE_SHFORM_PROTECT   = 'Sets if the cell protection marks should be displayed';
	BUBBLE_SHFORM_BREAK     = 'Sets if the manual (hard) page breaks should be displayed';
	BUBBLE_SHFORM_CURRENT   = 'Shows in the input fields the current size of the sheet';
	BUBBLE_SHFORM_MINIMAL   = 'Calculates the minimum sheet size (includes up to the furthest right bottom used cell)';
	BUBBLE_SHFORM_EXCELDATE = 'Determines if date calculations are to be made in Excel or Texel format';

	BUBBLE_PAGE_NEW         = 'The new page number';
	BUBBLE_PAGE_MAX         = 'The total number of pages in document';
	BUBBLE_PAGE_OK          = 'View the page whose number has been entered';
	
	BUBBLE_PREVIEW_PAGE     = 'Shows the current page. Click to call the dialog to input the required page number';
	BUBBLE_PREVIEW_MARGINS  = 'If margins have been set in "Page settings" they can be shown by clicking this button';
	BUBBLE_PREVIEW_DEC      = 'Go one page back';
	BUBBLE_PREVIEW_INC      = 'Go one page forward';
	BUBBLE_PREVIEW_PAPER    = 'Calls the "Paper size" dialog. This is only possible if WDIALOG or MagiC 6 and up is installed.';
	BUBBLE_PREVIEW_PRINT    = 'Calls the "Print" dialog';
	BUBBLE_PREVIEW_LAYOUT   = 'Calls the "Page settings" dialog';
	BUBBLE_PREVIEW_SCALE    = 'Scales the page to best fit the paper size.';
	BUBBLE_PREVIEW_100      = 'Sets the scaling back to 100%.';
	BUBBLE_PREVIEW_OK       = 'Exits the page preview';

	BUBBLE_INFO_FILE        = 'Shows the complete filename of the sheet';
	BUBBLE_INFO_AUTHOR      = 'The author of the sheet can be entered here. In "Page settings" this can be accessed in the header and footer with #a.';
	BUBBLE_INFO_INDEX       = 'Comma separated keywords can be entered here, so that one can search for them with STELLA.';
	BUBBLE_INFO_REM         = 'Any annotations to the sheet';
	BUBBLE_INFO_CREATED     = 'When the sheet was first created';
	BUBBLE_INFO_LATEST      = 'When the sheet was last opened';
	BUBBLE_INFO_USED        = 'How many times the sheet has been opened';
	BUBBLE_INFO_PRINTED     = 'How many times the sheet has been printed. This value is only correct if the sheet is saved after each printout.';
	BUBBLE_INFO_VERSION     = 'Shows with which Texel version the file was saved';
	BUBBLE_INFO_ENCRYPT     = 'Switches on automatic file encryption. One can no longer view the text in the file with a disk editor.';
	BUBBLE_INFO_PASSWORD    = 'Calls a dialog where the file password can be entered';
	BUBBLE_INFO_TITLE       = 'An optional title for the document, used in some export formats. In "Page settings" it can be accessed with #n.';

	BUBBLE_SINFO_AUTHOR     = 'The author of the sheet can be entered here. In "Page settings" this can be accessed in the header and footer with #a.';
	BUBBLE_SINFO_OK         = 'Generates a new sheet with the above information';
	
	BUBBLE_FIND_SEARCHFOR   = 'The search expression. Wildcards are not allowed yet';
	BUBBLE_FIND_ROWS        = 'Search by row';
	BUBBLE_FIND_COLUMNS     = 'Search by column';
	BUBBLE_FIND_CASE        = 'If checked, the search is case-sensitive.';
	BUBBLE_FIND_COMPLETE    = 'If checked, the search expression must be found in its entirety.';
	BUBBLE_FIND_FORMULA     = 'Search in cells containing formular';
	BUBBLE_FIND_VALUE       = 'Search in cells containing constants';
	BUBBLE_FIND_TEXT        = 'Search in cells containing normal text';
	BUBBLE_FIND_EDIT        = 'The search will be made for character strings as entered on the Edit line.';
	BUBBLE_FIND_DISPLAY     = 'The search will be made for character strings as displayed in the cells.';
	BUBBLE_FIND_TOEND       = 'Searches from the cursor to the end';
	BUBBLE_FIND_TOBEGIN     = 'Searches from the cursor to the start';
	BUBBLE_FIND_FIND        = 'Jumps to the next cell which fulfills the search criteria';
	BUBBLE_FIND_OK          = 'Jumps to the next matching cell and closes the dialog';
	
	BUBBLE_REPL_SEARCHFOR   = 'The search expression. Wildcards are not supported yet';
	BUBBLE_REPL_REPLWITH    = 'The expr"ession which will replace the text in the found cell';
	BUBBLE_REPL_ROWS        = 'Row by row replace';
	BUBBLE_REPL_COLUMNS     = 'Column by column replace';
	BUBBLE_REPL_CASE        = 'If checked, the search is case sensitive.';
	BUBBLE_REPL_COMPLETE    = 'If checked, the search expression must be found in its entirety.';
	BUBBLE_REPL_FORMULA     = 'Replace in cells containing formular';
	BUBBLE_REPL_VALUE       = 'Replace in cells containing constants';
	BUBBLE_REPL_TEXT        = 'Replace in cells containing normal text';
	BUBBLE_REPL_TOEND       = 'Replace from the cursor to the end';
	BUBBLE_REPL_TOBEGIN     = 'Replace from the cursor to the start';
	BUBBLE_REPL_ALL         = 'Replaces in all matched cells from the cursor in the search direction';
	BUBBLE_REPL_REPLACE     = 'Replaces the search expression in the next matched cell';
	BUBBLE_REPL_OK          = 'Replaces the search expression in the next matched cell and closes the dialog';
	
	BUBBLE_CONST_CHGNAME    = 'If checked, the names of the constants in the sheet are changed when their value is changed';
	BUBBLE_CONST_LIST       = 'Shows all defined constants for this sheet';
	BUBBLE_CONST_NAME       = 'Constants must begin with a character or with an underscore';
	BUBBLE_CONST_VALUE      = 'Value of the constant (without units etc.)';
	BUBBLE_CONST_DESCR      = 'Any comments about the constant (units etc.)';
	BUBBLE_CONST_NEW        = 'Creates a new constant with the entered values';
	BUBBLE_CONST_CHANGE     = 'Changes the selected constant to the entered values';
	BUBBLE_CONST_DELETE     = 'Deletes the selected constant (only if it is user defined)';
	
	BUBBLE_SORT_SORT1       = 'Sets which row/column is sorted first';
	BUBBLE_SORT_1UP         = 'Sorts the block forwards by criterium 1';
	BUBBLE_SORT_1DOWN       = 'Sorts the block backwards by criterium 1';
	BUBBLE_SORT_SORT2       = 'Sets which row/column will be sorted second';
	BUBBLE_SORT_2UP         = 'Sorts the block forwards by criterium 2';
	BUBBLE_SORT_2DOWN       = 'Sorts the block backwards by criterium 2';
	BUBBLE_SORT_SORT3       = 'Sets which row/column will be sorted third';
	BUBBLE_SORT_3UP         = 'Sorts the block forwards by criterium 3';
	BUBBLE_SORT_3DOWN       = 'Sorts the block backwards by criterium 3';
	BUBBLE_SORT_COLUMNS     = 'Sort on columns, which can also be selected as the criterium';
	BUBBLE_SORT_ROWS        = 'Sort on rows, which can also be selected as the criterium';
	BUBBLE_SORT_NUMINS      = 'Numbers and text sorted according to ASCII code';
	BUBBLE_SORT_NUMPRE      = 'Numbers are sorted before text ';
	BUBBLE_SORT_NUMPOST     = 'Numbers are sorted after text';
	BUBBLE_SORT_CASE        = 'If checked, upper and lowercase characters are sorted as if they had similar values';
	BUBBLE_SORT_BEGINNING   = 'Empty cells are sorted before other cells';
	BUBBLE_SORT_END         = 'Empty cells are sorted after other cells (this is the usual case)';
	BUBBLE_SORT_UMLAUTE     = 'Should umlauts be sorted lexically, i.e. Ñ is sorted as ae etc.';
	BUBBLE_SORT_ABS         = 'Determines whether to take account of signs (+,-) of numbers in sorting';
	BUBBLE_SORT_ATTR        = 'Should cell attributes (backgound colour etc.) be kept with sorted cells';
	BUBBLE_SORT_SORT        = 'Sorts the marked area without exiting the dialog';
	BUBBLE_SORT_OK          = 'Sorts the marked area and then quits the dialog';
	
	BUBBLE_PRNINFO_DEVICE   = 'The output device';
	BUBBLE_PRNINFO_FILE     = 'The filename of the driver from ASSIGN.SYS';
	BUBBLE_PRNINFO_NUMBER   = 'The GDOS number of the driver from ASIGN.SYS';
	BUBBLE_PRNINFO_DESCR    = 'Additional information about the device driver';
	BUBBLE_PRNINFO_IO       = 'Printer should be regarded as a pure output device';
	BUBBLE_PRNINFO_COLORS   = 'Number of colors supported by the output device';
	BUBBLE_PRNINFO_MAXCOLOR = 'Number of predefined (=available) colors';
	BUBBLE_PRNINFO_FONTS    = 'Number of character sets available on the output device';
	BUBBLE_PRNINFO_DPI      = 'Resolution of the output device (in dots per inch)';
	BUBBLE_PRNINFO_PAPRSIZE = 'Sheet size (correspondong to DIN A4 etc.)';
	BUBBLE_PRNINFO_PRNTSIZE = 'Size of the print area (=available size) with regards to hardware-related borders';
	BUBBLE_PRNINFO_BEZIER   = 'Specifies whether the output device can draw bezier curves';
	
	BUBBLE_HELP_ITEM        = 'The keyword to search for in the Texel ST-Guide';
	BUBBLE_HELP_SEARCH      = 'Searches for the keyword without exiting dialog';
	BUBBLE_HELP_OK          = 'Searches for the keyword and then exits the dialog';
	
	BUBBLE_DIAGRAM_CHANGE   = 'In this area the group of values to be changed can be selected';
	BUBBLE_DIAGRAM_GRPTYPE  = 'The chart type can be changed here';
	BUBBLE_DIAGRAM_GRPAXIS  = 'The axes can be labelled here';
	BUBBLE_DIAGRAM_GRPDATA  = 'The data array can be set here';
	BUBBLE_DIAGRAM_GRPLEG   = 'The chart titles can be set here';
	BUBBLE_DIAGRAM_GRPOBJ   = 'The object size and filename can be set here';
	BUBBLE_DIAGRAM_RTYPE    = 'The chart type can be changed here';
	BUBBLE_DIAGRAM_RAXIS    = 'The axes can be labelled here';
	BUBBLE_DIAGRAM_RDATA    = 'The data array can be set here';
	BUBBLE_DIAGRAM_RLEG     = 'The chart titles can be set here';
	BUBBLE_DIAGRAM_ROBJ     = 'The object size and filename can be set here';
	BUBBLE_DIAGRAM_LINE     = 'Generates a line chart';
	BUBBLE_DIAGRAM_BLOCK    = 'Generates a bar chart';
	BUBBLE_DIAGRAM_CIRCLE   = 'Generates a pie chart';
	BUBBLE_DIAGRAM_COLOR    = 'If checked, use colours in the chart, otherwise b/w patterns';
	BUBBLE_DIAGRAM_VALUE    = 'If checked, each chart element is given its absolute value in each case';
	BUBBLE_DIAGRAM_XLINEAR  = 'Generates a line chart with fixed X-intervals of 1';
	BUBBLE_DIAGRAM_X1DATA   = 'The X axis is in the first set of data. All further rows are interpreted as being on the Y axis.';
	BUBBLE_DIAGRAM_XYALT    = 'The data is alternately the X and Y axes (1st row X, 2nd row Y, ...)';
	BUBBLE_DIAGRAM_LLINES   = 'Draw lines not points';
	BUBBLE_DIAGRAM_LPOINTS  = 'Draw points not lines';
	BUBBLE_DIAGRAM_LBOTH    = 'Draw both lines and points';
	BUBBLE_DIAGRAM_STACK    = 'The data bars are drawn one stacked on top of another';
	BUBBLE_DIAGRAM_BEHIND   = 'The data bars are drawn one behind the other';
	BUBBLE_DIAGRAM_SIDE     = 'The data bars are drawn side by side';
	BUBBLE_DIAGRAM_LSTYLE   = 'A line style can be chosen';
	BUBBLE_DIAGRAM_PSTYLE   = 'A point style can be chosen';
	BUBBLE_DIAGRAM_TITLE    = 'Sets the chart title';
	BUBBLE_DIAGRAM_BORDER   = 'Draw a black border around the chart';
	BUBBLE_DIAGRAM_NAMES    = 'This sets whether record contains lables';
	BUBBLE_DIAGRAM_LCOUNT   = 'Sets if a legend (Index) should be shown as well as a chart';
	BUBBLE_DIAGRAM_NROW     = 'Data in the first row of the record should be used as labels along axis';
	BUBBLE_DIAGRAM_NCOL     = 'Data in the first column of the record should be used as labels along axis';
	BUBBLE_DIAGRAM_FONTID   = 'Sets the font for the chart';
	BUBBLE_DIAGRAM_FONTSIZE = 'Sets the font size for the chart title. All other sizes of font for the chart will be calculated from this.';
	BUBBLE_DIAGRAM_DATA     = 'Whether the data is in rows or columns';
	BUBBLE_DIAGRAM_DROWS    = 'The data is in rows';
	BUBBLE_DIAGRAM_DCOLUMNS = 'The data is in columns';
	BUBBLE_DIAGRAM_RTICKS   = 'Sets the subdivisions for the Y axis';
	BUBBLE_DIAGRAM_TICKS    = 'If checked, draw divisions on the Y axis';
	BUBBLE_DIAGRAM_NUMTICKS = 'Number of divisions on the Y axis';
	BUBBLE_DIAGRAM_AXISLEFT = 'The settings for the Y axis';
	BUBBLE_DIAGRAM_ALNAME   = 'Sets the name for the Y axis';
	BUBBLE_DIAGRAM_ALSUBT   = 'Draw subdivisions on the Y axis';
	BUBBLE_DIAGRAM_ALSUBNUM = 'Number of subdivisions on the Y axis';
	BUBBLE_DIAGRAM_ALMIN    = 'Sets the minimum value for the Y axis';
	BUBBLE_DIAGRAM_ALMAX    = 'Sets the maximum value for the Y axis';
	BUBBLE_DIAGRAM_AXISBOTM = 'The settings for the X axis';
	BUBBLE_DIAGRAM_ABNAME   = 'Sets the name for the X axis';
	BUBBLE_DIAGRAM_ABSUBT   = 'Draw subdivisions on the X axis';
	BUBBLE_DIAGRAM_ABSUBNUM = 'Number of divisions on the X axis';
	BUBBLE_DIAGRAM_ABMIN    = 'Sets the minimum value for the X axis';
	BUBBLE_DIAGRAM_ABMAX    = 'Sets the maximum value for the X axis';
	BUBBLE_DIAGRAM_SIZE     = 'The size of the chart';
	BUBBLE_DIAGRAM_WIDTH    = 'Sets the width of the object with an accuracy of 1/100mm';
	BUBBLE_DIAGRAM_HEIGHT   = 'Sets the height of the object with an accuracy of 1/100mm';
	BUBBLE_DIAGRAM_FILE     = 'Calls the file selector box so that the chart can be given a filename';
	BUBBLE_DIAGRAM_TEMPFILE = 'Removes the selected filename. Texel then uses a temporary file for creating the chart.';
	BUBBLE_DIAGRAM_FILENAME = 'Shows the chart'#39's filename, if this has been selected';
	BUBBLE_DIAGRAM_CREATAD  = 'Saves a TAD file, which can be loaded into, say, ArtWorx in order to create a chart independently to Texel';
	BUBBLE_DIAGRAM_INSERT   = 'Generates the chart and places it on the page';
	BUBBLE_DIAGRAM_OK       = 'Generates the chart, places it on the page, and closes the dialog';
	
	BUBBLE_OBJSIZE_SIZE     = 'The size of the object can be set here';
	BUBBLE_OBJSIZE_FLAGS    = 'General options related to the size of the object';
	BUBBLE_OBJSIZE_X        = 'Set the X position of the object with an accuracy of 1/100mm';
	BUBBLE_OBJSIZE_Y        = 'Set the Y position of the object with an accuracy of 1/100mm';
	BUBBLE_OBJSIZE_WIDTH    = 'Set the width of the object with an accuracy of 1/100mm';
	BUBBLE_OBJSIZE_HEIGHT   = 'Set the height of the object with an accuracy of 1/100mm';
	BUBBLE_OBJSIZE_SPERR    = 'The object is locked, its size and position can not be changed';
	BUBBLE_OBJSIZE_PROP     = 'If checked, use proportional resizing when using the mouse';
	
	BUBBLE_URL_EDIT         = 'The URL (i.e. the web address) of a Texel file can be entered, e.g. http://www.uni-karlsruhe.de/~Thomas.Much/Texel/balmer.txl';
	BUBBLE_URL_OPEN         = 'Opens the given URL as a new Texel sheet, if the URL references a valid Texel file';
	BUBBLE_URL_OK           = 'Opens the given URL as a new Texel sheet, if the URL references a valid Texel file. The dialog will then be closed.';
	
	BUBBLE_PASS_FILE        = 'This file is password protected';
	BUBBLE_PASS_EDIT        = 'The user s password should be entered here. This is case-sensitive!';
	BUBBLE_PASS_CANCEL      = 'Cancel loading';
	BUBBLE_PASS_OK          = 'Confirms the password. If correctly entered the sheet is loaded.';
	
	BUBBLE_CHGPASS_OLD      = 'The old password must be entered here, if it exists and you want to change it. Please note that this is case sensitive!';
	BUBBLE_CHGPASS_NEW      = 'The new password should beentered here. Case sensitive!';
	BUBBLE_CHGPASS_CHECK    = 'The new password is only accepted if exactly the same password is entered in this field';
	BUBBLE_CHGPASS_OK       = 'Alters the password or accepts the new password';
	
	BUBBLE_FILL_ROWS        = 'The series is calculated in a row';
	BUBBLE_FILL_COLUMNS     = 'The series is calculated in a column';
	BUBBLE_FILL_ARITHM      = 'Calculates an arithmetic series (linear steps)';
	BUBBLE_FILL_GEOM        = 'Calculates a geometric series (exponential steps)';
	BUBBLE_FILL_DATE        = 'Calculates a date series';
	BUBBLE_FILL_TREND       = 'Calculates automatically an arithmetic or geometric trend analysis';
	BUBBLE_FILL_COPY        = 'Copies the first value of the block, without any calculation';
	BUBBLE_FILL_RDAY        = 'Calcs the series of type "date" at day intervals';
	BUBBLE_FILL_RWEEKDAY    = 'Calcs the series of type "date" at week intervals';
	BUBBLE_FILL_RMONTH      = 'Calcs the series of type "date" at month intervals';
	BUBBLE_FILL_RYEAR       = 'Calcs the series of type "date" at year intervals';
	BUBBLE_FILL_STEPVAL     = 'Sets the linear (arithmetic series) or exponential (geometric series) step interval';
	BUBBLE_FILL_ENDVAL      = 'Once this value is reached further calculation is halted';
	BUBBLE_FILL_CALC        = 'Calcs the series';
	BUBBLE_FILL_OK          = 'Calcs the series and closes the dialog';
	
	BUBBLE_LINK_LIST        = 'In this list all embedded objects are shown" with filename and type';
	BUBBLE_LINK_CHANGE      = 'Calls the file selector so that a file link can be changed';
	BUBBLE_LINK_ACTIVATE    = 'Activates (marks) the object, closes the dialog, and jumps to the object';
	BUBBLE_LINK_EDIT        = 'Calls a suitable OLGA server so that the object can be edited';
	
	BUBBLE_FINDVAL_CTARGET  = 'The destination cell must contain a formula which references the changeable cell. Texel can then attempt to enter a suitable value,'
	                          +' in the changeable cell, so that the formula in the destination cell equals the target value.';
	BUBBLE_FINDVAL_CVALUE   = 'Texel will try various values for the changeable cell until the destination cell reaches the target value';
	BUBBLE_FINDVAL_TVALUE   = 'The value that should be the result of the formula in the target';
	BUBBLE_FINDVAL_ITERAT   = 'How many attempts should be made to find a value for the changeable cell, if no solution found';
	BUBBLE_FINDVAL_STATUS   = 'The status line shows whether the target value was found, or if an error occurred';
	BUBBLE_FINDVAL_FIND     = 'Search for target';
	BUBBLE_FINDVAL_OK       = 'Search for target value and closes dialog';
	
	BUBBLE_TIP_TEXTS        = 'Useful Texel tips are shown here';
	BUBBLE_TIP_NEXT         = 'Shows the next tip';
	BUBBLE_TIP_START        = 'Sets if this dialog should appear each time Texel is started. The dialog can also be called from the global "Help" menu.';
	
	BUBBLE_PATHS_TXL        = 'Sets where Texel documents are normally loaded from and saved to';
	BUBBLE_PATHS_EXPORT     = 'Sets the default export folder for all export formats';
	BUBBLE_PATHS_META       = 'Sets the folder for the export of GEM Metafiles';
	BUBBLE_PATHS_ID4        = 'ID4-OLGA-objects are normally imported from this folder';
	BUBBLE_PATHS_TEXT       = 'Sets the folder where texts for text objects are normally located';
	BUBBLE_PATHS_GRAFIK     = 'Sets the folder where pictures (*.IMG) for graphics objects are normally located';
	BUBBLE_PATHS_DIAGRAMM   = 'The folder for manually saved chart files';
	BUBBLE_PATHS_LDW        = 'The folder from where LDW files (*.LDP) files are normally imported';
	BUBBLE_PATHS_DIF        = 'The folder from where DIF files are normally imported';
	BUBBLE_PATHS_CSV        = 'The folder from where CSV files are normally imported';
	BUBBLE_PATHS_ASCII      = 'The folder from where general ASCII files are normally imported';
	BUBBLE_PATHS_DBF        = 'The folder from where dBase files are normally imported';
	BUBBLE_PATHS_EXCEL      = 'The folder from where Excel documents are normally imported';
	BUBBLE_PATHS_123        = 'The folder from where Lotus-123 files are normally imported';
	BUBBLE_PATHS_PSION      = 'The folder from where Psion 3a spreadsheets are normally imported';
	
{ texel.msg }

	BUTTON_OK               = '  &OK  ';
	BUTTON_CANCEL           = '&Cancel';
	BUTTON_OKCANCEL         = '  &OK  |&Cancel';
	BUTTON_OKMINIMALCANCEL  = '  &OK  |&Minimum|&Cancel';
	BUTTON_GOCANCEL         = ' C&ont. |&Cancel';
	BUTTON_YESNO            = '  &Yes   | &No ';
	BUTTON_YESNOCANCEL      = ' &Yes  |  &No  |&Cancel ';
	BUTTON_OBJCELLCANCEL    = '&Object|C&ells |&Cancel';
	BUTTON_FORMDOC          = '&Templte|&Document';
	BUTTON_SAVECANCEL       = '  &Save   |&Cancel';

	MESSAGE_GENERAL_RANGE   = 'Please enter a valid range.';
	MESSAGE_GENERAL_MEMORY  = 'TEXEL:|Not enough free memory!';
	MESSAGE_GENERAL_OLGA    = 'OLGA is not installed.';

	MESSAGE_STARTUP_SCREEN  = 'Texel needs a resolution of at least 80x25 characters. Please choose a higher resolution or use a smaller system font.';
	MESSAGE_STARTUP_FOUND1  = 'TEXEL:|File "';
	MESSAGE_STARTUP_FOUND2  = '" not found.';
	MESSAGE_STARTUP_LOAD1   = 'TEXEL:|File "';
	MESSAGE_STARTUP_LOAD2   = '" could not be loaded.';
	MESSAGE_STARTUP_FRM1    = 'TEXEL:|File "';
	MESSAGE_STARTUP_FRM2    = '" is faulty.';
	MESSAGE_STARTUP_WDIALOG = 'Your operating system unfortunately has no printer dialog routines. Please install WDIALOG V2 or higher in your AUTO folder. Under N.AES install as an auto-start application in the file "N_AES.CNF".';
	MESSAGE_STARTUP_NVDI    = 'Texel needs NVDI since Version 5.0.';

	MESSAGE_WINDOW_MEMORY   = 'Texel:|Not enough memory free for a new window!';
	MESSAGE_WINDOW_WINDOWS  = 'No more windows.';
	MESSAGE_WINDOW_DDMOVE   = 'The Drag&Drop block is too big for the sheet, not all cells can be moved!';
	MESSAGE_WINDOW_DDCOPY   = 'The Drag&Drop block is too big for the sheet, not all cells can be copied!';
	MESSAGE_WINDOW_CCPCOPY  = 'The Cut/Copy/Paste block is too big for the sheet, not all cells can be copied!';
	MESSAGE_WINDOW_CLOSE1   = 'Sheet "';
	MESSAGE_WINDOW_CLOSE2   = '" has been changed. Do you want to save the changes?';
	MESSAGE_WINDOW_VAR1     = 'The variable ';
	MESSAGE_WINDOW_VAR2     = ' is already defined in cell ';
	MESSAGE_WINDOW_VAR3     = ' .';
	MESSAGE_WINDOW_CUT      = 'Cut object or cells?';
	MESSAGE_WINDOW_COPY     = 'Copy object or cells?';
	MESSAGE_WINDOW_DELETE   = 'Delete object or cells?';
	MESSAGE_WINDOW_BLOCK1   = 'During moving, formula, text or numeric data will be lost.';
	MESSAGE_WINDOW_BLOCK2   = 'Destination data will be overwritten!';
	MESSAGE_WINDOW_EMBED1   = 'Whilst embedding "';
	MESSAGE_WINDOW_EMBED2   = '" an error has occurred.';
	MESSAGE_WINDOW_EMAIL    = 'Error on sending email to Texel support.';
	MESSAGE_WINDOW_SIZE     = 'When the sheet is shrunk, formula, text or numeric data will be lost.';
	MESSAGE_WINDOW_SIZEERR  = 'Sheet size cannot be changed (memory shortage).';
	MESSAGE_WINDOW_ABANDON1 = 'Discard changes in file "';
	MESSAGE_WINDOW_ABANDON2 = '" ?';

	MESSAGE_NUMFORM_EMPTY   = 'Please enter a format.';
	MESSAGE_NUMFORM_PARTS   = 'The number format should contain a max. 3 parts, so may have 2 semicolons at most.';
	MESSAGE_NUMFORM_BRACES  = 'The format contains incorrect bracketting.';
	MESSAGE_NUMFORM_DEL1    = 'Number format "';
	MESSAGE_NUMFORM_DEL2    = '" delete?';

	MESSAGE_CLIP_PASTE      = 'There is no suitable file to paste in the clipboard..';
	MESSAGE_CLIP_IMPORT     = 'No suitable file in the clipboard.';
	
	MESSAGE_EMBED_ARTWORX   = 'ArtWorx can not be called.';
	MESSAGE_EMBED_OLGA1     = 'The OLGA "';
	MESSAGE_EMBED_OLGA2     = '"server can not be called.';
	MESSAGE_EMBED_DELETE    = 'Really delete object?';
	MESSAGE_EMBED_EXIST1    = 'The file "';
	MESSAGE_EMBED_EXIST2    = '" already exists. Overwrite it?';
	
	MESSAGE_LAYOUT_RANGE    = 'Please input a valid printer range.';
	MESSAGE_LAYOUT_HEADFOOT = 'You have defined a header or footer line, without allowing space for it.';
	
	MESSAGE_DIAGRAM_ROWS    = 'Too few rows marked.';
	MESSAGE_DIAGRAM_COLUMNS = 'Too few columns marked.';
	MESSAGE_DIAGRAM_CELLS   = 'Too few cells marked.';
	MESSAGE_DIAGRAM_ROWEVEN = 'Please mark an even row of cells containing data.';
	MESSAGE_DIAGRAM_COLEVEN = 'Please mark an even row of columns containing data.';

	MESSAGE_OPEN_MEMORY1    = 'File "';
	MESSAGE_OPEN_MEMORY2    = '" cannot be loaded (memory shortage).';
	MESSAGE_OPEN_EXIST1     = 'File "';
	MESSAGE_OPEN_EXIST2     = '" not found.';
	MESSAGE_OPEN_LOADED1    = 'The file "';
	MESSAGE_OPEN_LOADED2    = '" is already in memory. Reload it?';
	MESSAGE_OPEN_FORMAT1    = '"';
	MESSAGE_OPEN_FORMAT2    = '" is not a Texel file.';
	MESSAGE_OPEN_VERSION1   = '"';
	MESSAGE_OPEN_VERSION2   = '" (File version #';
	MESSAGE_OPEN_VERSION3   = ', saved with Texel ';
	MESSAGE_OPEN_VERSION4   = ') is not compatible with this version of Texel.';
	MESSAGE_OPEN_CCP        = 'Cut/Copy/Paste blocks cannot be loaded directly. Please use "Edit - Paste" (Control+V).';
	MESSAGE_OPEN_ALGO1      = '"';
	MESSAGE_OPEN_ALGO2      = '": Unknown Texel packing method';
	MESSAGE_OPEN_PASSLEN    = 'The password must be at least 6 chars long.';
	MESSAGE_OPEN_PASSWRONG  = 'Wrong password!';
	MESSAGE_OPEN_ERROR1     = 'File "';
	MESSAGE_OPEN_ERROR2     = '" cannot be loaded.';
	
	MESSAGE_SAVE_FORMDOC    = 'This is a template sheet. Save as a template or as new document?';
	MESSAGE_SAVE_EMBEDDED   = 'An embedded object has not yet been saved in the ID4 server. Save despite old object data?';
	MESSAGE_SAVE_MEMORY     = 'The sheet cannot be saved (memory shortage).';
	MESSAGE_SAVE_WPROT      = 'The sheet cannot be saved (disk write-protected?)';
	MESSAGE_SAVE_DISKFULL   = 'The sheet cannot be saved (disk full?)';

	MESSAGE_SAVEAS_EXIST1   = 'The file "';
	MESSAGE_SAVEAS_EXIST2   = '" already exists. Overwrite it?';
	MESSAGE_SAVEAS_NEW1     = 'Accept new name "';
	MESSAGE_SAVEAS_NEW2     = '" ?';

	MESSAGE_IMPORT_LOAD1    = 'File "';
	MESSAGE_IMPORT_LOAD2    = '" could not be loaded.';
	MESSAGE_IMPORT_DBSIZE   = 'The database is too large. Texel can import a maximum of 16384 records';
	MESSAGE_IMPORT_MEMORY1  = 'File "';
	MESSAGE_IMPORT_MEMORY2  = '" could not be loaded (memory shortage).';
	MESSAGE_IMPORT_EXIST1   = 'File "';
	MESSAGE_IMPORT_EXIST2   = '" not found.';
	MESSAGE_IMPORT_LOTUS1   = '"';
	MESSAGE_IMPORT_LOTUS2   = '" is not a Lotus 1-2-3 file.';
	MESSAGE_IMPORT_PSION1   = '"';
	MESSAGE_IMPORT_PSION2   = '" is not a Psion3(a) SPR file.';
	MESSAGE_IMPORT_WKS1     = '"';
	MESSAGE_IMPORT_WKS2     = '" is not a WKS/WK1 file.';
	MESSAGE_IMPORT_WKPASS1  = '"';
	MESSAGE_IMPORT_WKPASS2  = '" is encrypted and therefore cannot be imported.';
	MESSAGE_IMPORT_WKEMPTY1 = '"';
	MESSAGE_IMPORT_WKEMPTY2 = '" contains no data.';
	MESSAGE_IMPORT_OLE1     = 'OLE/COM file "';
	MESSAGE_IMPORT_OLE2     = '" could not be loaded.';
	MESSAGE_IMPORT_EXCEL1   = '"';
	MESSAGE_IMPORT_EXCEL2   = '"|is not an MS Excel 2.0/3.0/4.0 file!';
	MESSAGE_IMPORT_XLS1     = '"';
	MESSAGE_IMPORT_XLS2     = '" is not an XLS spreadsheet.';
	MESSAGE_IMPORT_XLPASS1  = '"';
	MESSAGE_IMPORT_XLPASS2  = '" is password protected and therefore cannot be loaded.';
	MESSAGE_IMPORT_XLDATE1  = 'Warning:|"';
	MESSAGE_IMPORT_XLDATE2  = '" contains dates in the 1904 format, which Texel does not support.';
	MESSAGE_IMPORT_LDP1     = '"';
	MESSAGE_IMPORT_LDP2     = '" is not an LDW/LDP file.';

	MESSAGE_EXPORT_EXIST1   = 'The file "';
	MESSAGE_EXPORT_EXIST2   = '" already exists. Overwrite it?';
	
	MESSAGE_PRINT_STOP      = 'Stop printing?';
	MESSAGE_PRINT_EMPTY     = 'The print area contains no data.';
	MESSAGE_PRINT_DEVICE1   = 'The device driver';
	MESSAGE_PRINT_DEVICE2   = '  won'#39't open.';
	MESSAGE_PRINT_MARGINS   = 'The margins overlap each other or extend beyond the paper edges.';
	MESSAGE_PRINT_NEWSHEET  = 'Please insert a new sheet.';
	MESSAGE_PRINT_PRINTER   = 'No printer is defined.';
	MESSAGE_PRINT_DRIVER    = 'There is no printer driver installed.';

	MESSAGE_INFO_PASSWRONG  = 'Old password wrong!';
	MESSAGE_INFO_PASSLEN    = 'The new password must be either blank or at least 6 characters long.';
	MESSAGE_INFO_PASSNEQ    = 'The entry in the verify field does not match the new password';
	
	MESSAGE_CONST_EMPTY     = 'Please enter a constant name.';
	MESSAGE_CONST_NAME      = 'Please enter a valid name.';
	MESSAGE_CONST_USED1     = 'The constant name "';
	MESSAGE_CONST_USED2     = '" is already used.';
	MESSAGE_CONST_VALEMPTY  = 'Please enter a value for the constant.';
	MESSAGE_CONST_VALUE     = 'Please enter a valid value.';
	MESSAGE_CONST_DELETE1   = 'Constant "';
	MESSAGE_CONST_DELETE2   = '" delete?';
	
	MESSAGE_FINDVAL_CELLREF = 'Destination cells and variable cells must have a cell reference.';
	MESSAGE_FINDVAL_FORMULA = 'The dest. cell must contain a formula';
	MESSAGE_FINDVAL_NUMBER  = 'The variable cell must either contain a number or be empty.';
	MESSAGE_FINDVAL_ERROR   = 'The destination can not be calculated.';

	MESSAGE_ABOUT_UPGRADE   = 'Das Upgrade auf die aktuelle Texel-Vollversion erhalten Sie preiswert bei||Application Systems Heidelberg GmbH|Postfach 102 646|D-69016 Heidelberg||Telefon: 06221/30 00 02|'
	                          +'Telefax: 06221/30 03 89|Mailbox: 06221/30 36 71||http://members.aol.com/ashinfo';

{ fsel titles }

	FSELTITLE_DIAGRAM       = 'CHART DOCUMENT';
	FSELTITLE_TAD           = 'TAD-FILE';
	FSELTITLE_TADSAVEAS     = 'SAVE TAD FILE AS...';
	FSELTITLE_OBJECTSAVEAS  = 'SAVE OBJECT AS...';
	FSELTITLE_OBJECTINSERT  = 'INSERT OBJECT';
	FSELTITLE_CHANGELINK    = 'CHANGE LINK TO...';
	FSELTITLE_LOADTEXT      = 'LOAD ASCII TEXT';
	FSELTITLE_LOADIMG       = 'LOAD IMG GRAPHIC';
	FSELTITLE_OPEN          = 'LOAD TEXEL SHEET';
	FSELTITLE_SAVEFORMASDOC = 'SAVE TEMPLATE AS DOCUMENT';
	FSELTITLE_IMPORTLDW     = 'IMPORT LDW SPOOL OUTPUT FILE';
	FSELTITLE_IMPORTDIF     = 'IMPORT DIF FILE';
	FSELTITLE_IMPORTCSV     = 'IMPORT CSV FILE';
	FSELTITLE_IMPORTASCII   = 'IMPORT ASCII FILE';
	FSELTITLE_IMPORTDBASE   = 'IMPORT DBASE FILE';
	FSELTITLE_IMPORTEXCEL   = 'IMPORT EXCEL FILE';
	FSELTITLE_IMPORT123     = 'IMPORT 1-2-3 FILE';
	FSELTITLE_IMPORTPSION   = 'IMPORT PSION FILE';
	FSELTITLE_EXPORTFILE    = 'SET EXPORT FILE';
	FSELTITLE_PRINTMETA     = 'PRINTOUT IN METAFILE...';
	FSELTITLE_PRINTIMG      = 'PRINTOUT IN IMG-FILE...';
	FSELTITLE_SAVEAS        = 'SAVE TEXEL SHEET AS...';
	FSELTITLE_PATHS         = 'SELECT STANDARD PATHS...';

{ window titles }

	TITLE_FONTSELECTOR      = 'Font selector';
	TITLE_TEXTATTR          = 'Textattribute';
	TITLE_NUMFORMAT         = 'Numberformat';
	TITLE_ROWSIZE           = 'Row height';
	TITLE_COLSIZE           = 'Column width';
	TITLE_COLNAME           = 'Column name';
	TITLE_PATTERN           = 'Fill';
	TITLE_BORDERS           = 'Border';
	TITLE_ABOUT             = 'About Texel..';
	TITLE_LAYOUT            = 'Page settings';
	TITLE_FUNCTION          = 'Insert function';
	TITLE_DIAGRAM           = 'Insert chart';
	TITLE_OBJSIZE           = 'Object size';
	TITLE_OBJATTR           = 'Objectattribute';
	TITLE_IMGOBJ            = 'Graphic attributes';
	TITLE_TXTOBJ            = 'Textobjectattribute';
	TITLE_ELEMENTCB         = 'Elementattribute';
	TITLE_INSOBJ            = 'Insert object';
	TITLE_URL               = 'Open URL';
	TITLE_OPEN              = 'Load Datei';
	TITLE_IMPORTASCII       = 'Import';
	TITLE_IMPORTGDBC        = 'dBase import';
	TITLE_IMPORT            = 'Import file';
	TITLE_EXPORT            = 'Export';
	TITLE_FILL              = 'Calculate row';
	TITLE_LINKS             = 'Links';
	TITLE_CLEAR             = 'Delete cells';
	TITLE_INSERT            = 'Insert cells';
	TITLE_INSVAL            = 'Insert contents';
	TITLE_PRINT             = 'Print';
	TITLE_PAPER             = 'Paperformat';
	TITLE_SHFORM            = 'Sheetformat';
	TITLE_PREVIEW           = 'Preview';
	TITLE_INFO              = 'Info';
	TITLE_NEW               = 'New';
	TITLE_FIND              = 'Search';
	TITLE_REPLACE           = 'Replace';
	TITLE_CONST             = 'Constants';
	TITLE_FINDVAL           = 'Find targ val';
	TITLE_SORT              = 'Sort';
	TITLE_SETUP             = 'Settings';
	TITLE_SPECIALCHARS      = 'Special Characters';
	TITLE_HELP              = 'Help';
	TITLE_TIPS              = 'Tips and tricks';
	TITLE_PATHS             = 'Paths';

{ icon window titles }

	ICNTITLE_TEXTATTR       = 'TEXTATTRIBUTE';
	ICNTITLE_NUMFORMAT      = 'NUMBERFORMAT';
	ICNTITLE_ROWSIZE        = 'ROW HEIGHT';
	ICNTITLE_COLSIZE        = 'COLUMN WIDTH';
	ICNTITLE_COLNAME        = 'COLUMN NAME';
	ICNTITLE_PATTERN        = 'FILL';
	ICNTITLE_BORDERS        = 'BORDER';
	ICNTITLE_CLIPBOARD      = 'CLIPBOARD';
	ICNTITLE_ABOUT          = 'ABOUT...';
	ICNTITLE_LAYOUT         = 'LAYOUT';
	ICNTITLE_DIAGRAM        = 'CHART';
	ICNTITLE_OBJSIZE        = 'OBJECT SIZE';
	ICNTITLE_OBJATTR        = 'OBJECTATTRIBUTE';
	ICNTITLE_IMGOBJ         = 'GRAPHIC ATTRIBUTES';
	ICNTITLE_TXTOBJ         = 'TEXTOBJECTATTRIBUTE';
	ICNTITLE_ELEMENT        = 'ELEMENT';
	ICNTITLE_INSOBJ         = 'OBJECT';
	ICNTITLE_URL            = 'URL';
	ICNTITLE_IMPORTASCII    = 'IMPORT';
	ICNTITLE_IMPORTGDBC     = 'IMPORT';
	ICNTITLE_EXPORT         = 'EXPORT';
	ICNTITLE_FILL           = 'FILL';
	ICNTITLE_LINKS          = 'LINKS';
	ICNTITLE_CLEAR          = 'DELETE CELLS';
	ICNTITLE_INSERT         = 'INSERT CELLS';
	ICNTITLE_INSVAL         = 'INSERT CONTENTS';
	ICNTITLE_PRINT          = 'PRINT';
	ICNTITLE_SHFORM         = 'SHEETFORMAT';
	ICNTITLE_PREVIEW        = 'PREVIEW';
	ICNTITLE_INFO           = 'INFO';
	ICNTITLE_NEW            = 'NEW';
	ICNTITLE_FIND           = 'SEARCH';
	ICNTITLE_REPLACE        = 'REPLACE';
	ICNTITLE_CONST          = 'CONSTANTS';
	ICNTITLE_FINDVAL        = 'TARG VAL';
	ICNTITLE_SORT           = 'SORT';
	ICNTITLE_SETUP          = 'SETUP';
	ICNTITLE_SETUPPRINTER   = 'PRINTER-SETUP';
	ICNTITLE_SETUPLAYOUT    = 'LAYOUT-SETUP';
	ICNTITLE_PRINTERINFO    = 'PRINTER-INFO';
	ICNTITLE_HELP           = 'HELP';
	ICNTITLE_TIPS           = 'TIPS';
	ICNTITLE_PATHS          = 'PATHS';

{ ST-Guide nodes }

	STG_CALCWINDOW          = 'Rechenfenster';
	STG_TEXTATTR            = 'Textattribute-Dialog';
	STG_NUMFORMAT           = 'Zahlenformate-Dialog';
	STG_ROWSIZE             = 'Zeilenhîhe-Dialog';
	STG_COLSIZE             = 'Spaltenbreite-Dialog';
	STG_COLNAME             = 'Spaltennamen-Dialog';
	STG_PATTERN             = 'Muster-Dialog';
	STG_BORDERS             = 'Rahmen-Dialog';
	STG_SPECIALCHARS        = 'Sonderzeichen-Fenster';
	STG_CLIPBOARD           = 'Klemmbrett-geÑndert-Dialog';
	STG_ABOUT               = 'öber-Dialog';
	STG_LAYOUT              = 'Seite einrichten-Dialog';
	STG_DIAGRAM             = 'Diagramm einfÅgen-Dialog';
	STG_OBJSIZE             = 'Objektgrîûe-Dialog';
	STG_OBJATTR             = 'Objektattribute-Dialog';
	STG_IMGOBJ              = 'Grafikobjektattribute-Dialog';
	STG_TXTOBJ              = 'Textobjektattribute-Dialog';
	STG_ELEMENTCB           = 'Element-KontrollkÑstchen-Dialog';
	STG_INSOBJ              = 'Objekt einfÅgen-Dialog';
	STG_URL                 = 'URL îffnen-Dialog';
	STG_IMPORTASCII         = 'ASCII-Import-Dialog';
	STG_IMPORTGDBC          = 'dBase-Import-Dialog';
	STG_EXPORT              = 'Export-Dialog';
	STG_FILL                = 'Reihe-AusfÅllen-Dialog';
	STG_LINKS               = 'VerknÅpfungen-Dialog';
	STG_CLEAR               = 'Zellen lîschen-Dialog';
	STG_INSERT              = 'Zellen-einfÅgen-Dialog';
	STG_INSVAL              = 'Inhalte-einfÅgen-Dialog';
	STG_PRINT               = 'Drucken-Dialog';
	STG_SHFORM              = 'Blattformat-Dialog';
	STG_PREVIEW             = 'Seitenansicht';
	STG_INFO                = 'Tabellen-Informations-Dialog';
	STG_NEW                 = 'Neu-Dialog';
	STG_FIND                = 'Suchen-Dialog';
	STG_REPLACE             = 'Ersetzen-Dialog';
	STG_CONST               = 'Konstanten-Dialog';
	STG_FINDVAL             = 'Zielwertsuche-Dialog';
	STG_SORT                = 'Sortieren-Dialog';
	STG_SETUP               = 'Einstellungen-Dialog';
	STG_PRINTERINFO         = 'Drucker-Informations-Dialog';
	STG_HELP                = 'Hilfe-Stichwort';
	STG_TIPS                = 'Tips-Dialog';
	STG_PATHS               = 'Pfade-Dialog';

{ startup }

	STARTUP_INF             = 'LOAD FILE "TEXEL.INF"';
	STARTUP_PATHS           = 'LOAD FILE PATHS';
	STARTUP_STRUCTS         = 'INITIALISING STRUCTURES..';
	STARTUP_HISTORY         = 'LOAD FILE HISTORY';
	STARTUP_MENUS           = 'INSTALLING MENUS';
	STARTUP_DAT             = 'LOAD FILE "TEXEL.DAT"';
	STARTUP_USRDAT          = 'LOAD FILE "TEXELUSR.DAT"';
	STARTUP_FRM             = 'LOAD FILE "TEXEL.FRM"';
	STARTUP_USRFRM          = 'LOAD FILE "TEXELUSR.FRM"';
	STARTUP_PRINTDIAL       = 'INITIALISE PRINTER DIALOG';
	STARTUP_FINISH          = 'SETUP WORKING ENVIRONMENT';

{ parse errors }

	PARSERR_ERROR               = 'Error in formula';
	PARSERR_NOMEM               = 'Not enough free memory';
	PARSERR_INCOMPCHARS         = 'Invalid character at the formula end';
	PARSERR_INCOMPCHARSFUNC     = 'Invalid character at the formula end (wrong function name?)';
	PARSERR_COMPINCOMPLETE      = 'Comparison incomplete (second argument is invalid or false)';
	PARSERR_SUMMANDMISSING      = 'Addition incomplete (second Summand is invalid or incorrect)';
	PARSERR_SUBTRAHENDMISSING   = 'Subtraction incomplete (Subtrahend is invalid or incorrect)';
	PARSERR_FAKTORMISSING       = 'Product incomplete (second factor is invalid or incorrect)';
	PARSERR_DIVISORMISSING      = 'Quotient incomplete (Divisor is invalid or incomplete)';
	PARSERR_POWERMISSING        = 'Power incomplete (Exponent is invalid or incomplete)';
	PARSERR_FACTORINVALID       = 'Missing or invalid argument (function, cell, number, constant or variable expected)';
	PARSERR_ARGCELLRANGE        = 'Argument must be a range or cell reference';
	PARSERR_TOOFEWARGS          = 'Too few arguments or incorrectly separated by semicolons?';
	PARSERR_ARGEMPTY            = 'No function arguments';
	PARSERR_TOOMANYARGS         = 'Too many function arguments';
	PARSERR_KLAMMERZUFEHLT      = 'Closing bracket missing';
	PARSERR_TOKENTOOLONG        = 'Number or char string too long!';
	PARSERR_STRINGNOTTERMINATED = 'Character string incorrectly terminated (no " at end)';
	PARSERR_COLUMNWRONG         = 'Error in column cell reference (1 or two letters A-Z)';
	PARSERR_ROWWRONG            = 'Error in row cell reference (min. 1 max. 5 numbers)';
	PARSERR_RANGEINCOMPLETE     = 'Range after the colon incomplete or faulty)';
	PARSERR_NUMBERSEXPECTED     = 'Digits after the decimal point or the exponent-E should be a number';
	PARSERR_KLAMMERAUFFEHLT     = 'Opening bracket missing after function name';
	PARSERR_KLAMMERORSEMIKOLON  = 'Semicolon (argument separator) or closing bracket expected';
	PARSERR_ARGNORANGE          = 'This function does not accept a range';

{ operators }

	OPS_NATURAL_PLUS        = 'plus';
	OPS_NATURAL_MINUS       = 'minus';
	OPS_NATURAL_MULT        = 'mal';
	OPS_NATURAL_DIV         = 'durch';
	OPS_NATURAL_POWER       = 'hoch';

{ GEMScript command help }

	CMD_DOC_CELL            = '<zeile> <spalte> [<datei>]';
	CMD_DOC_CHECKAPP        = '<applikation>';
	CMD_DOC_CHECKCOMMAND    = '<kommando>';
	CMD_DOC_CLOSE           = '[<datei>]';
	CMD_DOC_COPY            = '[<datei>]';
	CMD_DOC_CUT             = '[<datei>]';
	CMD_DOC_DELETE          = '[<datei>]';
	CMD_DOC_EXPORT          = '<format> <name> [<datei>]';
	CMD_DOC_GETCELL         = '<zelle> [<datei>] | <zeile> <spalte> [<datei>]';
	CMD_DOC_GETCELLFORMULA  = '<zelle> [<datei>] | <zeile> <spalte> [<datei>]';
	CMD_DOC_GETCELLVALUE    = '<zelle> [<datei>] | <zeile> <spalte> [<datei>]';
	CMD_DOC_GETCOLUMNS      = '[<datei>]';
	CMD_DOC_GETRANGE        = '<bereich> [<datei>]';
	CMD_DOC_GETROWS         = '[<datei>]';
	CMD_DOC_GETSELECTION    = '[<datei>]';
	CMD_DOC_GETVARIABLE     = '<variable> [<datei>]';
	CMD_DOC_GOTO            = '<zelle> [<datei>] | <zeile> <spalte> [<datei>]';
	CMD_DOC_ISBLOCKUSED     = '<bereich> [<datei>]';
	CMD_DOC_ISCELLCONST     = '<zelle> [<datei>] | <zeile> <spalte> [<datei>]';
	CMD_DOC_ISCELLEMPTY     = '<zelle> [<datei>] | <zeile> <spalte> [<datei>]';
	CMD_DOC_ISCELLFORMULA   = '<zelle> [<datei>] | <zeile> <spalte> [<datei>]';
	CMD_DOC_ISCELLTEXT      = '<zelle> [<datei>] | <zeile> <spalte> [<datei>]';
	CMD_DOC_OPEN            = '[<datei>]';
	CMD_DOC_PASTE           = '[<datei>]';
	CMD_DOC_PRINT           = '[<datei>]';
	CMD_DOC_RECALC          = '[<datei>]';
	CMD_DOC_RETURNCELLVALUE = '<datei> <zelle> <wert>';
	CMD_DOC_SAVE            = '[<datei>]';
	CMD_DOC_SAVEAS          = '<neuername> [<datei>]';
	CMD_DOC_SELECT          = '<bereich> [<datei>]';
	CMD_DOC_SELECTALL       = '[<datei>]';
	CMD_DOC_SETCELL         = '<zelle> <inhalt> [<datei>] | <zeile> <spalte> <inhalt> [<datei>]';
	CMD_DOC_SETCOLOR        = '<farbindex> [<datei>]';
	CMD_DOC_SETTEXTCOLOR    = '<farbindex> [<datei>]';
	CMD_DOC_TOFRONT         = '<datei>';

{ misc }

	STRING_ROW              = 'Row';
	STRING_ROWTO            = 'to';
	STRING_COL              = 'Column';
	STRING_COLTO            = 'to';
	STRING_NONAME           = 'unknown';
	STRING_ALL              = 'All';
	STRING_STANDARD         = 'Standard';
	STRING_FONTSELECTION    = 'Fontselection!';
	STRING_ANY              = 'any';
	STRING_TEMPORARYFILE    = 'temporary file';
	STRING_IMG              = 'GEM pixel graphics';
	STRING_TXT              = 'ASCII text';
	STRING_ROWDIV           = 'Row separator';
	STRING_COLDIV           = 'Col. separator';
	STRING_TRUE             = 'True';
	STRING_FALSE            = 'False';
	STRING_DEVICE           = 'Device';
	STRING_PRINTPAGE        = 'PRINTING PAGE...';
	STRING_COPY             = 'Copie';
	STRING_COPIES           = 'Copies';
	STRING_PAGE             = 'Page';
	STRING_BUILDPAGE        = 'BUILDING PAGE...';
	STRING_PAGEOF           = 'of';
	STRING_NODRIVER         = 'Driver?';
	STRING_WRONGMARGINS     = 'Marg?';
	STRING_PAGEEMPTY        = 'Empt!';
	STRING_NOTHING          = 'nothing';
	STRING_DEFAULTPRINTER   = 'Default printer';
	STRING_NODRIVER2        = 'No driver available!';
	STRING_NONE             = 'none';
	STRING_YES              = 'yes';
	STRING_NO               = 'no';

	STRING_DB_SOURCE        = 'Source';
	STRING_DB_RECORDS       = 'Records';
	STRING_DB_EMPTY         = 'empty';

	STRING_ERR_ERROR        = 'ERROR';
	STRING_ERR_OVERFLOW     = 'OVERFLOW';
	
	STRING_INFO_CREATED     = 'Created on  ';
	STRING_INFO_LATEST      = 'Opened on  ';
	STRING_INFO_USED        = 'Used:   ';
	STRING_INFO_PRINTED     = 'Printed:  ';
	STRING_INFO_SAVEDWITH   = 'Saved with';
	STRING_INFO_TIMEAT      = 'at';
	
	STRING_FINDVAL_INTERVAL = 'No start interval';
	STRING_FINDVAL_CANCEL   = 'Cancel';
	STRING_FINDVAL_ITERAT   = 'Iterations?';
	STRING_FINDVAL_NOSOLUTN = 'No solution';
	STRING_FINDVAL_STATUS   = 'Status';
	STRING_FINDVAL_SEARCH   = 'Search... (Cancel with <Esc>';
	STRING_FINDVAL_ERROR    = 'Error';
	STRING_FINDVAL_OK       = 'OK.';
	
	STRING_PRNINFO_INFOON   = 'Informationen over';
	STRING_PRNINFO_NAME     = 'Name:         ';
	STRING_PRNINFO_NUMBER   = 'GDOS number:  ';
	STRING_PRNINFO_OUT      = 'reines AusgabegerÑt';
	STRING_PRNINFO_IN       = 'reines EingabegerÑt';
	STRING_PRNINFO_IO       = 'Ein- und AusgabegerÑt';
	STRING_PRNINFO_META     = 'Metafile-Ausgabe';
	STRING_PRNINFO_UNKNOWN  = 'unbekannt';
	STRING_PRNINFO_COLOR1   = 'Farbdruck nicht mîglich';
	STRING_PRNINFO_COLOR2   = 'kontinuierliche Verteilung';
	STRING_PRNINFO_TXT1     = 'E/A-Typ:      ';
	STRING_PRNINFO_TXT2     = 'Farben:       ';
	STRING_PRNINFO_TXT3     = 'def. Farben:  ';
	STRING_PRNINFO_TXT4     = 'ZeichensÑtze: ';
	STRING_PRNINFO_TXT5     = 'Auflîsung:    ';
	STRING_PRNINFO_TXT6     = 'Papiergrîûe:  ';
	STRING_PRNINFO_TXT7     = 'Druckbereich: ';
	STRING_PRNINFO_TXT8     = 'B'#130'ziers:      ';
	
	STRING_WEB_SUPPORT      = 'mailto:support@texel-home.de';
	STRING_WEB_HOMEPAGE     = 'http://www.texel-home.de';
	STRING_WEB_MAILDEF1     = 'Hello Texel Support,';
	STRING_WEB_MAILDEF2     = 'I have this Texel question';
	STRING_WEB_MAILDATEOF   = 'of';
	STRING_WEB_MAILDEF3     = 'Greetings,';
	STRING_WEB_MAILSUBJECT  = 'Texel question';
	
	STRING_ELM_CHECKBOX     = 'Control checkbox';

{ ############################################################################## }
