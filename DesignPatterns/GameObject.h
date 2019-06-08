#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <iostream>

class GameObject
{
public:
	static GameObject* createShape(std::string type);
	virtual void update() = 0;

	GameObject();
	~GameObject();
};

#endif SHAPE_H //  !GAMEOBJECT_H

