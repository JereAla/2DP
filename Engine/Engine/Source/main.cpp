#include <SFML/Graphics.hpp>
#include <SFML/System.hpp>
#include <Windows.h>
#include <Cube.h>
#include <vector>
void Collision()
{

}
int main()
{
	std::vector<Cube*> Cubes;
	std::vector<Cube*>::iterator Itr_Cube = Cubes.begin();
	std::vector<Cube*>::iterator Itr_Cube2 = Cubes.begin();

	Cube test(sf::Vector2f(50, 25), sf::Vector2f(10, 10), sf::Color::Blue);
	Cubes.push_back(&test);
	Cube test2(sf::Vector2f(80, 50), sf::Vector2f(70, 70), sf::Color::Yellow);
	Cubes.push_back(&test2);
	Itr_Cube2 = Cubes.end();

	int InputSleep = 25;
	sf::RenderWindow window(sf::VideoMode(900, 600), "2DP");
	sf::RectangleShape shape(sf::Vector2f(50,25));
	shape.setFillColor(sf::Color::Green);
	sf::RectangleShape shape2(sf::Vector2f(80, 80));
	shape2.setFillColor(sf::Color::Blue);
	shape2.setPosition(sf::Vector2f(100, 90));

	float deltaTime = 0;
	sf::Clock Clock;
	Clock.restart();
	
	while (window.isOpen())
	{
		
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}
		deltaTime = Clock.restart().asSeconds();
		Itr_Cube = Cubes.begin();

		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
		{
			(*Itr_Cube)->setVelocity((*Itr_Cube)->getVelocity() + sf::Vector2f(-10.f, 0.f)*deltaTime);
			//shape.move(-1, 0);
			//Sleep(InputSleep);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
		{
			(*Itr_Cube)->setVelocity((*Itr_Cube)->getVelocity() + sf::Vector2f(10.f, 0.f)*deltaTime);
			//shape.move(1, 0);
			//Sleep(InputSleep);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
		{
			(*Itr_Cube)->setVelocity((*Itr_Cube)->getVelocity() + sf::Vector2f(0.f, -10.f)*deltaTime);
			//shape.move(0, -1);
			//Sleep(InputSleep);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
		{
			(*Itr_Cube)->setVelocity((*Itr_Cube)->getVelocity() + sf::Vector2f(0.f, 10.f)*deltaTime);
			//shape.move(0, 1);
			//Sleep(InputSleep);
		}
		if (sf::Keyboard::isKeyPressed(sf::Keyboard::R))
			shape.rotate(1);


		//Make thread for checking collision
		//TODO!
		if (test.shape.getGlobalBounds().intersects(test2.shape.getGlobalBounds()))
			printf("Collision\n");
		else
			printf("No Collision\n");

		window.clear();
		for (Itr_Cube = Cubes.begin(); Itr_Cube != Cubes.end(); Itr_Cube++)
		{
			(*Itr_Cube)->Update(deltaTime);

			(*Itr_Cube)->Draw(window);
		}
		//window.draw(shape);
		//window.draw(test.shape);
		//window.draw(shape2);
		window.display();
	}

	for (auto c : Cubes)
	{
		auto tmp = c;
		c = nullptr;
		delete tmp; //Error
	}
	return 0;
}