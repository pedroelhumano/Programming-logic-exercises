Dada una lista de numeros enteros A con n elementos, [a1, a2, ..., an] y un valor entero K
escribir una funcion f(A, K) que retorne true si existe al menos un par ai, aj en A, con i != j
tales que ai + aj = K y false en cualquier otro caso.

Ejemplos:
```js
A = [1, 4, 7, 3]
K = 8
f(A, K) -> true
A = [1, 4, 7, 3]
K = 5
f(A, K) -> true
A = [1, 4, 7, 3]
K = 6
f(A, K) -> false
A = [1, 4, 7, 3]
K = 4
f(A, K) -> true
```