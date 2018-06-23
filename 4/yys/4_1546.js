var fs = require('fs')
var input = fs.readFileSync('/dev/stdin').toString()

input = input.split('\n').map(function(data){
	return data.split(' ').map(function (data){
		return parseFloat(data)
	})
})[1].sort(function (a, b) {
	return a - b
})

var MAX_VALUE = input[input.length - 1]
var new_total = 0

input.forEach(function (data) {
	new_total += (data / MAX_VALUE) * 100
})

console.log((new_total / input.length).toFixed(2))