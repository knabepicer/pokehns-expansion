AzaleaTown_PokemonCenter_hns_MapScripts::
	map_script MAP_SCRIPT_ON_TRANSITION, AzaleaTown_Pokecenter_OnTransition
	.byte 0

AzaleaTown_Pokecenter_OnTransition::
	setrespawn HEAL_LOCATION_AZALEA_TOWN_HNS
	end

AzaleaPokeCenter_EventScript_Gentleman::
	lock
	faceplayer
	msgbox AzaleaPokecenter_Text_Gentleman, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaPokeCenter_EventScript_Fisher::
	lock
	faceplayer
	msgbox AzaleaPokecenter_Text_FishingGuru, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaPokeCenter_EventScript_PokefanF::
	lock
	faceplayer
	msgbox AzaleaPokecenter_Text_PokefanF, MSGBOX_DEFAULT
	closemessage
	release
	end

AzaleaPokecenter_Text_Gentleman:
	.string "Do your MOéMON know HM moves?\p"
	.string "Those moves can be used even if\n"
	.string "your MOéMON has fainted.$"

AzaleaPokecenter_Text_UnusedPCExplanation:
	.string "This BILL guy created the system\n"
	.string "for storing MOéMON in a PC.\p"
	.string "BILL's PC can store up to 30\n"
	.string "MOéMON per BOX.$"

AzaleaPokecenter_Text_FishingGuru:
	.string "BILL's PC can store up to 30\n"
	.string "MOéMON per BOX.$"

AzaleaPokecenter_Text_PokefanF:
	.string "Do you know about BERRIES?\p"
	.string "Crack one open, hollow it out and\n"
	.string "fit it with a special device.\p"
	.string "Then you can catch MOéMON with it.\p"
	.string "Before MOé BALLS were invented,\n"
	.string "everyone used BERRIES.$"
