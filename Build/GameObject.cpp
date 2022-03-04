#include"GameObject.h"

void GameObject::setPosition(sf::Vector2f v2_position) {
	position = v2_position;
}

sf::Vector2f GameObject::getPosition() {
	return position;
}

