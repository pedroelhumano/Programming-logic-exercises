// Solución basica con ciclo for

(() => {
  const limit: number = 10;
  let factorial:number = 1;
  
  for (let i = 1; i < limit; i++) {
    factorial = factorial + factorial * i;
  }
  
  console.log(`El factorial de ${limit} es: ${factorial}`);
})();
