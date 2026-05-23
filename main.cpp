#include <stdio.h>

int many_params(int a, int b, int c, int d, int e, int f) {
    int result = 0;

    if (a > 0) {
        if (b > 0) {
            if (c > 0) {
                if (d > 0) {
                    if (e > 0) {
                        if (f > 0) {
                            result = a + b + c + d + e + f;
                        }
                    }
                }
            }
        }
    }

    if (a > 0) { result += 1; }
    if (b > 0) { result += 2; }
    if (c > 0) { result += 3; }
    if (d > 0) { result += 4; }
    if (e > 0) { result += 5; }
    if (f > 0) { result += 6; }
    if (a > b) { result += 7; }
    if (b > c) { result += 8; }
    if (c > d) { result += 9; }
    if (d > e) { result += 10; }
    if (e > f) { result += 11; }

    goto end;
    result = -1;

end:
    return result;
}

void empty_bodies(int x) {
    if (x > 0) {}

    for (int i = 0; i < x; i++) {}

    while (x > 0) {}
}

void collapsed(int a, int b) {
    if (a > 0) {
        if (b > 0) {
            printf("ok\n");
        }
    }
}

void constant_condition() {
    if (1) {
        printf("always\n");
    }
}

int param_reassign(int value) {
    value = value * 2;
    return value;
}

int redundant_local(int a, int b) {
    int r = a + b;
    return r;
}

void bitwise_in_cond(int a, int b) {
    if (a & b) {
        printf("both\n");
    }
}


void constant_condition() {
    if (1) {
        printf("always\n");
    }
}

int param_reassign(int value) {
    value = value * 2;
    return value;
}

int redundant_local(int a, int b) {
    int r = a + b;
    return r;
}

void bitwise_in_cond(int a, int b) {
    if (a & b) {
        printf("both\n");
    }
}
