#include "program.h"
#include <iostream>

using namespace std;

// Constructor of the Date class: Initializes a Date object with year, month, and day.
Date::Date(int y, int m, int d): year(y), month(m), day(d) {}

// Destructor of the Date class: Called when a Date object is destroyed.
Date::~Date() {
    cout << "Date object destroyed\n"; // Prints a message indicating the object's destruction.
}

// Change method: Updates the date to the provided year, month, and day.
void Date::change(int y, int m, int d) {
    year = y; // Set the year to the provided value.
    month = m; // Set the month to the provided value.
    day = d;   // Set the day to the provided value.
}

// Tomorrow method: Calculates and prints the date of the next day.
void Date::tomorrow() {
    day++; // Increment the day.

    // Check if the incremented day exceeds 30 (simplified logic).
    if (day > 30) {
        day = 1; // Reset the day to 1.
        month++; // Increment the month.

        // Check if the incremented month exceeds 12.
        if (month > 12) {
            month = 1; // Reset the month to January.
            year++;    // Increment the year.
        }
    }

    print(); // Call the print method to display the updated date.
}

// Print method: Outputs the current date in YYYY-MM-DD format.
void Date::print() const {
    cout << year << "-" << month << "-" << day << endl; // Format and print the date.
}
