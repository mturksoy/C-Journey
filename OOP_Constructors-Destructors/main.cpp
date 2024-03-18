#include <iostream>
#include <string>

using namespace std;

class Player {
private:
	string name;
	int health;
	int xp;
public:
	void set_name(string n) { name = n; }

	//Overloaded Constructors
	Player() { // constructors are for initalize classes. We will learn in a some lesson 
		cout << "No args constructor called" << endl;
	}
	Player(string name_val) {
		name = name_val;
		health = 0;
		xp = 0;
		cout << "String arg contructor called" << endl;
	}
	Player(string name_val, int health_val, int xp_val) {
		name = name_val;
		health = health_val;
		xp = xp_val;
		cout << "Three arg constructor called" << endl;
	}
	//Destructor
	~Player() {  //~ symbol for destructor
		cout << "Destructor called for " << name << endl;
	}
};

int main() {

	{
		Player player;
		player.set_name("Kayra");
	}
	{
		Player disco;
		disco.set_name("disco");

		Player dragon("Dragon");
		dragon.set_name("Dragon");

		Player villain("Villain", 100, 12)
			;
		villain.set_name("Villain");
	}

	Player* enemy = new Player;
	enemy->set_name("Enemy");

	Player* boss = new Player("Boss", 250, 15);
	boss->set_name("Boss");

	delete enemy;
	delete boss;

	return 0;
}