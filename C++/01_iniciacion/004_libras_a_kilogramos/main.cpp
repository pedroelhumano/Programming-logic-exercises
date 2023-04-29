#include <iostream>
using namespace std;

int main()
{

  float libras;
  float kilogramos;

  cout << "Escriba el peso en libras: " << flush;
  cin >> libras;

  kilogramos = libras * 0, 454;

  cout << "El peso en kilogramos es: " << kilogramos << endl;

  return 0;
}