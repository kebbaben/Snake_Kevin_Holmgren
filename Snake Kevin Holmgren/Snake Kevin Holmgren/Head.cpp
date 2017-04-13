#include "Head.h"



Head::Head()
{
	if (!headTex.loadFromFile("Sprites/head.png")) {}
	head.setTexture(headTex);
}

Head::~Head()
{
}

void Head::Update(sf::Time deltaTime)
{
	float dt = deltaTime.asSeconds(); //gör att allt som refererar till dt blir frame-lockat eg max 60fps etc
	//Collisions col;

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left)) {
		hSpeed = -150;
		vSpeed = 0;
		head.move(hSpeed * dt, vSpeed * dt);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right)) {
		hSpeed = 150;
		vSpeed = 0;
		head.move(hSpeed * dt, vSpeed * dt);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up)) {
		hSpeed = 0;
		vSpeed = -150;
		head.move(hSpeed * dt, vSpeed * dt);
	}
	else if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down)) {
		hSpeed = 0;
		vSpeed = 150;
		head.move(hSpeed * dt, vSpeed * dt);
	}
	else {
		head.move(hSpeed * dt, vSpeed * dt);
	}

}

void Head::Draw(sf::RenderWindow& win) {
	win.draw(head);
}

/*void Head::Coll(Collisions& col) {
	col.WallCol(head);
}*/