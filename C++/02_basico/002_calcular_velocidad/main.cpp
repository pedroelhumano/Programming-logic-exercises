#include <iostream>
using namespace std;

int main()
{

  int pInicial, pFinal, horas, minutos, segundos, distancia;

  float velocidad, tiempoTranscurrido;

  cout << "Ingresa el punto inicial de partida en metros " << flush;
  cin >> pInicial;

  cout << "Ingresa el punto final del recorrido en metros " << flush;
  cin >> pFinal;

  distancia = pFinal - pInicial;

  cout << "Ingresa la cantidad de horas que tardo el recorrido " << flush;
  cin >> horas;

  cout << "Ingresa la cantidad de minutos que tardo el recorrido " << flush;
  cin >> minutos;

  cout << "Ingresa la cantidad de segundos que tardo el recorrido " << flush;
  cin >> segundos;

  tiempoTranscurrido = horas + (minutos / 60) + (segundos / 3600);
  velocidad = distancia / tiempoTranscurrido;

  cout << "La velocidad del vehiculo es de: " << velocidad << " metros por hora" << flush;

  return 0;
}