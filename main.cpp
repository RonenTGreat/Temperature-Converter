#include <iostream>
/* A program that converts;
 1. Celsius to Kelvin
 2. Celsius to Fahrenheit
 3. Kelvin to Celsius
 4. Kelvin to Fahrenheit
 5. Fahrenheit to Celsius
 6. Fahrenheit to Kelvin

 */

using namespace std;

int main() {
    int choice;
    double temperature;

    cout << "Enter the conversion you want to perform." << endl;
    cout << "1.Celsius to Kelvin"<< endl;
    cout << "2.Celsius to Fahrenheit"<< endl;
    cout << "3.Kelvin to Celsius"<< endl;
    cout << "4.Kelvin to Fahrenheit"<< endl;
    cout << "5.Fahrenheit to Celsius"<< endl;
    cout << "6.Fahrenheit to Kelvin"<< endl;

    cout << ">> ";
    cin >> choice;

    if(choice == 1) {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        double celsiusToKelvin = temperature + 273.15;
        cout << temperature << "\370C in Kelvin is " << celsiusToKelvin << "K" << endl;
    }
    else if(choice == 2){
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        double celsiusToFahrenheit = (temperature * (9.0 / 5.0) + 32.0);
        cout << temperature << "\370C in Fahrenheit is " << celsiusToFahrenheit << "\370F" << endl;
    }

    else if(choice == 3){
        cout << "Enter temperature in Kelvin: ";
        cin >> temperature;
        double kelvinToCelsius = temperature - 273.15;
        cout << temperature << "K in Celsius is " << kelvinToCelsius << "\370C" << endl;

    }
    // Continue with 4.



    return 0;
}
