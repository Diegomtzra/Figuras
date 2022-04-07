#pragma once
#include "Square.h"

class Cubo_vacio : public Square
{
public:

	void draw() {
		for (int i = 0;i < this->lado;i++) {
			for (int j = 0;j < this->lado;j++) {
				if ((i == 0) || (j == 0) || (i == this->lado - 1)||(j == this->lado - 1)) {
					std::cout << " * ";
				}
				else {
					std::cout << "   ";
				}
			}
			std::cout << std::endl;
		}
	}
};

