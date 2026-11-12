// UnInteraction.cpp: 1 function
// Placed here by: contributions.
// Every function marked @baa compiles in this file to the original's bytes (python tools/asylum unit-check).
#include "ue3/Classes.h"

// FName's string constructor (UnName.cpp), missing from the kit's FName.
enum EFindName { FNAME_Find, FNAME_Add };

struct FNameString : public FName
{
	FNameString(const TCHAR* Name, EFindName FindType = FNAME_Add, UBOOL bSplitName = TRUE); /* 0x005d5620 */
};

// The UI input alias names (UIKEY_Consume, UIKEY_NextControl, ...), registered once at startup.
#define DECLARE_UI_KEY(name) extern FName UIKEY_##name;
DECLARE_UI_KEY(Consume)
DECLARE_UI_KEY(NextControl)
DECLARE_UI_KEY(PrevControl)
DECLARE_UI_KEY(NavFocusUp)
DECLARE_UI_KEY(NavFocusDown)
DECLARE_UI_KEY(NavFocusLeft)
DECLARE_UI_KEY(NavFocusRight)
DECLARE_UI_KEY(ShowContextMenu)
DECLARE_UI_KEY(HideContextMenu)
DECLARE_UI_KEY(CloseScene)
DECLARE_UI_KEY(MoveSelectionUp)
DECLARE_UI_KEY(MoveSelectionDown)
DECLARE_UI_KEY(MoveSelectionLeft)
DECLARE_UI_KEY(MoveSelectionRight)
DECLARE_UI_KEY(SelectFirstElement)
DECLARE_UI_KEY(SelectLastElement)
DECLARE_UI_KEY(SelectAllItems)
DECLARE_UI_KEY(PageUp)
DECLARE_UI_KEY(PageDown)
DECLARE_UI_KEY(SubmitListSelection)
DECLARE_UI_KEY(ResizeColumn)
DECLARE_UI_KEY(Clicked)
DECLARE_UI_KEY(Char)
DECLARE_UI_KEY(Backspace)
DECLARE_UI_KEY(DeleteCharacter)
DECLARE_UI_KEY(MoveCursorLeft)
DECLARE_UI_KEY(MoveCursorRight)
DECLARE_UI_KEY(MoveCursorToLineStart)
DECLARE_UI_KEY(MoveCursorToLineEnd)
DECLARE_UI_KEY(SubmitText)
DECLARE_UI_KEY(MouseSelect)
DECLARE_UI_KEY(DragSlider)
DECLARE_UI_KEY(IncrementSliderValue)
DECLARE_UI_KEY(DecrementSliderValue)
DECLARE_UI_KEY(IncrementNumericValue)
DECLARE_UI_KEY(DecrementNumericValue)
DECLARE_UI_KEY(NextPage)
DECLARE_UI_KEY(PreviousPage)
DECLARE_UI_KEY(ScrollUp)
DECLARE_UI_KEY(ScrollDown)
DECLARE_UI_KEY(ScrollLeft)
DECLARE_UI_KEY(ScrollRight)
DECLARE_UI_KEY(ScrollTop)
DECLARE_UI_KEY(ScrollBottom)
#undef DECLARE_UI_KEY
#define DECLARE_UI_KEY(name) UIKEY_##name = FNameString(TEXT(#name));
// @baa 0x00d6c1a0
void sub_00d6c1a0()
{
DECLARE_UI_KEY(Consume)
DECLARE_UI_KEY(NextControl)
DECLARE_UI_KEY(PrevControl)
DECLARE_UI_KEY(NavFocusUp)
DECLARE_UI_KEY(NavFocusDown)
DECLARE_UI_KEY(NavFocusLeft)
DECLARE_UI_KEY(NavFocusRight)
DECLARE_UI_KEY(ShowContextMenu)
DECLARE_UI_KEY(HideContextMenu)
DECLARE_UI_KEY(CloseScene)
DECLARE_UI_KEY(MoveSelectionUp)
DECLARE_UI_KEY(MoveSelectionDown)
DECLARE_UI_KEY(MoveSelectionLeft)
DECLARE_UI_KEY(MoveSelectionRight)
DECLARE_UI_KEY(SelectFirstElement)
DECLARE_UI_KEY(SelectLastElement)
DECLARE_UI_KEY(SelectAllItems)
DECLARE_UI_KEY(PageUp)
DECLARE_UI_KEY(PageDown)
DECLARE_UI_KEY(SubmitListSelection)
DECLARE_UI_KEY(ResizeColumn)
DECLARE_UI_KEY(Clicked)
DECLARE_UI_KEY(Char)
DECLARE_UI_KEY(Backspace)
DECLARE_UI_KEY(DeleteCharacter)
DECLARE_UI_KEY(MoveCursorLeft)
DECLARE_UI_KEY(MoveCursorRight)
DECLARE_UI_KEY(MoveCursorToLineStart)
DECLARE_UI_KEY(MoveCursorToLineEnd)
DECLARE_UI_KEY(SubmitText)
DECLARE_UI_KEY(MouseSelect)
DECLARE_UI_KEY(DragSlider)
DECLARE_UI_KEY(IncrementSliderValue)
DECLARE_UI_KEY(DecrementSliderValue)
DECLARE_UI_KEY(IncrementNumericValue)
DECLARE_UI_KEY(DecrementNumericValue)
DECLARE_UI_KEY(NextPage)
DECLARE_UI_KEY(PreviousPage)
DECLARE_UI_KEY(ScrollUp)
DECLARE_UI_KEY(ScrollDown)
DECLARE_UI_KEY(ScrollLeft)
DECLARE_UI_KEY(ScrollRight)
DECLARE_UI_KEY(ScrollTop)
DECLARE_UI_KEY(ScrollBottom)
}

#undef DECLARE_UI_KEY
