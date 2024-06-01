#include <stdio.h>

int main(void) {
    float x = 2.0f;
    float a = x;

    for (size_t i = 0; i < 4; ++i) { // i controls num. of iterations
        a = a - (a*a - x) / (2 * a);
        printf("a = %f\n", a);
    }
    return 0;
}