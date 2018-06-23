var fs = require('fs')
var input = fs.readFileSync('/dev/stdin', 'utf8')

function toNum (data) {
	return +data
}

function over(n) {
	return function (average) {
		return average > n
	}
}

function add(a, b) {
	return a + b
}

input = input.split('\n')

for (var i = 1; i <= input[0]; i++) {
	var line = input[i].split(' ').slice(1).map(toNum)
	var avg = line.reduce(add, 0) / line.length
	var result = line.filter(over(avg)).length / line.length * 100
	console.log(result.toFixed(3) + '%')
}