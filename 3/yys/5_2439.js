var fs = require('fs')
var input = fs.readFileSync('/dev/stdin').toString()
input = parseInt(input)

for(var i = 1; i <= input; i++){
  var temp = ""
  for(var j = i; j < input; j++){
    temp += " "
  }
  for(var j = input - i; j < input; j++){
    temp += "*"
  }
  console.log(temp)
}