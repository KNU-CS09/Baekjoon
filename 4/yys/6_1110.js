Number.prototype.pad = String.prototype.pad = function(size) {
	var s = String(this)
	while (s.length < (size || 2)) {s = "0" + s}
	return s
}

var fs = require('fs')
var input = fs.readFileSync('/dev/stdin').toString().pad()
input = parseInt(input)

var circle_count = 0
var circle_number = input

while(true){
	circle_number = func(circle_number.pad())
	circle_count++
	if(circle_number === input){
		break
	}
}

console.log(circle_count)

function func (num){
	var input = num.split('')
	var sum = parseInt(input[0]) + parseInt(input[1])
	var new_input = sum.pad().split('')

	return parseInt(num[1] + new_input[1])
}