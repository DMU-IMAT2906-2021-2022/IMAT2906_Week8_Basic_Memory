#include "Player.h"

Player::Player()
{
}

sf::Sprite Player::draw(std::string imageLoc) {
	if (!texture->loadFromFile(imageLoc))
	{
		std::cout << "Problem loading Player" << std::endl;
	}
	player.setTexture(*texture);
	player.setOrigin(sf::Vector2f(player.getGlobalBounds().width / 2, player.getGlobalBounds().width / 2));
	player.setScale(0.2f, 0.2f);

	return  player;
}

void Player::setHealth(float health) {
	f_Health = health;
}

float Player::getHealth() {
	return f_Health;
}

