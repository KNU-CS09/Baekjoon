var fs = require('fs')
var input = fs.readFileSync('/dev/stdin').toString()
input = parseInt(input)

for(var i = 1; i <= input; i++){
  console.log(i)
}