#include <iostream>
# include <vector>
#include <iomanip>

using namespace std;

int main() {

	for (int i{ 1 }, j{ 5 }; i <= 5 && j <= 7; ++i, ++j)
		cout << i << " + " << j << " = " << (i + j) << endl;

	cout << "***************************" << endl;

	for (int i{ 1 }; i <= 100; i++)
		cout << i << ((i % 10 == 0) ? "\n" : " ");

	cout << "***************************" << endl;

	vector <int> nums{ 10,20,30,40,50 };

	for (unsigned int i{ 0 }; i < nums.size(); i++)
		cout << nums[i] << endl;

	cout << "********RANGE BASED FOR LOOPS********" << endl;

	int scores[]{ 100,87,90 };

	for (int score : scores)
		cout << score << endl;

	cout << "***********SAME THING****************" << endl;

	for (auto score : scores)
		cout << score << endl;

	cout << "***************************" << endl;

	double average_temp{};
	double running_sum{};
	int size{ 0 };

	for (auto temp : { 60.2, 80.1, 90.0, 78.2 }) {
		running_sum += temp;
		++size;
	}
	average_temp = running_sum / size;

	cout << fixed << setprecision(1);
	cout << average_temp << endl;


	cout << "***************************" << endl;

	double a{ 17.6586 };
	cout << a;

	cout << "***************************" << endl;

	for (auto c : "This is a test")
		if (c == ' ')
			cout << "\t";

		else
			cout << c;

	return 0;
}