#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Player {  //The name must begin with a uppercase letter  (its preference among the developers.)
private:
	//attributes
	string name{ "Player" };  //You can initialize these variables in here
public:
	int health{ 100 };
	int xp{3};

	//methods
	void talk(string text) { cout << name << " says " << text << endl; }
	bool is_dead();

};

int main() {

	Player Kayra;
	Player Jax;

	//Kayra.name = "Kayra";  //in here we are accesing to class variable. // this variable private you cannot access
	Kayra.health = { 89 };
	Kayra.xp = { 0 };

	Kayra.talk("hi");

	Player players[]{ Kayra,Jax };

	vector <Player> player_vec{ Kayra };
	player_vec.push_back(Jax);

	Player* enemy{ nullptr };
	enemy = new Player;

	//(*enemy).name = "Enemy"; same you cannot access private variable
	enemy->health = { 19 };
	enemy->xp = { 15 };

	enemy->talk("Fireeee");

	delete enemy;

	return 0;
}