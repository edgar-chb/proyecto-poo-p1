#include <iostream>
#include "square.cpp"
#include"triangle.cpp"
#include "rectangle.cpp"
#include "canvas.cpp"
using namespace std;

class InputManager {

	private:
		int figureOption;

		int squareOptions;

		int side;

		int triangleSide;

		int rectangleSide;

		int rectangleHeight;

		int menuOptions = 1;

		Square square;

		Triangle triangle;

		Rectangle rectangle;

		Canvas canvas;

	public:
		
		void menu();

		void chooseFigure();

		void squareInputs();

		void triangleInputs();

		void rectangleInputs();

};

void InputManager::menu() {
	do {
		cout << " Seleccione una figura " << endl;
		cout << " 1-Cuadrado \n 2-Triangulo \n 3-Rectangulo " << endl;
		cin >> figureOption;
		chooseFigure();
	} while ( menuOptions =! 0 );

}

void InputManager::chooseFigure() {

		switch ( figureOption ) {

		case 1:	squareInputs();	break;

		case 2: triangleInputs(); break;

		case 3: rectangleInputs(); break;

		}
}

void InputManager::squareInputs() {

	cout << "Ingresa el tamaño del cuadrado (ej. 5)" << endl;
	cin >> side;
	square.setSide(side);
	cout << "¿El cuadrado será hueco?" << endl;
	cout << "1- Sí \n 2- No \n "  << endl;
	cin >> squareOptions;
	switch ( squareOptions ) {
	case 1: canvas.printEmptySquare();  break;
	case 2: canvas.printSquare(); break;
	}
	
	
}

void InputManager::triangleInputs() {

	cout << "Ingresa la base de tu triangulo (ej. 5)" << endl;
	cin >> triangleSide;
	triangle.setSide(triangleSide);
	canvas.printTriangle();


}

void InputManager::rectangleInputs() {

	cout << "Ingresa la base del rectangulo (ej. 5)" << endl;
	cin >> rectangleSide;
	rectangle.setSide(rectangleSide);
	cout << "Ingrese la altura del rectangulo (ej. 5)" << endl;
	cin >> rectangleHeight;
	rectangle.setHeight(rectangleHeight);

	canvas.printRectangle();
}
