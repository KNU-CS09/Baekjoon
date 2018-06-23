var fs = require('fs')
var input = fs.readFileSync('/dev/stdin').toString()

input = input.split(' ').map(function (data) {
	return parseInt(data)
}).sort(function (a, b){
	return a - b
})

console.log(input[1])