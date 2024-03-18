#include <iostream>

//extern int s_Variable;   static kullanmadýðýnda hatadan kurtulmak için kullanýlabilir. Compiler bu variable için baþka obj dosyalarýna bakar
int s_Variable = 10;

void Function()
{

}

int main()
{
	std::cout << s_Variable << std::endl;


}