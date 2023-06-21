#include <stdio.h>

int main(void)
{
    int x, y, z;

    for (x = 1; x <= 4; x++) {
        for (y = 0; y <= 2; y++) {
            for (z = 4; z <= 6; z++) {
                printf("%d×%d + %d^2 = %d\n", x, y, z, x * y + z * z);
            }
        }
    }

    return 0;
}
