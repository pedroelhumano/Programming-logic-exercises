// SOLUCIÓN #1
const acciones = [32, 35, 40, 21, 19, 27, 30];

const f = (acc) => {
  let ventaActual = 0;
  let ventaFinal = 0;

  for (let day = 0; day < acc.length; day++) {

    for (let future = day; future < acc.length; future++) {
      ventaActual = acc[future] - acc[day]

      if (ventaFinal < ventaActual) {
        ventaFinal = acc[future] - acc[day]
      }
    }
  }
  return (ventaFinal);
}
console.log(f(acciones)); //EXPECTED => 11
