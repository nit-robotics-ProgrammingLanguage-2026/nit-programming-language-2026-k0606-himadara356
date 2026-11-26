#include <stdio.h>

int main(void)
{
    float ylimit;
    double g = 3.71;
    double y = 0.0;
    double v = 0.0;
    double t;
    scanf("%g", &ylimit);
    if (ylimit <= 0)
    {
        printf("NG");
        return 0;
    }
    for (t = 0.0; y < ylimit; t += 0.1)
    {
        v = g * t;
        y = g * t * t / 2;
    }
    printf("%.3g", v);
    return 0;
}
