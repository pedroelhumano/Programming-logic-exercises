const arregloInicial = [2, 4, 5, 6, 8, 10, 19, 17, 50, 51, 100, 179, 501];

const arregloOrdenado = [...arregloInicial].sort((a, b) => a - b);

const desordenarArreglo = (arr) => [...arr].sort(() => Math.random() - 0.5);

const arregloDesordenado = desordenarArreglo(arregloOrdenado);
const numeroAleatorio = Math.floor(Math.random() * arregloInicial.length);

// console.log("arregloInicial.length", arregloInicial.length);

// Respuestas
console.log("ArregloInicial: ", arregloInicial.join(","));
console.log("ArregloOrdenado: ", arregloOrdenado.join(","));
console.log("ArregloDesordenado: ", arregloDesordenado.join(","));
console.log("Indice aleatorio: ", numeroAleatorio);
console.log("Valor en el arreglo: ", arregloDesordenado[numeroAleatorio]);
