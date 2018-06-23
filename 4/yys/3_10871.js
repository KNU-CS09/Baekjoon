var fs = require('fs')
var input = fs.readFileSync('/dev/stdin').toString()

input = input.split('\n').map(function(data){
	return data.split(' ').map(function (data){
		return parseInt(data)
	})
})

var pivot = input[0][1]
var input_arr = input[1]
var result = ''

input_arr.forEach(function(data){
	if(data < pivot){
		result += data + ' '
	}
})

console.log(result.trim())