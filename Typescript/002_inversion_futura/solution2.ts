// SOLUCIÓN #2

type inversionesT = number[]

const acciones: inversionesT = [32, 35, 40, 21, 19, 27, 30];

const f = (acc: inversionesT) => {
  let MinValue: number = acc[0];
  let ventaFinal: number = 0;

  for (let day: number = 0; day < acc.length; day++) {

    if (MinValue > acc[day]) {
      MinValue = acc[day];
    }

    if (MinValue < acc[day]) {
      ventaFinal = acc[day] - MinValue;
    }
  }

  return (ventaFinal);
}
console.log(f(acciones)); //EXPECTED => 11
