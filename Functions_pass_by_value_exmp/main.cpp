#include <iostream>
#include <cmath>
using namespace std;


double fahrenheit_to_kelvin(double a);
double fahrenheit_to_celsius(double a);


void temperature_conversion(double fahrenheit_temperature) {

    
    double kelvin_temperature = fahrenheit_to_kelvin(fahrenheit_temperature);
    double celsius_temperature = fahrenheit_to_celsius(fahrenheit_temperature);
    

    cout << "The fahrenheit temperature " << fahrenheit_temperature << " degrees is equivalent to " << celsius_temperature << " degrees celsius and " << kelvin_temperature << " degrees kelvin.";
}


double fahrenheit_to_celsius(double a) {
    a = round(5.0 / 9.0 * (a - 32));
    return a;
}

double fahrenheit_to_kelvin(double a) {
    a = round(5.0 / 9.0 * (a - 32) + 273);
    return a;
}

int main() {

    double fahrenheit_temperature{};

    cout << "Enter your fahrenheit_temperature: ";
    cin >> fahrenheit_temperature;

    temperature_conversion(fahrenheit_temperature);





    return 0;
}