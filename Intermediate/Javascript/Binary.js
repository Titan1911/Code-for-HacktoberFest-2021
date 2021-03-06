let recursiveFunction = function (arr, x, start, end) {
  if (start > end) return false;

  let mid = Math.floor((start + end) / 2);

  if (arr[mid] === x) return true;

  if (arr[mid] > x) return recursiveFunction(arr, x, start, mid - 1);
  else return recursiveFunction(arr, x, mid + 1, end);
};

let arr = [2, 4, 8, 9, 1, 3, 6];
let x = 3;

if (recursiveFunction(arr, x, 0, arr.length - 1))
  document.write("Element found!<br>");
else document.write("Element not found!<br>");
