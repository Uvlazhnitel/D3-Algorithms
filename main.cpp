#include "program.h"

int main() {
    // Create a Date object representing January 5, 2024
    Date today(2024, 1, 5);
    // Print today's date
    today.print();
    // Print the date of the next day
    today.tomorrow();

    // Change the date to December 31, 2023
    today.change(2023, 12, 31);
    // Print the date of the next day (new year)
    today.tomorrow();

    return 0;
}


