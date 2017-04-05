#ifndef _S_INGAME_MENU_
#define _S_INGAME_MENU_

#include "j1App.h"
#include "j1Scene.h"
#include "MainScene.h"
#include "Gui.h"
#include "j1Timer.h"

class S_InGameMenu : public MainScene
{
public:
	S_InGameMenu();
	~S_InGameMenu();
	bool Awake(pugi::xml_node& conf);
	bool Start();
	bool Update();
	bool Clean();
	void OnGui(Gui* ui, GuiEvent event);

	bool Active() const
	{
		return active;
	}

private:
	GuiButton* IngamemenuLabel = nullptr;
	GuiButton* resume =			nullptr;
	GuiButton* loadcheckpoint =	nullptr;
	GuiButton* options =		nullptr;
	GuiButton* mainmenu =		nullptr;
	GuiButton* quit =	   		nullptr;
	bool active = false;
};

#endif // #pragma once
