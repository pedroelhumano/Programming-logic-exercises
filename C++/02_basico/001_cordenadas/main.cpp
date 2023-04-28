#include <iostream>
#include <string>
using namespace std;

int main()
{

  cout << "Pendiente de la linea (numero entero): " << flush;
  int m;
  cin >> m;

  cout << "Intercepción con el eje X (numero entero): " << flush;
  int b;
  cin >> b;

  cout << "Coordenada X del punto (numero entero): " << flush;
  int x;
  cin >> x;

  int y;
  y = m * x + b;

  cout << "y=" << y << endl;

  return 0;
}