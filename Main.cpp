#include <SFML/Graphics.hpp>

int main()
{
	// Initialising game objects

	sf::RenderWindow window(sf::VideoMode(640, 480), "Snake");
	sf::RectangleShape shape(sf::Vector2f(25.f, 25.f));
	shape.setFillColor(sf::Color::Green);

	// Game loop

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			switch (event.type)
			{
			case sf::Event::Closed:
				window.close();
				break;
			}
		}

		// Keyboard bindings

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) shape.move(1.f, 0.f);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) shape.move(-1.f, 0.f);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) shape.move(0.f, -1.f);
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) shape.move(0.f, 1.f);

		window.clear(sf::Color::Black);
		window.draw(shape);
		window.display();
	}
	return 0;
}