#include<iostream>
#include<string>
#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include "Build/Background.h"
#include "Build/Player.h"

int main(){
	float f_width = 1000.f;
	float f_height = 720.f;
	sf::RenderWindow window(sf::VideoMode(f_width, f_height, 32), "Basic Memory Management "); //Draw an SFML window.

	/// Get a background and a player sprite.
	Background background;
	sf::Sprite bg = background.draw("Assets/Background.png");
	bg.scale(sf::Vector2f(2.f, 2.f)); //Scale the background so it fits.

	//Get a player sprite.
	Player player;
	sf::Sprite play = player.draw("Assets/Mario.png");
	play.setPosition(sf::Vector2f(f_width / 2, f_height - 145.f));//Use a magic number to position player. 

	const float f_FPS = 60.0f; //The desired FPS. (The number of updates each second).
	bool b_redraw = true;      //Do I redraw everything on the screen?

	window.setFramerateLimit(f_FPS);
	sf::Clock clock;


	while (window.isOpen())
	{
		//Wait until 1/60th of a second has passed, then update everything.
		if (clock.getElapsedTime().asSeconds() >= 1.0f / f_FPS)
		{
			b_redraw = true; //We're ready to redraw everything

			///Move the player
			if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::D)) {
				play.move(1.f, 0.f);
			}
			else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Key::A)) {
				play.move(-1.f, 0.f);
			}

			clock.restart();
		}
		//Check if the window is open or closed.
		sf::Event event;

		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		//Draw stuff if ready
		if (b_redraw)
		{
			b_redraw = false;
			window.clear();
			// Using a for loop with index

			//for (std::size_t i = 0; i < mapItems.size(); ++i) {
			//	window.draw(mapItems[i]);
			//	//std::cout << "Drawing" << mapItems[i].getPosition().x << " " << mapItems[i].getPosition().y << std::endl;
			//}
			//
			window.draw(bg);
			window.draw(play);
			window.display();
		}
	}
	return 0;
};