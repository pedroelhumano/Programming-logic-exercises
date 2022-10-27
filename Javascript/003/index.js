const f = (A, K) => {
  for (let i = 0; i < A.length; i++) {
    for (let j = i; j < A.length; j++) {
      if (i !== j) { // 1
        if (A[i] + A[j] === K) {
          return true;
        }
      }
    }
  }
  return false;
}

const A = [4, 5, 8, 7, 4, 2];
const K = 8;

console.log(f(A, K));