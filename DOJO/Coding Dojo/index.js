

// // var msg = 'codingdojo';

// // for(var x = -2; x < msg.length -2 ; x+=2){
// //     if(msg.length == 5){
// //         for(var i = 3; i < 7;i++){
// //             console.log(i);
// //         }
// //     }
// //     else{
// //         for(var i = msg.length; i > (msg.length -2); i -=3){
// //             console.log(i);
// //         }
// //     }
// // }

// // var msg = 'hello';

// // for(var x = 20; x > msg.length +5; x-=1){
// //     console.log(x)
// // }

// // function sum_odd(){
// //     var sum = 0;
// //      for(let i = 2; i <= 318; i++){
// //          if((i%2) != 0){
// //              sum +=i
// //              console.log(i);
// //          }
// //      }
     
// //     return sum; 
// //  }
 
// //  sum_odd();

// function largestValue(){
// 	var array = [13, 15, -18, 29, 3, -4, -9, -10, 3, -7];
// 	var largest = array[0];
	
// 	for(let i = 0; i < array.length;i++){
// 	    if(array[i] >= largest){
// 	        largest = array[i];
// 	    }
// 	}
//     return largest;
// }

// console.log(largestValue())

// // for (let x = 1; x < 9; x+=3){
// //     console.log(x)
// // }

// // for(var x = 4; x < 9; x+=3)
// // {
// //     console.log(x)
// // }

// // var msg = 'codingdojo';
// // for(var x = 3; x < msg.length+3; x+=3){
// //     console.log(x)
// // }


// // 
// // var msg = 'hello!';
// // for(var x = 20; x > msg.length + 5; x-=3)
// // {
// //     console.log(x)
// // }
// // var msg = 'codingdojo';
// // for(var x = 1; x < msg.length - 3 ; x+=1)
// // {

// //     if(msg.length == 6){
// //         for(var i  = 3; i < 9;i++)
// //         {
// //             console.log(i);
// //         }
// //     }
// //     else{
// //         for(var i = msg.length; i > (msg.length - 2); i-=1)
// //         {
// //             console.log(i)
// //         }
// //     }
// // }

// // function sum_even(){
// //     var sum = 0;
// //     for(let i = 6; i <= 297 ; i++){
// //         if((i%2) == 0){
// //             sum+=i;
            
// //         }
// //     }
// //     return sum; 
// //  }
// //  console.log(sum_even())


// // function sumOfArray(){
// // 	var array = [9, 3, -3, -9, 11, -6, 5, 10, -9, 1];
// // 	var sum = 0;
// // 	for( let i = 0; i < array.length;i++){
// // 	    sum += array[i]
// // 	}
// // 	return sum; 
// // }
// // console.log(sumOfArray())

// separator = 1
// if digitNum >= 0:
//     for i in range(digitNum):
//         separator = separator*10
//     remainder = num % separator
//     num = (num - remainder) /separator
    
//     num = num %10
//     return int(num) 
// else:
//     separator = 1
//     for i in range (0, digitNum, -1):
//         separator = separator*10
//     num = num * separator
//     num = num  - num % 1
//     num = num %10
    
//     return int(num)