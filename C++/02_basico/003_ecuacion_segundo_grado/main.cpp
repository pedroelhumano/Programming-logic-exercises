#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double a, b, c;

  cout << "Ingresa el valor de A:" << flush;
  cin >> a;
  cout << "Ingresa el valor de B: " << flush;
  cin >> b;
  cout << "Ingresa el valor de C: " << flush;
  cin >> c;

  if ((a != 0) && (b * b - 4 * a * c) > 0)
  {
    double radical = sqrt(b * b - 4 * a * c);
    double raiz1 = (-b + radical) / (2 * a);
    double raiz2 = (-b - radical) / (2 * a);

    cout << "El valor de la raiz1 es: " << raiz1 << flush;
    cout << "El valor de la raiz2 es: " << raiz2 << flush;
  }
  else
  {
    cout << "No tiene raices reales" << flush;
  }

  return 0;
}