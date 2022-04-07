#pragma once
#include <iostream>
#include "Triangle.h"
#include "Square.h"
#include "Rectangle.h"
#include "Canva.h"
#include "Shape.h"
#include "TrianguloEquilatero.h"
#include "Cubo_vacio.h"

class Menu : public Shape
{
public:

	void menu_flot() {
		Shape* s = nullptr;
		Canva c;

		int option = 0;

		std::cout << "Que quieres imprimir?" << std::endl;
		std::cout << "1° Cuadrado" << std::endl;
		std::cout << "2° Triangulo" << std::endl;
		std::cout << "3° Rectangulo" << std::endl;
		std::cout << "4° Triangulo Equilatero" << std::endl;
		std::cout << "5° Cubo vacio" << std::endl;
		std::cout << "--------------->";
		std::cin >> option;

		if (option == 1) {
			s = new Square();
		}
		else if (option == 2) {
			s = new Triangle();
		}
		else if (option == 3) {
			s = new Rectangle();
		}
		else if (option == 4) {
			s = new TrianguloEquilatero();
		}
		else if (option == 5) {
			s = new Cubo_vacio();
		}
		if (s != nullptr) {
			c.printShape(s);
			delete s;
		}

		std::cout << "------------------------------------------" << std::endl;
	}
};

