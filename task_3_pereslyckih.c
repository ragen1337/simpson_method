#include <stdio.h>

double integral(double x);
double simpson_func(double num, double a, double b);

int main (void)
{
    double num = 1000.0;
    double a = 3.0;
    double b = 0.0;
    
    double integral = simpson_func(num,b,a);
    printf(" \nIntegral by Simpson method: %f" , integral);
    printf("\n\n");
}

double integral(double x)
{
    return x*x*x; 
}

double simpson_func(double num, double a, double b)
{
    double sum = 0;
    double h = (b - a) / num;
    double x0 = a;
    double x1 = a + h;
    
    for (int i = 0; i < num; i++)
    {
        sum += integral(x0) + 4 * integral(x0+h/2) + integral(x1);
        x0+=h;
        x1+=h;
    }

    return (h / 6) * sum;
}

// integral x^3
// if you want you can use your function