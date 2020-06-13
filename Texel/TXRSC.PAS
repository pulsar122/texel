unit txrsc;
{ 2000-03-03 }

interface

	{$IFDEF INTERFACE_RESOURCE_FILES}
	{$IFDEF FRENCH}
	{$I rsc\texel_f.i}
	{$I rsc\texel2_f.i}
	{$ELSE}
	{$IFDEF ENGLISH}
	{$I rsc\texel_e.i}
	{$I rsc\texel2_e.i}
	{$ELSE}
	{$I rsc\texel.i}
	{$I rsc\texel2.i}
	{$ENDIF}
	{$ENDIF}
	{$ELSE}
	
	{ RSM multilayer resource files }
	{$I rsc\texel.i}
	{$I rsc\texel2.i}
	
	{$ENDIF}


implementation

end.