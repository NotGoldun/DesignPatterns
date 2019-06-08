#ifndef GAMEOBJECT_H
#define GAMEOBJECT_H
#include <iostream>
#include <vector>
#include "Observer.h"

class GameObject
{
public:
	static GameObject* createShape(std::string type);
	virtual void update() = 0;
	virtual void attach(Observer* observer) = 0;

	GameObject();
	~GameObject();

protected:
	int state;
	std::vector<Observer*> observers;
};

#endif SHAPE_H //  !GAMEOBJECT_H

