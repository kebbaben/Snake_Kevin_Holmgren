#include "Body.h"



Body::Body()
{
	if (!bodyTex.loadFromFile("Sprites/body.png")) {}
	sprBody.setTexture(bodyTex);
}


Body::~Body()
{
}
