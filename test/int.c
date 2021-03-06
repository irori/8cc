// Copyright 2012 Rui Ueyama <rui314@gmail.com>
// This program is free software licensed under the MIT license.

#include "test.h"

void expects(short a, short b) {
    if (!(a == b)) {
        printf("Failed\n");
        printf("  %d expected, but got %d\n", a, b);
        exit(1);
    }
}

void testmain(void) {
    print("long");

    short a = 10;
    short int b = 15;
    expects(25, a + b);
    expects(20, a + 10);

    long x = 67;
    long int y = 69;
    expectl(67, x);
    expectl(136, x + y);
    expectl(10L, 10L);
    expectl(1152921504606846976, 1152921504606846976);
    expectl(1152921504606846977, 1152921504606846976 + 1);
}
