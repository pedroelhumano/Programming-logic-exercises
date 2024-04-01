// Solución basica con ciclo for

const limit = 10;
let factorial = 1;

for (let i = 1; i < limit; i++) {
  factorial = factorial + factorial * i;
}

console.log(`El factorial de ${limit} es: ${factorial}`);
