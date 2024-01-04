#include <stdio.h>

// Function to integrate
double f(double x) {
    // Define your function here
    return 1.0 / (1.0 + x * x);
}

// Trapezoidal rule implementation
double trapezoidalRule(double a, double b, int n) {
    double h = (b - a) / n; // Width of each subinterval
    double sum = f(a) + f(b); // Initial and final points

    // Summing up the function values within the intervals
    for (int i = 1; i < n; i++) {
         x1 = a + i * h;
        sum += 2 * f(x1);
    }

    // Multiplying by the width of the intervals and dividing by 2
    double result = (h / 2) * sum;

    return result;
}

int main() {
    // Define the interval [a, b] and the number of subintervals (n)
    double a, b;
    int n;

    // Input Lower limit(a) and upper limit(b)
    printf("Enter lower limit (a): ");
    scanf("%lf", &a);
    printf("Enter upper limit (b): ");
    scanf("%lf", &b);

    // Input Number of intervals (n)
    printf("Enter number of intervals (n): ");
    scanf("%d", &n);

    // Calculate the result using the trapezoidal rule
    double result = trapezoidalRule(a, b, n);

    // Output the result
    printf("Result: %lf\n", result);

    return 0;
}

