#include <iostream>
#include <string>

using namespace std;

class Player {
private:
	string name;
	int health;
	int xp;
public:
	string get_name() { return name; }
	int get_health() { return health; }
	int get_xp() { return xp; }

	//Constructor
	Player(string name_val = "None", int health_val = 0, int xp_val = 0);
	//Copy Constructor
	Player(const Player& source);
	//Destructor
	~Player() { cout << "Destructor called for: " << name << endl; }
};

Player::Player(string name_val, int heatlh_value, int xp_value)
	: name{ name_val }, health{ heatlh_value }, xp{ xp_value } {
	cout << "Three arg-constructor called for: " << name << endl;
}

Player::Player(const Player& source)
//	: name{ source.name }, health{ source.health }, xp{ source.xp } {
	: Player(source.name, source.health, source.xp) {
	cout << "Copy constructor.. Copy made of: " << source.name << endl;
}

void display_player(Player p) {
	cout << "Name is: " << p.get_name() << endl;
	cout << "Health is: " << p.get_health() << endl;
	cout << "xp is: " << p.get_xp() << endl;
}


int main() {

	Player empty("Nononono", 150, 95);
	Player new_obj(empty);

	display_player(empty);

	return 0;
}