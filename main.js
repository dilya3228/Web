/*for(i = 16; i >= 0 ; i--){
    if(i % 2 === 0){
        console.log(i);
    }
}

let i = 0;
while(i <= 10){
    if(i % 2 == 0){
        console.log(i);
    }
    i++;
}


function getSum(a, b){
    let result = a + b;
    return result;
}
//getSum(10, 15)

//console.log(getSum(10, 15))

function isOdd(number){
    return number % 2 === 0 ? 'четное' : 'нечетное'
    //let result = ''
    //if(number % 2 === 0){
    //    result = 'Четное'
    //}else{
    //    result = 'Нечетное'
    //}
    //return result
}
console.log(isOdd(15))
//console.log(isOdd(getSum(10, 15)))

//let someNumber = getSum(10, 15)

//let result = isOdd(someNumber)
//console.log(result)


let someArray = [1,3,2,7,2,9]
function getSum(array){
    let sum = 0;
    for(let i = 0; i < array.length; i++){
        sum += array[i]
    }
    return sum;
}
console.log(getSum(someArray))


let someArray = [1,3,2,7,2,9, -1000]
function sumOfPositive(array){
    let sum = 0;
    for(i = 0; i < array.length; i++){
        if(array[i] > 0){
            sum += array[i]
        }
    }
    return sum;
}
console.log(sumOfPositive(someArray))



function getShortest(arr){
    let shortesName = arr[0]
    for(let i = 0; i < arr.length; i++){
        if(shortesName.length > arr[i].length){
            shortesName = arr[i]
        }
    }
    return shortesName
}
console.log(getShortest(['biba', 'aergegr', 'wergr', 'weg', 'arehgeahrer']))




function reversedString(str){
    let newStr = ''
    for(let i = 0; i < str.length; i++){
        newStr = str[i] + newStr
    }
    return newStr
}
console.log(reversedString('grisha'))

function reversedString(stroka){
    // let novayaStroka = ''
    // for(let i = stroka.length - 1; i >= 0; i--){
    //     novayaStroka =novayaStroka + stroka[i]
    // }
    // return novayaStroka;


    let newArray = stroka.split('').reverse().join('')
    return newArray
}

//['hello', 'world', 'this', 'is', 'great']  =>  'hello world this is great'
function smash (words) {
  let newArray = words.join(' ')
   return newArray
};

Для ввода [1, 2, 3, 4, 5, 6, 7, 8, 9, 10, -11, -12, -13, -14, -15]вы должны вернуться[10, -65].
function countPositivesSumNegatives(input) {
    return input && input.length ? [input.filter(p => p > 0).length, input.filter(n => n < 0).reduce((a, b) => a + b, 0)] : [];
}*/

// function generateRange(min, max, step){
//     let arr = []
//     for(i = min; i <= max; i += step){
//         arr.push(i);
//     }
//     return arr;
// }


// function cycleHi(){
//     let arr = [];
//                 //*let str = '';
//     for(i = 20; i >= 0; i -=4){
//         arr.push(i);
//                 //*str += String(i);
//     }
//     let str = arr.join('') + "Привет!";
//     console.log(str);
//                 //*console.log(str + "Привет!");
//     return(str);
// }

// cycleHi();



// function trimSpaces(str){
//     let result = str.split(' ').join('');
//     console.log(result)
//     return (result);
// }
// trimSpaces("rthtru wrywery werw    e")



// function filterArray(arrStr, num){
//     for(let i = 0; i < arrStr.length; i++){
//         if(arrStr[i].length === num){
//             let arr = [];
//             arr.push(arrStr[i])
//             console.log(arr);
//             return (arr);
//         }
//     }
// }

// filterArray(["Олень", "Сосна", "Грибы", "Береза", "Медведь"], 6);



// function oppositeNumber(num){
//     let i = -1;
//     let result
//     if(num > 0){
//         result = num * i;
//     }else{
//         result = num * 1;
//     }
//     console.log(result);
//     return (result);
// }

// oppositeNumber(35);

// function checkForFactor (base, factor) {
//     if(base % factor === 0){
//       console.log(true);
//     }else{
//       console.log(false);
//     }
//   }
// function checkForFactor (base, factor) {
//     return base % factor === 0;
//   }

// checkForFactor (4, 2);



// "Dermatoglyphics" --> true
// "aba" --> false
// "moOse" --> false (ignore letter case)
// function isIsogram(str){
//     for(var i = 0; i <= str.length; i++) {
//         for(var j = i+1; j <= str.length; j++) {
//             if(str[j] == str[i]) {
//                 console.log(false);
//                 return false;
//             }
//             if(str[j] == str[i].toUpperCase()) {
//                 console.log(false);
//                 return false;
//             }
//         }
//     } 
//     console.log(true);
//     return true;
//   }
// *function isIsogram(str){
//   *  console.log(new Set(str.toUpperCase()).size == str.length);
// }
//    isIsogram("abqwe1dfgh");

// function solution(inputString) {
//     let reverse;
//     reverse = inputString.split('').reverse().join('');
//     if(reverse === inputString){
//         return(true)
//     }
//     return(false) 
// }
// solution('aba');
