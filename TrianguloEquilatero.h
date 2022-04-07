#pragma once
#include "Shape.h"
#include <iostream>

class TrianguloEquilatero : public Shape
{
public:

	void draw() {
		for (int i = 0;i < 7;i++) {
			for (int j = 0;j < 6 - i;j++) {
				std::cout << " ";
			}
			for (int j = 0;j < i * 2 + 1;j++) {
				std::cout << "*";
			}
			std::cout << " " << std::endl;
		}
	}
};

