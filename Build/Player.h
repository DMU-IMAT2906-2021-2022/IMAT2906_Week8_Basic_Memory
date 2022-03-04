#pragma once
#include<iostream>
#include<string>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <SFML/Audio.hpp>

class Player {

private:
	sf::Texture* texture = new sf::Texture;
	float spriteWidth, spriteHeight = 0;
	sf::Vector2f position;
	sf::Sprite player;
	float f_Health;
public:
	Player();
	~Player() {
		delete texture;
	}
	/// <summary>
	/// Return the player sprite to the main game. Use the window height and width to scale the sprite.
	/// </summary>
	/// <param name="imageLoc"></param>
	/// <returns> SFML sprite</returns>
	sf::Sprite draw (std::string imageLoc) ;

	//Getters and setters.
	void setHealth(float health);
	float getHealth();

};

