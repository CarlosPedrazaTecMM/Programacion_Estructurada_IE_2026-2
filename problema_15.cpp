#include <iostream>
using namespace std;

int main() {
    double fahrenheit, celsius;

    cout << "Ingresa la temperatura en Fahrenheit: ";
    cin >> fahrenheit;

    celsius = (fahrenheit - 32) * 5.0 / 9.0;

   cout << "Temperatura en Celsius: " << celsius << " grados Celsius" << endl;

    return 0;
}