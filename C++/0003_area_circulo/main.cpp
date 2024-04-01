#include <iostream>
using namespace std;

int main()
{

  int radio;
  float area;

  cout << "Ingresa el radio: " << flush;
  cin >> radio;

  area = 3.1415 * radio * radio;

  cout << "El area es: " << area << endl;

  return 0;
}