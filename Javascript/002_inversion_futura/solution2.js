// SOLUCIÓN #2
const acciones = [32, 35, 40, 21, 19, 27, 30];

const f = (acc) => {
  let MinValue = acc[0];
  let ventaFinal = 0;

  for (let day = 0; day < acc.length; day++) {

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
