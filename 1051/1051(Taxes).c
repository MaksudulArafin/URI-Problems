#include <stdio.h>
int main ()
{
  double r;
  scanf ("%lf", &r);
  if (r >= 0.00 && r <= 2000.00)
    printf ("Isento\n");
  else if (r >= 2001.00 && r <= 3000.00)
    {
      r = (r - 2000) * 8 / 100;
      printf ("R$ %.2lf\n", r);
    }
  else if (r >= 3001.00 && r <= 4500.00)
    {
      double y = 1000.00 * 8 / 100;
      double x = (r - 2000.00 - 1000.00) * 18 / 100;
      printf ("R$ %.2lf\n", x + y);
    }
  else if (r >= 4501.00)
    {
      double y = 1000.00 * 8 / 100;
      double x = 1500.00 * 18 / 100;
      double z = (r - 4500.00) * 28 / 100;
      printf ("R$ %.2lf\n", (x + z + y));
    }
  return 0;
}
