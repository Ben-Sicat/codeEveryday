//part 2
function printAverage(x){
    var sum = 0;
    for(var i = 0; i < x.length; i++){
        sum += x[i];
    }
    return sum/x.length;
}
// y = printAverage([1,2,3]);
// console.log(y); // should log 2
  
// y = printAverage([2,5,8]);
// console.log(y); // should log 5

function returnOddArray(){
    //Create an array with all the odd integers between 1 and 255 (inclusive)
    var arr = [];
    for(var i = 1; i <= 255; i++){
        if(i % 2 != 0){
            arr.push(i);
        }
        
    }
    return arr
}


function squareValue(x){
    // Square each value in a given array, returning that same array with changed values.
    for(var i = 0; i < x.length; i++){
        x[i] = x[i] * x[i];
    }
    return x;
}

let y = squareValue([1,2,3]);
console.log(y);