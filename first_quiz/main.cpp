#include <iostream>
#include "io.h"

int main() {
    int o{5};
    int z{5};
    int y{0};

    y = readNumber(o) + readNumber(z);

    writeAnswer(y);

    return 0;
}