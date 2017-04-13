#pragma once
#include <vector>
#include <SFML/Graphics.hpp>
#include <cstdlib>
#include <time.h>
#include <iostream>
#include <sstream>
#include "Head.h"
#include "Collisions.h"
#include "Body.h"

class Game
{
public:
	void Start();
	void Update();
	const sf::RenderWindow& GetWindow();
	const sf::RenderWindow& CloseWindow();

private:
	sf::RenderWindow window;
};