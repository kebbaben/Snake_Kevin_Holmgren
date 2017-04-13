#include "Game.h"

void Game::Start()
{
	window.create(sf::VideoMode(800, 600), "Snake");
	Update();
}

void Game::Update()
{
	sf::Clock clock; //startar klockan, MÅSTE ligga i Start och INTE i Update
	Head head;
	Collisions col(this);
	head.head.setPosition(100, 300);
	

	std::vector<Body*> body;
	body.push_back(new Body());
	
	body[0]->sprBody.setPosition(head.head.getPosition().x - head.head.getLocalBounds().width, head.head.getPosition().y);
	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{
			if (event.type == sf::Event::Closed)
				window.close();
		}

		body[0]->sprBody.setPosition(head.head.getPosition().x - head.head.getLocalBounds().width, head.head.getPosition().y);

		sf::Time time; //refererar till tid eg; sekunder millisekunder etc
		float dt = 0;

		time = clock.restart(); //bestämmer tiden


		head.Update(time);
		head.Draw(window);

		//col.Update();
		col.WallCol(head.head);
		//head.Coll(head);
		//std::cout << dt << std::endl;
		
		window.clear();
		window.draw(head.head);
		window.draw(body[0]->sprBody);
		window.display();
	}
}

const sf::RenderWindow & Game::GetWindow()
{
	return window;
}

const sf::RenderWindow & Game::CloseWindow()
{
	window.close();
	return window;
}

