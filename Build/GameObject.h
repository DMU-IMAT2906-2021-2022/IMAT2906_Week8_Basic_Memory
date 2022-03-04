#pragma once
#include<SFML/System.hpp>
#include<SFML/Window.hpp>
#include<SFML/Graphics.hpp>

class GameObject {
private: 
	sf::Vector2f position;
public:
	/// <summary>
	/// Default constructor.
	/// </summary>
	GameObject();

	/// <summary>
	/// Function to set the GameObject position
	/// </summary>
	/// <param name="v2_position"></param>
	void setPosition(sf::Vector2f v2_position);

	/// <summary>
	/// Get the position.
	/// </summary>
	/// <returns>sf::vector2f</returns>
	sf::Vector2f getPosition();

	/// <summary>
	/// Pure virtual function for drawing.
	/// </summary>
	/// <param name="imageLoc"></param>
	/// <returns>SFML sprite</returns>
	virtual sf::Sprite draw(std::string imageLoc) = 0;
};
