#include <stdio.h>
#include <stdlib.h>

#include "fungsi.h"
#include "integrator.h"

int main(void) {
  // Inisialisasi variabel
  int nx = 100;
  double a = 0.0;
  double b = 1.0;
  double dx = (b - a) / (nx - 1);

  // Inisialisasi array
  double* x = malloc(nx * sizeof(int));
  double* y = malloc(nx * sizeof(int));
  for (int i = 0; i <= nx; i++) {
    x[i] = a + i * dx;
  }

  // Hitung integral
  double integral = integrator(f, a, b, nx, y);
  printf("Integral dari %.2f sampai %.2f adalah %.4f\n", a, b, integral);

  for (int i = 0; i <= nx; i++) {
    printf("%.6f %.6f\n", x[i], f[i])
  }

  return 0;
}