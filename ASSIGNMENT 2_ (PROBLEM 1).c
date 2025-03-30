#include <stdio.h>
#include <math.h>

#define PI 3.1416

int main() {
    double lambda, theta, d;
    int m;

    printf("Enter wavelength (in nm): ");
    scanf("%lf", &lambda);


    if (lambda < 380 || lambda > 750) {
        printf("Out of the range. Please enter a valid number.\n");
        return 0;
    }

    printf("Enter angle theta (in degrees): ");
    scanf("%lf", &theta);
    printf("Enter slit separation (in micrometers): ");
    scanf("%lf", &d);
    double theta_rad = theta * (PI / 180.0);

    d = d * 1000;

    m = (int)(d * sin(theta_rad) / lambda);

    if (m > 0)
        printf("%d-th order maxima\n", m);
    else
        printf("No maxima found.\n");

    return 0;
}
