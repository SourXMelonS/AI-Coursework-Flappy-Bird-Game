#include "Map.h"

Map::Map()
{
}

Map::Map(RenderWindow* window, int)
{
	
	loadTexture("gfx/PipeStyle1.png");

	GameObject tile;
	for (int i = 0; i < 10; i++)
	{
		tile.setSize(sf::Vector2f(64, 64));
		tile.setCollisionBox(0, 0, 64, 64);
		tile.setCollider(true);
		tileSet.push_back(tile);
	}

	tileSet[1].setTextureRect(sf::IntRect(0, 0, 40, 40));
	tileSet[2].setTextureRect(sf::IntRect(20, 0, 60, 40));
	tileSet[3].setTextureRect(sf::IntRect(34, 0, 74, 40));

}

Map::~Map()
{
}
