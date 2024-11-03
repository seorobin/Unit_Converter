#include <iostream>
#include <iomanip>
using namespace std;

void convertLength();
void convertWeight();
void convertTemperature();
void convertArea();
void convertTime();
void convertMass();

int main() {
    int choice;

    do {
        cout << "Unit Converter Menu:"<<endl;
        cout << "1. Length\n";
        cout << "2. Weight\n";
        cout << "3. Temperature\n";
        cout << "4. Area\n";
        cout << "5. Time\n";
        cout << "6. Mass\n";
        cout << "7. Exit\n";
        cout << "Select a category to convert (1-7): ";
        cin >> choice;

        switch (choice) {
        case 1: convertLength(); break;
        case 2: convertWeight(); break;
        case 3: convertTemperature(); break;
        case 4: convertArea(); break;
        case 5: convertTime(); break;
        case 6: convertMass(); break;
        case 7: cout << "Exiting the converter." << endl; break;
        default: cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 7);

    return 0;
}

void convertLength() {
    double value;
    int choice;
    cout << "\nLength Conversion:\n";
    cout << "1. Meters to Feet\n";
    cout << "2. Feet to Meters\n";
    cout << "3. Kilometers to Miles\n";
    cout << "4. Miles to Kilometers\n";
    cout << "Select conversion type: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    switch (choice) {
    case 1: cout << value << " meters = " << value * 3.28084 << " feet" << endl; break;
    case 2: cout << value << " feet = " << value / 3.28084 << " meters" << endl; break;
    case 3: cout << value << " kilometers = " << value * 0.621371 << " miles" << endl; break;
    case 4: cout << value << " miles = " << value / 0.621371 << " kilometers" << endl; break;
    default: cout << "Invalid choice." << endl;
    }
}

void convertWeight() {
    double value;
    int choice;
    cout << "\nWeight Conversion:\n";
    cout << "1. Kilograms to Pounds\n";
    cout << "2. Pounds to Kilograms\n";
    cout << "Select conversion type: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    switch (choice) {
    case 1: cout << value << " kg = " << value * 2.20462 << " lbs" << endl; break;
    case 2: cout << value << " lbs = " << value / 2.20462 << " kg" << endl; break;
    default: cout << "Invalid choice." << endl;
    }
}

void convertTemperature() {
    double value;
    int choice;
    cout << "\nTemperature Conversion:\n";
    cout << "1. Celsius to Fahrenheit\n";
    cout << "2. Fahrenheit to Celsius\n";
    cout << "Select conversion type: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    switch (choice) {
    case 1: cout << value << " °C = " << (value * 9.0 / 5.0) + 32.0 << " °F" << endl; break;
    case 2: cout << value << " °F = " << (value - 32.0) * 5.0 / 9.0 << " °C" << endl; break;
    default: cout << "Invalid choice." << endl;
    }
}

void convertArea() {
    double value;
    int choice;
    cout << "\nArea Conversion:\n";
    cout << "1. Square Meters to Square Feet\n";
    cout << "2. Square Feet to Square Meters\n";
    cout << "Select conversion type: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    switch (choice) {
    case 1: cout << value << " m² = " << value * 10.7639 << " ft²" << endl; break;
    case 2: cout << value << " ft² = " << value / 10.7639 << " m²" << endl; break;
    default: cout << "Invalid choice." << endl;
    }
}

void convertTime() {
    double value;
    int choice;
    cout << "\nTime Conversion:\n";
    cout << "1. Hours to Minutes\n";
    cout << "2. Minutes to Hours\n";
    cout << "Select conversion type: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    switch (choice) {
    case 1: cout << value << " hours = " << value * 60 << " minutes" << endl; break;
    case 2: cout << value << " minutes = " << value / 60 << " hours" << endl; break;
    default: cout << "Invalid choice." << endl;
    }
}

void convertMass() {
    double value;
    int choice;
    cout << "\nMass Conversion:\n";
    cout << "1. Grams to Ounces\n";
    cout << "2. Ounces to Grams\n";
    cout << "Select conversion type: ";
    cin >> choice;

    cout << "Enter value: ";
    cin >> value;

    switch (choice) {
    case 1: cout << value << " grams = " << value * 0.035274 << " ounces" << endl; break;
    case 2: cout << value << " ounces = " << value / 0.035274 << " grams" << endl; break;
    default: cout << "Invalid choice." << endl;
    }
}
