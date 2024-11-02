#ifndef PROGRAM_H
#define PROGRAM_H

// The Date class definition
class Date {
private:
    int year;   // Private field for year
    int month;  // Private field for month
    int day;    // Private field for day

public:
    Date(int y, int m, int d); // Constructor to initialize the date
    ~Date(); // Destructor to clean up when a Date object is destroyed

    void change(int y, int m, int d); // Method to change the date
    void tomorrow(); // Method to calculate and print the next day
    void print() const; // Method to print the date
};

#endif
