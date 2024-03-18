#include <iostream>
#include <vector>

using namespace std;

int calculate_pairs(vector<int> vec) {

	int result{ 0 };

	for (auto val : vec) {
	
		for (int i{1}; i <= vec.size; i++) {
			result += vec.at(i) * val;
		}
		
	}
	
	return result;
}

int main()
{

	////	vector <char> vowels; empty
	////	vector <char> vowels(5); 5 initialized to zero
	//vector <char> vowels{ 'a','e','i','o','u' };

	//cout << vowels[0] << endl;
	//cout << vowels[4] << endl;

	////	vector <int> test_scores(3);
	////	vector <int> test_scores(3, 100); 3 elements all initialized to 100

	//vector <int> test_scores{100, 98, 90};

	//cout << "\nTest scores using array syntax: " << endl;
	//cout << test_scores[0] << endl;
	//cout << test_scores[1] << endl;
	//cout << test_scores[2] << endl;

	//cout << "\nTest scores using vector syntax:" << endl;

	//cout << test_scores.at(0) << endl;
	//cout << test_scores.at(1) << endl;
	//cout << test_scores.at(2) << endl;
	//cout << "\nThere are " << test_scores.size() << " scores in the vector" << endl;

	//cout << "\nEnter 3 test scores: ";
	//cin >> test_scores.at(0);
	//cin >> test_scores.at(1);
	//cin >> test_scores.at(2);

	//cout << "\nUpdated test scores: ";
	//cout << test_scores.at(0) << endl;
	//cout << test_scores.at(1) << endl;
	//cout << test_scores.at(2) << endl;

	//cout << "\nEnter a test score to add to vector: ";
	//int score_to_add{ 0 };
	//cin >> score_to_add;

	//test_scores.push_back(score_to_add);

	//cout << "\nEnter one more test score to add to vector: ";
	//cin >> score_to_add;

	//test_scores.push_back(score_to_add);

	//cout << "\nTest scores are now: ";

	//cout << test_scores.at(0) << endl;
	//cout << test_scores.at(1) << endl;
	//cout << test_scores.at(2) << endl;
	//cout << test_scores.at(3) << endl;
	//cout << test_scores.at(4) << endl;

	//cout << "\nThere are now " << test_scores.size() << " scores in the vector" << endl;

	////Example of a 2D vector
	//vector <vector <int>> movie_ratings
	//{
	//	{1,2,3,4},
	//	{5,6,7,8},
	//	{9,5,6,7}
	//};

	//cout << movie_ratings[0][0] << endl;

	//cout << movie_ratings.at(0).at(0);
	




	return 0;
}