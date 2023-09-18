#include "integrator.h"

double integrator(double (*f)(double), double a, double b, int n, double* y) {
  double dx = (b - a) / n;
  double sum = f(a) + f(b);
  for (int i = 0; i < n; i++) {
    y[i] = f(a + i * dx);
    sum += y[i] * (i % 2 == 0 ? 2 : 4);
  }
  return sum * dx / 3;
}