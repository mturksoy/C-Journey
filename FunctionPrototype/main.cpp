#include <iostream>

using namespace std;
//Function prototypes // its important for when you use a functin before you initalize exp: two function calling each other
void say_world();
void say_hello();
double volume_cylinder(double a);
void area_circle();

const double pi{ 3.14159 };


int main() {

	say_hello();
	cout << "Bye from the main" << endl;

	area_circle();
	return 0;
}

void say_world() {

	cout << "World" << endl;
	cout << "Bye from say_world" << endl;

}

void say_hello() {

	cout << "Hello" << endl;
	say_world();
	cout << "Bye from say_hello" << endl;

}

double volume_cylinder(double a) {

	double h{};

	cout << "What is your cylinder's height: ";
	cin >> h;

	return h * a * a * pi;
}

void area_circle() {

	double r{};

	cout << "What is your circle's R: ";
	cin >> r;

	double result = volume_cylinder(r);

	cout << "Your cylinder's volume is: " << result << " cm2" << endl;
}