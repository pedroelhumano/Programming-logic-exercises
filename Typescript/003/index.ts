const f = (A: number[], K: number): boolean => {
  for (let i: number = 0; i < A.length; i++) {
    for (let j: number = i; j < A.length; j++) {
      if (i !== j) { // 1
        if (A[i] + A[j] === K) {
          return true;
        }
      }
    }
  }
  return false;
}

const A: number[] = [4, 5, 8, 7, 4, 2];
const K: number = 8;

console.log(f(A, K));