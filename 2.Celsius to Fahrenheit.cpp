#include <iostream>
using namespace std;

int celsiusToFahrenheit(int Celsius){
    double Fahrenheit = (Celsius * 9/5) + 32;
    return Fahrenheit;
    
}


int main () {
    int inputNumber;
    cout << "Enter Temperature In °C";
    cin >> inputNumber;
    int result = celsiusToFahrenheit(inputNumber);
    cout << result << "°F";
    
    return 0;
}
