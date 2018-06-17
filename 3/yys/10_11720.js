var fs = require('fs')
var input = fs.readFileSync('/dev/stdin').toString().split('\n')

var sum = input[1].split("").reduce(function(previousValue, currentValue){
  return parseInt(previousValue) + parseInt(currentValue)
})

console.log(sum)