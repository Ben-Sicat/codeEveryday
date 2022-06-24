// Given an array and a value Y, count and print the number of array values greater than Y.
// For example, if array is [3, 6, 7, 8, 2] and Y is 5, the output should be 2.
function countGreaterThan(arr, y) {
    var count = 0;
    for (var i = 0; i < arr.length; i++) {
        if (arr[i] > y) {
            count++;
        }
    }
    return count;
}

//Given an array, print the max, min and average values for that array.
//For example, if the array is [2, 10, 3], the output should be 10, 2 and 5.

function printMaxMinAvg(arr) {
    var max = arr[0];
    var min = arr[0];
    var sum = 0;
    for (var i = 0; i < arr.length; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
        sum += arr[i];
    }
    var avg = sum / arr.length;
    console.log(max + " " + min + " " + avg);
}
//Given an array of numbers, create a function that returns a new array where negative values were replaced with the string ‘Dojo’.
//For example, if array is [-1,-3,2], return the modified array [‘Dojo’,’Dojo’,2].

function replaceNegatives(arr) {
    for (var i = 0; i < arr.length; i++) {
        if (arr[i] < 0) {
            arr[i] = "Dojo";
        }
    }
    return arr;
}

//Given array, and indices start and end, remove values in that index range, working in-place (hence shortening the array).
//For example, removeVals([20,30,40,50,60,70],2,4) should return [20,30,70]. Without using built-in array methods.

function removeVals(arr, start, end) {
    arr.splice(start, end-1);
    return arr;
}