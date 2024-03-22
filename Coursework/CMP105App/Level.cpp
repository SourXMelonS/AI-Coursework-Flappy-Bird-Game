#include "Level.h"

Level::Level(sf::RenderWindow* hwnd, Input* in, GameState* gs, AudioManager* aud)
{
	window = hwnd;
	input = in;
	gameState = gs;
	audio = aud;

	// initialise game objects
	playerChar.init(input, window);

	pipeTexture->loadFromFile("gfx/PipeStyle1.png");
	//Pipe->setTexture(pipeTexture);

	//font
	font.loadFromFile("font/arial");
	if (!font.loadFromFile("font/arial"))
		std::cout << "Error loading Font\n";

	//textures
	backgroundTexture.loadFromFile("gfx/");
	levelBackground.setSize(Vector2f(window->getSize().x, window->getSize().y));
	levelBackground.setTexture(&backgroundTexture);

	//text
	scoreText.setFont(font);
	scoreText.setCharacterSize(30);
	scoreText.setFillColor(Color::Black);

	pipeParts->push_back(IntRect());

	Pipes.
	gameView = window->getView();
	gameView.setSize(Vector2f(gameView.getSize().x, gameView.getSize().y));

}

Level::~Level()
{
	
}

// handle user input
void Level::handleInput(float dt)
{
	playerChar.handleInput(dt);

	if(input->isKeyDown(sf::Keyboard::Escape))
	{ }

}

// Update game objects
void Level::update(float dt)
{
	playerChar.update(dt);
	levelBackground.setPosition(Vector2f(playerChar.getPosition()));
	gameView.setCenter(Vector2f(playerChar.getPosition().x + 10, playerChar.getPosition().y));

	std::vector<GameObject>* world = map.getLevel();

	for (int i = score - 1; i < score + 1; i++)
	{
		if(*world)[i].isCollider())
	}


}

// Render level
void Level::render()
{
	beginDraw();

	endDraw();
}

