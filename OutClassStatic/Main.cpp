#include <iostream>

//extern int s_Variable;   static kullanmad���nda hatadan kurtulmak i�in kullan�labilir. Compiler bu variable i�in ba�ka obj dosyalar�na bakar
int s_Variable = 10;

void Function()
{

}

int main()
{
	std::cout << s_Variable << std::endl;


}