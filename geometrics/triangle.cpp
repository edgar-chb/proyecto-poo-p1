#include "shape.cpp"
#include <iostream>
using namespace std;

class Triangle : Shape {

	private:

		int side;

		int height = 0;

	public:
		void draw();
		
		void setSide( int value );

		int getSide();
};

void Triangle::draw() {

	for (int i = 0; i < this->side; i++) {
		height++;

		for (int j = 0; j < height; j++) {

			cout << "*";
		}
		cout << endl;
	}

}

void Triangle::setSide( int value ) {

	this->side = value;

}
int Triangle::getSide() {

	return this->side;

}