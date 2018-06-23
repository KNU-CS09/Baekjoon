var fs = require('fs')
var input = fs.readFileSync('/dev/stdin').toString()
input = parseInt(input)

var result

if (90 <= input && input <= 100) {
	result = 'A'
} else if (80 <= input && input <= 89) {
	result = 'B'
} else if (70 <= input && input <= 79) {
	result = 'C'
} else if (60 <= input && input <= 69) {
	result = 'D'
} else {
	result = 'F'
}

console.log(result)