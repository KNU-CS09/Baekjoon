var fs = require('fs')
var input = fs.readFileSync('/dev/stdin').toString()
input = parseInt(input)

for(var i = input; i > 0; i--){
  var temp = ""
  for(var j = 1; j <= i; j++){
    temp += "*"
  }
  console.log(temp)
}