#pragma once
#include "FrameWork/TileMap.h"
using namespace sf;

class Map : public TileMap
{
public:

    Map();
    Map(RenderWindow* window, int);
    ~Map();

};

