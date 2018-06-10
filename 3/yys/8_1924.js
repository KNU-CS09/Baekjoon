var fs = require('fs')
var input = fs.readFileSync('/dev/stdin').toString().split(' ')

input[0] = parseInt(input[0])
input[1] = parseInt(input[1])

// var month = [ 1,  2,  3,  4,  5,  6,  7,  8,  9, 10, 11, 12]
var days  = [31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31]

var addDay = 0

var result = ['SUN', 'MON', 'TUE', 'WED', 'THU', 'FRI', 'SAT']


for(var i = 0; i < input[0] - 1; i++){
  addDay += days[i]
}

addDay += input[1]

console.log(result[addDay % 7])