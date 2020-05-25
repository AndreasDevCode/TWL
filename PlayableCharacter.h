#pragma once

#include <SFML/Graphics.hpp>

class PlayableCharacter
{
public:
	void spawn(sf::Vector2f startPosition, float gravity);
	bool virtual handleInput() = 0;
	sf::FloatRect getPosition();
	sf::FloatRect getFeet();
	sf::FloatRect getHead();
	sf::FloatRect getLeft();
	sf::FloatRect getRight();

	sf::Vector2f getCenter();
	sf::Sprite getSprite();

	void stopFalling(float position);
	void stopRight(float position);
	void stopLeft(float position);
	void stopJump();
	void update(float elapsedTime);

	//*************************
	//**  MEMBER VARIABLES   **
	//*************************
protected:
	sf::Sprite m_Sprite;
	float m_JumpDuration;
	bool m_IsJumping;
	bool m_IsFalling;
	bool m_LeftPressed;
	bool m_RightPressed;
	float m_TimeThisJump;
	bool m_JustJumped = false;

private:
	float m_Gravity;
	float m_Speed = 400;
	sf::Vector2f m_Position;
	sf::FloatRect m_Feet;
	sf::FloatRect m_Head;
	sf::FloatRect m_Right;
	sf::FloatRect m_Left;
	sf::Texture m_Texture;
};
