var fs = require('fs')
var input = fs.readFileSync('/dev/stdin').toString()
input = parseInt(input)

var n5 = parseInt(input / 5)
var n3 = 0
var rest = input % 5

console.log(result())

function result () {
  while(n5 >= 0){
    if (rest < 0){
      return -1
    } else if( rest % 3 === 0) {
      n3 = (rest / 3)
      return n5 + n3
    } else {
      rest += 5
      n5--
    }
  }
  return -1
}