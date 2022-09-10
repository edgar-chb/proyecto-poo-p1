#include "shape.cpp"
#include <iostream>
using namespace std;

class Square : Shape{

	private:

		int side;

		bool isEmpty = false;

	public:

		void draw();

		void drawEmptySquare();

		void setSide(int value);

		int getSide();

};

void Square::draw() {

	for (int i = 1; i <= this->side; i++) {
		for (int j = 1; j <= this->side; j++) {
			cout << "*";
		}
		cout << "" << endl;
	}

}

void Square::drawEmptySquare() {

	for (int i = 1; i <= this->side; i++) {
		for (int j = 1; j <= this->side; j++) {
			if ( ( i == 0 ) || ( j == 0 ) || ( i == side - 1 ) || ( j == side - 1 ) ) {

				cout << "*";

			}
			else {
				cout << " ";
			}
		}
		cout << "" << endl;
	}

}

void Square::setSide( int value ) {

	this->side = value;

}

int Square::getSide() {

	return this -> side;

}