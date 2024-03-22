#pragma once
#include "Framework\GameObject.h"
#include "Framework/Input.h"
#include "Framework/Collision.h"

using namespace sf;

class AIBird : public GameObject
{
public:
	AIBird();
	~AIBird();
	void init(Input*, RenderWindow*);
	void handleInput(float dt) override;
	void update(float dt) override;
	void envCollResponce(GameObject* collider);

	FloatRect getCollisionBox();
	void render();

private:
	RenderWindow* window;
	Texture txtr;
	Vector2f gravity;
	float scale;
	bool flap;
};

