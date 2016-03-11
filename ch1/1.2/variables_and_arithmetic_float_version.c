#include <stdio.h>

/* print Fahrenheit-Celsius table
  for fahr = 0, 20, ..., 300 */
main() {
  float fahr, celsius;
  float lower, upper, step;

  lower = 0.0; /* lower limit of temperature table */
  upper = 300.0; /* upper limit */
  step = 20.0; /* step size */

  char fahrenheit_heading[] = "Fahrenheit";
  char celsius_heading[] = "Celsius";
  printf("%s %s\n", fahrenheit_heading, celsius_heading);

  fahr = lower;
  while (fahr <= upper) {
    celsius = (5.0/9.0) * (fahr-32.0);
    printf("%3.0f \t%9.1f\n", fahr, celsius);
    fahr = fahr + step;
  };

  printf("\n------------------\n\n");
  printf("%s %s\n", celsius_heading, fahrenheit_heading);

  celsius = lower;
  while (celsius <= upper) {
    fahr = 9.0 * (celsius/5.0) + 32;
    printf("%3.0f \t%9.1f\n", celsius, fahr);
    celsius = celsius + step;
  }
}
