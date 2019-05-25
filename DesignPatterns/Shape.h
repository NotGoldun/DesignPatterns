#ifndef SHAPE_H
#define SHAPE_H
#include <iostream>

class Shape
{
public:
	static Shape* createShape(std::string type);
	virtual void update() = 0;
	Shape();
	~Shape();
};

#endif SHAPE_H //  !SHAPE_H

