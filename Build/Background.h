#pragma once
#include"GameObject.h"
#include <iostream>
class Background {

private:
	sf::Texture* texture = new sf::Texture;
	float spriteWidth, spriteHeight;
public:
	~Background() {
		delete texture;
	}

	/// <summary>
	/// Return the NPC sprite to the main game. Use the window height and width to scale the sprite.
	/// </summary>
	/// <param name="imageLoc"></param>
	/// <returns> SFML sprite</returns>
	sf::Sprite draw(std::string imageLoc);
};
