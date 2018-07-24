fun main(args: Array<String>) {
	var count = 0
	var multiple = 1
	while (count < 3) {
		multiple *= readLine()?.toInt() ?: 1
		count++
	}
	val map = hashMapOf<Char, Int>().apply {
		(1..9).map { it.toChar() }
			.forEach { put(it, 0) }
	}
	multiple.toString()
		.forEach { key ->
			map[key] = map[key]?.inc() ?: 1
		}
	
	map.forEach { t, u -> println(u) }
}