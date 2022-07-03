// SOLUCIÓN #1

type inversioneT = number[]

const acciones1: inversioneT = [32, 35, 40, 21, 19, 27, 30];

const f1 = (acc: inversioneT) => {
  let ventaActual: number = 0;
  let ventaFinal: number = 0;

  for (let day: number = 0; day < acc.length; day++) {

    for (let future: number = day; future < acc.length; future++) {
      ventaActual = acc[future] - acc[day]

      if (ventaFinal < ventaActual) {
        ventaFinal = acc[future] - acc[day]
      }
    }
  }
  return (ventaFinal);
}
console.log(f1(acciones1)); //EXPECTED => 11