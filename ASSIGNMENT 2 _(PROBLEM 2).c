#include <stdio.h>
#include <math.h>

#define M_PI 3.1416

int main() {
    double theta = 45.0;
    double theta_rad = theta * (M_PI / 180.0);
    double ratio = 1 / sin(theta_rad);

    printf("The ratio of slit width to wavelength: %.3f\n", ratio);

    return 0;
}
