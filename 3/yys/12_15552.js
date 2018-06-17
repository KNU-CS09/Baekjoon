var fs = require('fs')
var input = fs.readFileSync('/dev/stdin').toString().split('\n')

Array.prototype.sum = function(){
  return parseInt(this[0]) + parseInt(this[1])
}

var result = ""
for(var i = 1; i <= input[0]; i++){
  result += input[i].split(' ').sum() + '\n'
}

console.log(result)