var fs = require('fs')
var input = fs.readFileSync('/dev/stdin').toString().split('\n')

for(var i in input){
  console.log(input[i])
}