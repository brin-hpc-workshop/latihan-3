#include "integrator.h"

double trapesoidal(double (*f)(double), double a, double b, int n, double* y) {
  double dx = (b - a) / n;
  double sum = 0.5 * (f(a) + f(b));
  for (int i = 0; i < n; i++) {
    y[i] = f(a + i * dx);
    sum += y[i];
  }
  return sum * dx;
}