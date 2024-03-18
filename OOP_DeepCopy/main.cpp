#include <iostream>

using namespace std;

class Deep {
private:
	int* data;
public:
	void set_data(int d) { *data = d; }
	int get_data() { return *data; }

	Deep(int d);
	Deep(const Deep& source);
	~Deep();
};

Deep::Deep(int d) {
	data = new int;
	*data = d;
}

Deep::Deep(const Deep& source)
	:Deep(*source.data) {  // it can be like that
	// data = new int;  // it can be like that
	//* data = *source.data;
	cout << "Copy constructor" << endl;
//	cout << source.data << endl;  // source.data is the location
}

Deep::~Deep() {
	delete data;
	cout << "Deconstuctor" << endl;
}

void display_deep(Deep source) {
	cout << source.get_data() << endl;
}

int main() {

	Deep obj1(150);
	display_deep(obj1);

	Deep obj2(obj1);
	obj2.set_data(1785);

	

	return 0;
}