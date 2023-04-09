// NOTE: If the union of both arrays is odd, then the median would be the
// element in the middle of the array. If it is even, then the median would be
// defined as the average of the two elements in the middle of the array.

// CHANGE Arrs

const arr1 = [5, 4, 3, 2, 1];
// const arr2 = [10, 9, 8, 7, 6];
const arr3 = [11, 10, 9, 8, 7, 6];

const arrayCombination = arr1.concat(arr3).sort((a, b) => a - b);

// arr odd
if (arrayCombination.length % 2 !== 0) {
  console.log('Mediana: ',
    arrayCombination[(arrayCombination.length - 1) / 2])

}
// arr even
else {
  console.log('Mediana: ', (
    arrayCombination[(arrayCombination.length - 2) / 2] +
    arrayCombination[((arrayCombination.length - 2) / 2) + 1]) /
    2)
}