#include <iostream>
using namespace std; 



    // funtion for celsius to kelvin 
      double CelsiustoKelvin(double Celsius) {
        return (Celsius + 273.15);
      }
    // function for celsius to farenheit
      double CelsiustoFarenheit(double Celsius) {
        return ((Celsius * 9 / 5) + 32);
      }
    // function for farenheit to kelvin
      double FareheittoKelvin(double Fahrenheit) {
        return ((Fahrenheit - 32) * 5 / 9 + 273.15);
      }
    // function for farenheit to celsius
    double FarenheittoCelsius(double Fahrenheit) {
      return ((Fahrenheit - 32) * 5 / 9); 
    }
    // function for kelvin to celsius
    double KelvintoCelsius(double Kelvin) {
      return (Kelvin - 273.15); 
    }
    // function for kelvin to Farenheit
    double KelvintoFarenheit(double Kelvin) {
      return ((Kelvin - 273.15) * 9 / 5 + 32);
    }

int main() {
double Temperature;
int choice; 
    // enter the temperature
    cout << "Temperature conversion program" <<endl;
    cout <<"enter your temperature"<<endl; 
    cin >> Temperature; 

    // enter the choice
    cout << "Choose the number you want to convert your temperature to (1-6)"<<endl; 
    cout << "1. Celsius to Kelvin" <<endl; 
    cout << "2. Celsius to Fahrenheit" <<endl; 
    cout << "3. Fahrenheit to Kelvin"<<endl; 
    cout << "4. Fahrenheit to Celsius"<<endl; 
    cout << "5. Kelvin to Celsius"<<endl; 
    cout << "6. Kelvin to Fahrenheit"<<endl;
    cin>> choice;

    switch (choice) {
  case 1:
    cout << "Celsius to Kelvin: " <<CelsiustoKelvin(Temperature) << "K" <<endl;
    break;
  case 2:
    cout << "Celsius to Fahrenheit: " <<CelsiustoFarenheit(Temperature) << "F" <<endl;
    break;
  case 3:
    cout << "Fahrenheit to Kelvin: " <<FareheittoKelvin(Temperature) << "K" <<endl;
    break;
  case 4:
    cout << "Fahrenheit to Celsius: " <<FarenheittoCelsius(Temperature) << "C" <<endl;
    break;
  case 5:
    cout << "Kelvin to Celsius: " <<KelvintoCelsius(Temperature) << "C" <<endl;
    break;
  case 6:
    cout << "Kelvin to Fahrenheit: " <<KelvintoFarenheit(Temperature) << "F" <<endl;
    break;
    default:
    cout << "Invalid choice!" << endl;
    }
    return 0;
}
