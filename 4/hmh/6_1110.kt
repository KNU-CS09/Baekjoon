fun main(args: Array<String>) {
	readLine()
		?.toInt()
		?.takeIf { it in 0..99 }
		?.run {
			val origin = this
			var count = 0
			
			var start = this
			var temp = -1
			while (origin != temp) {
				val first = start / 10
				val second = start % 10
				val sumSecond = (first + second) % 10
				start = second * 10 + sumSecond
				temp = start
				count++
			}
			println(count)
		}
}