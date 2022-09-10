#include "shape.cpp"
#include <iostream>
using namespace std;

class Rectangle : Shape {

	private:

		int side;

		int height;

	public:
		void draw();

		void setSide( int value );

		void setHeight( int value );

};

void Rectangle::draw() {
	for ( int i = 1; i <= this->height; i++ ) {
		for ( int j = 1; j <= this->side; j++ ) {
			cout << "*";
		}
		cout << "" << endl;
	}
}

void Rectangle::setSide( int value ) {

	this->side = value;

}

void Rectangle::setHeight( int value ) {

	this->height = value;

}