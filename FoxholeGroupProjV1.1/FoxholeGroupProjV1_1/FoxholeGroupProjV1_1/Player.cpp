#include "Player.h"

Player::Player()
	: GameObject("Player", glm::vec3(5.0f, 1.0f, 1.0f), glm::vec3(1.0f, 1.0f, 1.0f), NULL, NULL)
{
	r = 0.0f;
}
