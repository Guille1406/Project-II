#ifndef _S_GAME_START_
#define _S_GAME_START_

#include "j1App.h"
#include "j1Scene.h"
#include "MainScene.h"
#include "Gui.h"

class S_GameStart : public MainScene {

public:
	S_GameStart();
	~S_GameStart();
	bool Start();
	bool Update();
	bool Clean();
	void OnGui(Gui* ui, GuiEvent event);
public:
	GuiButton* campain = nullptr;
	GuiButton* options = nullptr;
	GuiButton* credits = nullptr;
	GuiButton* quit = nullptr;
};

#endif // #pragma once