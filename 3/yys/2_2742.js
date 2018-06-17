var fs = require('fs')
var input = fs.readFileSync('/dev/stdin').toString()
input = parseInt(input)

for(; input > 0; input--){
  console.log(input)
}