#pragma once
#include "TextureHolder.h"

class Engine
{
public:
	Engine();
	void run();

private:
	void input();
	void update(float dtASSeconds);
	void draw();
	TextureHolder th;

	const int TILE_SIZE = 50;
	const int VERTS_IN_QUAD = 4;
	const int GRAVITY = 4;
	sf::RenderWindow m_Window;
	sf::View m_MainView;
	sf::View m_LeftView;
	sf::View m_RightView;
	sf::View m_BGMainView;				// background for the preeceding views
	sf::View m_BGLeftView;				// background for the preeceding views
	sf::View m_BGRightView;				// background for the preeceding views
	sf::View m_HudView;
	sf::Sprite m_BackgroundSprite;
	sf::Texture m_BackgroundTexture;

	bool m_Playing = false;
	bool m_Character1 = true;
	bool m_SplitScreen = false;

	float m_TimeRemaining = 10.0f;
	sf::Time m_GameTimeTotal;

	bool m_NewLevelRequired = true;





};