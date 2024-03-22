#pragma once

#include <SFML/Graphics.hpp>
#include "Framework/BaseLevel.h"
#include "Framework/Input.h"
#include "Framework/AudioManager.h"
#include "Framework/GameState.h"
#include "Framework/Collision.h"
#include "AIBird.h"

#include <string>
#include <iostream>
using namespace sf;

class Level : BaseLevel{
public:
	Level(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud);
	~Level();

	void handleInput(float dt) override;
	void update(float dt) override; 
	void render() override;

private:
	// Default functions for rendering to the screen.
	int score = 0;
	GameObject levelBackground;
	std::vector<GameObject>* Pipes;

	Texture backgroundTexture;
	Texture* pipeTexture;
	Text scoreText;
	AIBird playerChar;
	Font font;
	View gameView;
	std::vector<IntRect>* pipeParts;

	// Default variables for level class.
	
};