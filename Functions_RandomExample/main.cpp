#include <iostream>
#include <cstdlib>  //requires for rand()
#include <ctime> // requires for time()

using namespace std;

int main() {

	int random_number{};
	size_t count{ 10 };
	int max{ 6 };
	int min{ 1 };	// example of a dice 1-6

	//seed random number generator if you dont you will get same random sunmber every time -- srand
	cout << "RAND_MAX on my system is: " << RAND_MAX << endl;
	srand(time(nullptr));

	for (size_t i = 0; i < count; i++)
	{
		random_number = rand() % (max - min + 1) + min;
		cout << random_number << endl;

	}












	return 0;
}
