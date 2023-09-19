#include "integrator.h"

double integrator(double (*f)(double), double a, double b, int n, double* y) {
  double dx = (b - a) / (n - 1);
  double sum = f(a) + f(b);

  y[0] = f(a);
  y[n - 1] = f(b);

  for (int i = 1; i < n - 1; i++) {
    y[i] = f(a + i * dx);
    sum += y[i] * (i % 2 == 0 ? 2 : 4);
  }
  return sum * dx / 3;
}