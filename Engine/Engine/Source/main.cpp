#include <SFML/Graphics.hpp>
#include <Windows.h>
#include <Cube.h>
int main()
{
	Cube test(sf::Vector2f(50, 25), sf::Vector2f(10, 10), sf::Color::Blue);
	int InputSleep = 25;
	sf::RenderWindow window(sf::VideoMode(900, 600), "2DP");
	sf::RectangleShape shape(sf::Vector2f(50,25));
	shape.setFillColor(sf::Color::Green);
	sf::RectangleShape shape2(sf::Vector2f(80, 80));
	shape2.setFillColor(sf::Color::Blue);
	shape2.setPosition(sf::Vector2f(100, 90));
	while (window.isOpen())
	{
		
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			shape.move(-1, 0);
			Sleep(InputSleep);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			shape.move(1, 0);
			Sleep(InputSleep);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			shape.move(0, -1);
			Sleep(InputSleep);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			shape.move(0, 1);
			Sleep(InputSleep);
		}
		window.clear();
		window.draw(shape);
		window.draw(test.shape);
		window.draw(shape2);
		window.display();
	}

	return 0;
}