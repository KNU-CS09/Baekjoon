fun main(args: Array<String>) {
	val lineMax = readLine()?.toInt() ?: 0
	
	var lineCount = 0
	while (lineCount < lineMax) {
		readLine()?.run {
			val splitLine = split(" ")
			val numberCount = splitLine[0].toInt()
			val average = splitLine
				.filterIndexed { index, _ -> index > 0 }
				.sumBy { it.toInt() } / numberCount
			(splitLine
				.filterIndexed { index, value -> index > 0 && value.toInt() > average }.size / numberCount.toFloat())
				.also { println(String.format("%.3f", (it * 100)).plus("%")) }
		}
		lineCount++
	}
}