#pragma once
#include "Game.h"

class Game;
class Collisions
{
public:
	Collisions(Game* g);
	~Collisions();

	void WallCol(sf::Sprite spr);

private:
	Game* g;

};

