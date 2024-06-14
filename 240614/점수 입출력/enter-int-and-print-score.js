// 변수 선언, 입력
const fs = require("fs");
let input = Number(fs.readFileSync(0).toString());

// 출력
console.log(`Your score is ${input} point.`);