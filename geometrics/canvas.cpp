#include"square.cpp"
#include"triangle.cpp"
#include"rectangle.cpp"
class Canvas {

	private:

		Square* square;

		Triangle* triangle;

		Rectangle* rectangle;
		

	public:

		void printSquare();

		void printEmptySquare();

		void printTriangle();

		void printRectangle();

};

void Canvas::printSquare() {

	square->draw();

}

void Canvas::printEmptySquare() {

	square->drawEmptySquare();

}

void Canvas::printTriangle() {

	triangle->draw();

}

void Canvas::printRectangle() {

	rectangle->draw();

}