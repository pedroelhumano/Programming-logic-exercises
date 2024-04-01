(() => {
  const arregloInicial:number[] = [2, 4, 5, 6, 8, 10, 19, 17, 50, 51, 100, 179, 501];

  const arregloOrdenado:number[] = [...arregloInicial].sort((a, b) => a - b);
  
  const desordenarArreglo = (arr:number[]):number[] => [...arr].sort(() => Math.random() - 0.5);
  
  const arregloDesordenado:number[] = desordenarArreglo(arregloOrdenado);
  const numeroAleatorio:number = Math.floor(Math.random() * arregloInicial.length);
  
  // console.log("arregloInicial.length", arregloInicial.length);
  
  // Respuestas
  console.log("ArregloInicial: ", arregloInicial.join(","));
  console.log("ArregloOrdenado: ", arregloOrdenado.join(","));
  console.log("ArregloDesordenado: ", arregloDesordenado.join(","));
  console.log("Indice aleatorio: ", numeroAleatorio);
  console.log("Valor en el arreglo: ", arregloDesordenado[numeroAleatorio]);
})();
