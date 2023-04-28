#include <iostream>
#include <string>
using namespace std;

int main()
{
  // leer el precio
  cout << "Indique precio de la compra: " << flush;
  float precio;
  cin >> precio;

  // calcula he imprime el impuesto
  cout << "El impuesto de: " << precio << " es $" << precio * 0.04 << endl;
  return 0;
}