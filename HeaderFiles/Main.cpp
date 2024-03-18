#include < iostream>
#include "Log.h"



int main() {

	int a = 5;
	

	if (a == 6) {

		Log("Hello World");
		return 0;

	}
	else if (a == 5){
		std::cout << "Zaaaaaaa" << std::endl;
	}

	else
	{
		std::cout << "Damlam Seni Cok seviyorummmmmm" << std::endl;
	} 

	for (int i = 0; i < 5; i++) {
		if (i == 3) {
			continue;
		}
		Log("Hello World");
		std::cout << i << std::endl;
	}

	std::cout << "--------------------------" << std::endl;

	int i = 0;
	
	while (i<10)
	{
		if (i == 8)
			break;
		Log("Hello World");
		std::cout << i << std::endl;
		i++;
	}

	//for (;;) {	
		//std::cout << "Damlam Seni Cok seviyorummmmmm" << std::endl;
		//std::cout << "Askimmmmmmmm" << std::endl;
	//}


}