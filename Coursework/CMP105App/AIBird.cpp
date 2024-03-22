#include "AIBird.h"

AIBird::AIBird()
{
}

AIBird::~AIBird()
{
}

void AIBird::init(Input* in, RenderWindow* win)
{
    window = win;
    setInput(in);
    setWindow(win);

    //Init the model
    setSize(Vector2f(32, 32));
    setPosition(Vector2f(100, 536));
    setVelocity(0, 0);
    collisionBox = FloatRect(0, 0, getSize().x, getSize().y);

    //Gravity stuff
    scale = 70.f;
    gravity = Vector2f(0, 9.8f);

}

void AIBird::handleInput(float dt)
{
}

void AIBird::update(float dt)
{
    sf::Vector2f pos = velocity * dt + 0.5f * gravity * dt * dt;
    velocity += gravity * dt * scale / 2.f;

    move(velocity * dt);
}

void AIBird::envCollResponce(GameObject* collider)
{
	if (Collision::TouchTopof(this, collider)) {
		velocity.y = 0;
		//Top of tile
		setPosition(Vector2f(getPosition().x, collider->getCollisionBox().top - collisionBox.height));
		
	}
	else if (Collision::TouchBottomof(this, collider)) {
		velocity.y = 0;
		//Bottom of tile
		setPosition(Vector2f(getPosition().x, collider->getCollisionBox().top + collider->getCollisionBox().height + collisionBox.height));
	}
	else if (Collision::TouchLeftof(this, collider)) {
		velocity.x = 0;
		//Left side of tile
		setPosition(collider->getCollisionBox().left - collisionBox.width, getPosition().y);
	}
	else if (Collision::TouchRightof(this, collider)) {
		velocity.x = 0;
		//Right side of tile
		setPosition(collider->getCollisionBox().left + collider->getCollisionBox().width, getPosition().y);
	}
}

FloatRect AIBird::getCollisionBox()
{
    return FloatRect();
}

void AIBird::render()
{
}
