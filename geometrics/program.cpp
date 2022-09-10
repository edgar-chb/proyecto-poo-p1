#include <iostream>
#include "input.cpp"
using namespace std;


class Program {

	InputManager input;

	public:
		void run();

};

void Program::run() {

	input.menu();

}