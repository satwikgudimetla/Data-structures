#include <stdio.h>
struct complex {
    float real;
    float imag;
};
int main() {
    struct complex c1, c2, sum, product;
    printf("Enter real and imaginary part of first complex number:\n");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter real and imaginary part of second complex number:\n");
    scanf("%f %f", &c2.real, &c2.imag);

    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;

    product.real = (c1.real * c2.real) - (c1.imag * c2.imag);
    product.imag = (c1.real * c2.imag) + (c1.imag * c2.real);

    printf("\nSum = %.2f + %.2fi", sum.real, sum.imag);
    printf("\nProduct = %.2f + %.2fi\n", product.real, product.imag);

    return 0;
}