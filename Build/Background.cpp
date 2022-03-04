#include "Background.h"

sf::Sprite Background::draw(std::string imageLoc) {
	///Lets get the NPC.
	sf::Sprite Background;
	if (!texture->loadFromFile(imageLoc))
	{
		std::cout << "Problem loading background" << std::endl;
	}
	Background.setTexture(*texture);
	return Background;
}