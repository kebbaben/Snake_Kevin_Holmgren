#pragma once
#include "Collisions.h"

class Head
{
public:
	Head();
	~Head();

	float hSpeed = 0;
	float vSpeed = 0;

	sf::Sprite head;
	sf::Texture headTex;

	void Update(sf::Time dt);
	void Draw(sf::RenderWindow& win);
//	void Coll(Collisions& col);
};
