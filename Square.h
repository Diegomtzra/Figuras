#pragma once
#include "Shape.h"
#include <iostream>

class Square : public Shape
{
public:

	Square() {
		std::cout << "Se crea cuadrado" << std::endl;
	}
	~Square() {
		std::cout << "Se destruye cuadrado" << std::endl;
	}

	void draw() {
		for (int i = 0;i < this->lado;i++) {
			for (int i = 0;i < this->lado;i++) {
				std::cout << " * ";
			}
			std::cout << "" << std::endl;
		}
	}
};

