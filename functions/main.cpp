#include <iostream>
#include "add.h"

void doPrint(){
    std::cout << "In doPrint()" << std::endl;
}

int main() {
    //std::cout << "Starting main()" << std::endl;
    //doPrint(); // Interrupts main() to execute doPrint();
    //std::cout << "Ending main()" << std::endl;

    std::cout << "The sum of 3 and 4 is " << add(4,3) << std::endl;
}

