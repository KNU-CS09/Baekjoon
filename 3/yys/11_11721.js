var fs = require('fs')
var input = fs.readFileSync('/dev/stdin').toString()

var result = ""
for(var i = 0; i < input.length; i++){
  result += input[i]

  if(i !== 0 && (i + 1) % 10 === 0){
    result += '\n'
  }
}

console.log(result)
