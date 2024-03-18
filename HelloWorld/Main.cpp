// variables de�i�kenler ve c++ a giri�

#include <iostream>

int Multiply(int a, int b);

void Log(const char* message);

void LogMultiply(int a) {
	std::cout << a << std::endl;
}

void MultiplyAndLog(int a, int b) {

	int result = a * b;
	
	std::cout << result << std::endl;
}

int main()
{
	// char,short,int,long,long long,long int
	//  1  ,   2 ,  4,  4,   8      ,    8 byte

	//float, double, long double
	//  4  ,   8   ,    16     byte

	// bool   1 or anything/0   true or false   1 bit ------- 8 bit 1 byte eder 

	//size of fonksiyonu bize de�i�kenlerin boyutunu g�sterir kullan�m� ise ��yledir;  

	//std::cout << sizeof(double) << std::endl;  // parantezler olsa da olur olmasa da olur.


	//float decimalNumber = 5.5f;
	//double decimalNumberA = 5.2;

	//bool variable = true;

	//unsigned int numberA = 25; // 32 bitten ilki olan say�ya i�aret katan bit i pozitif ayarlar ve kapasiteyi 4 milyara de�i�tirir yani 0 **** 4b
	//int number = 8;  // -2b **** +2b  2 �zeri 31den 2 milyara kadar say�lar� kapsar

	//std::cout << variable << std::endl;

	int result = Multiply(7, 8);

	LogMultiply(result);

	MultiplyAndLog(90, 3);

	std::cout << "Hello World" << std::endl;
	std::cin.get();
}