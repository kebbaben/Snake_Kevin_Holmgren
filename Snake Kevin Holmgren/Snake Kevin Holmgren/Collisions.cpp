#include "Collisions.h"

Collisions::Collisions(Game* g_)
{
	g = g_;
	g->GetWindow();
}

Collisions::~Collisions()
{
}

void Collisions::WallCol(sf::Sprite spr) {
	sf::Vector2u s = g->GetWindow().getSize();
	if (spr.getPosition().x + spr.getLocalBounds().width - 1 > s.x || spr.getPosition().x + 1 < 0 || spr.getPosition().y + spr.getLocalBounds().height - 1 > s.y || spr.getPosition().y + 1 < 0)
	{		
		g->CloseWindow();
		std::cout << " u dingus ";
	}
}