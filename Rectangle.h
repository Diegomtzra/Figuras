#pragma once
#include "Square.h"

class Rectangle : public Square
{
public:

	void draw() {
		for (int i = 0;i < this->lado;i++) {
			for (int i = 0;i < this->lado / 2;i++) {
				std::cout << " * ";
			}
			std::cout << "" << std::endl;
		}
	}
};

