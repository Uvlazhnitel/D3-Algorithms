#include "program.h"

int main() {
    Date today(2024, 1, 5);
    today.print();
    today.tomorrow(); // Print the next day

    today.change(2023, 12, 31);
    today.tomorrow(); // Test year change

    return 0;
}
