# Japanese jlreq textclass definition file.
# Author : Koji Yokota (yokota6@gmail.com)
#
# This class internally loads following packages:
# Any time:			 	l3keys2e, lmodern
# With non-LuaLaTeX:	everyhook
# With LuaLaTeX:		luatexja, luatexja-adjust

Format 99

Style Part
	Argument post:1
		LabelString		"Subtitle|u"
		Tooltip			"Subtitle of the part"
		InsertCotext	1
	EndArgument
End

Style Part*
	Argument post:1
		LabelString		"Subtitle|u"
		Tooltip			"Subtitle of the part"
		InsertCotext	1
	EndArgument
End

Style Chapter
	Argument post:1
		LabelString		"Subtitle|u"
		Tooltip			"Subtitle of the chapter"
		InsertCotext	1
	EndArgument
End

Style Chapter*
	Argument post:1
		LabelString		"Subtitle|u"
		Tooltip			"Subtitle of the chapter"
		InsertCotext	1
	EndArgument
End

Style Section
	Argument post:1
		LabelString		"Subtitle|u"
		Tooltip			"Subtitle of the section"
		InsertCotext	1
	EndArgument
End

Style Section*
	Argument post:1
		LabelString		"Subtitle|u"
		Tooltip			"Subtitle of the section"
		InsertCotext	1
	EndArgument
End

Style Subsection
	Argument post:1
		LabelString		"Subtitle|u"
		Tooltip			"Subtitle of the subsection"
		InsertCotext	1
	EndArgument
End

Style Subsection*
	Argument post:1
		LabelString		"Subtitle|u"
		Tooltip			"Subtitle of the subsection"
		InsertCotext	1
	EndArgument
End

Style Subsubsection
	Argument post:1
		LabelString		"Subtitle|u"
		Tooltip			"Subtitle of the subsubsection"
		InsertCotext	1
	EndArgument
End

Style Subsubsection*
	Argument post:1
		LabelString		"Subtitle|u"
		Tooltip			"Subtitle of the subsubsection"
		InsertCotext	1
	EndArgument
End

Style JLReq_Setup
	InPreamble			1
	LatexType			Command
	LatexName			jlreqsetup
	Category			FrontMatter
	LabelType			Static
	LabelString			"JLReq Setup"
	LabelSep			"M"
	LeftMargin			"MMMMMMM"
	Font
		Family			Typewriter
		Size			Small
	EndFont
	LabelFont
		Color			eolmarker
		Family			Sans
	EndFont
	ParagraphGroup		1
	PassThru			1
End

InsetLayout Flex:Endnote
	LyxType		custom
	LatexType	Command
	LatexName	endnote
	MultiPar	0
	CustomPars	0
	Decoration	Classic
	LabelString	"Endnote"
	ForcePlain	1
	BgColor		background
	ResetsFont true
End

InsetLayout Flex:Sidenote
	CopyStyle	Flex:Endnote
	LatexName	sidenote
	LabelString	"Sidenote"
	NoInsetLayout	Marginal
	Argument post:1
		LabelString		"Note"
		MenuString		"Endnote contents"
		Tooltip			"Contents of the sidenote. Only makes sense when \jlreqsetup{sidenote_type=symbol} is specified in the preamble."
		Mandatory		0
		LeftDelim		{
		RightDelim		}
	EndArgument
End

InsetLayout Flex:Warichu
	CopyStyle	Flex:Endnote
	LatexName	warichu
	LabelString	"Warichu"
End

InsetLayout Flex:Warichu*
	CopyStyle		Flex:Endnote
	LatexName		warichu*
	LabelString		"Warichu*"
	PassThru		1
	MultiPar		1
	ParbreakIgnored	1
	TextFont
		Family		Typewriter
	EndFont
End

InsetLayout Flex:Tatechuyoko
	CopyStyle	Flex:Endnote
	LatexName	tatechuyoko*
	LabelString	"Tatechuyoko"
End

InsetLayout Flex:Jidori
	CopyStyle	Flex:Endnote
	LatexName	jidori
	LabelString	"Jidori"
	Argument 1
		LabelString		"Length"
		MenuString		"Jidori Length"
		Tooltip			"Length of Jidori. Contents is fit to this length."
		Mandatory		1
	EndArgument
End

InsetLayout Flex:Akigumi
	CopyStyle	Flex:Jidori
	LatexName	akigumi
	LabelString	"Akigumi"
	MenuString	"Akigumi (LuaLaTeX)"
	Argument 1
		MenuString		"Akigumi Length"
		Tooltip			"Length between chars are set to this length."
	EndArgument
End
