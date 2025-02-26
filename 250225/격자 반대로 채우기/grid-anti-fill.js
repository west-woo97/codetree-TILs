const fs = require('fs')
let input = Number(fs
  .readFileSync("/dev/stdin")
  .toString()
  .trim())

let array = Array(input).fill(0).map(()=>Array(input).fill(0))
let cnt = 0;
let temp = 0;
  
for( let i = input-1; i >= 0; i--){
    temp++
    if (temp%2!==0){
        for ( let j = input; j > 0; j--){
            cnt++;
            array[j][i]+=cnt;
        }
    }
    else {
        for ( let j = 0; j < input; j++){
            cnt++;
            array[j][i]+=cnt;
        }
    }

}


let result = array.map(i=>i.join(' ')).join('\n')
// console.log(result)
console.log(array)
