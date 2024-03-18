#include <iostream>
#include <string>

using namespace std;

class Player {
private:
	string name{ "XXXXXX" };  //This is the order
	int health;
	int xp;
public:
	Player();
	Player(string name_val);
	Player(string name_val, int health_val, int xp_val);
};

Player::Player()
	: name{ "None" }, xp{ 0 }, health{ 0 } {  // Order doesnt matter. Initialize order is the name-health-xp order of the line 8-11
}

Player::Player(string name_val)
	: name{ name_val }, health{ 0 }, xp{ 0 } {

}

Player::Player(string name_val, int health_val, int xp_val)
	: name{ name_val }, health{ health_val }, xp{ xp_val } {

}


int main() {

	Player empty;
	Player kayra("Kayra");
	Player Slayer("Slayer", 100, 85);





	return 0;
}

