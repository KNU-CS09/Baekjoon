fun main(args: Array<String>) {
	val result = BooleanArray(10000) { true }
	
	(1..10000)
		.asSequence()
		.forEach {
			var sum = it
			
			var start = it
			while (start > 0) {
				sum += start % 10
				start /= 10
			}
			if (sum <= 10000) result[sum] = false
		}
	
	result
		.forEachIndexed { index, b ->
			if (index > 0 && b) println("$index, $b")
		}
}