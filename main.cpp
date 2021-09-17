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

    N: // After the calculation the program will jump to this part
    cout << "Enter the conversion you want to perform." << endl;
    cout << "1.Celsius to Kelvin" << endl;
    cout << "2.Celsius to Fahrenheit" << endl;
    cout << "3.Kelvin to Celsius" << endl;
    cout << "4.Kelvin to Fahrenheit" << endl;
    cout << "5.Fahrenheit to Celsius" << endl;
    cout << "6.Fahrenheit to Kelvin" << endl;
    cout << "7.Quit" << endl;

    cout << ">> ";
    cin >> choice;



    if (choice == 1) {
            cout << "Enter temperature in Celsius: ";
            cin >> temperature;
            double celsiusToKelvin = temperature + 273.15;
            cout << temperature << "\370C in Kelvin is " << celsiusToKelvin << "K \n" << endl;
            goto N; // Program will jump to the label N
        }
    else if (choice == 2) {
            cout << "Enter temperature in Celsius: ";
            cin >> temperature;
            double celsiusToFahrenheit = (temperature * (9.0 / 5.0) + 32.0);
            cout << temperature << "\370C in Fahrenheit is " << celsiusToFahrenheit << "\370F \n" << endl;
            goto N; // Program will jump to the label N
        }
    else if (choice == 3) {
            cout << "Enter temperature in Kelvin: ";
            cin >> temperature;
            double kelvinToCelsius = temperature - 273.15;
            cout << temperature << "K in Celsius is " << kelvinToCelsius << "\370C \n" << endl;
            goto N; // Program will jump to the label N

        }
    else if (choice == 4) {
            cout << "Enter temperature in Kelvin: ";
            cin >> temperature;
            double kelvinToFahrenheit = (temperature - 273.15) * (9.0 / 5.0) - 32;
            cout << temperature << "K in Fahrenheit is " << kelvinToFahrenheit << "\370F \n" << endl;
            goto N; // Program will jump to the label N
        }
    else if (choice == 5) {
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temperature;
            double fahrenheitToCelsius = (temperature - 32) * (5.0 / 9.0);
            cout << temperature << "\370F in Celsius " << fahrenheitToCelsius << "\370C \n" << endl;
            goto N; // Program will jump to the label N
        }

    else if (choice == 6) {
            cout << "Enter temperature in Fahrenheit: ";
            cin >> temperature;
            double fahrenheitToKelvin = (temperature - 32) * (5.0 / 9.0) + 273.15;
            cout << temperature << "\370F in Kelvin " << fahrenheitToKelvin << "K \n" << endl;
            goto N; // Program will jump to the label N
        }
    // Ends program
    else if(choice == 7){
            cout << "Program has ended!" << endl;
        }
    else{
            cout << "Enter a valid input please." << endl;
        }

    return 0;
}