fun main(args: Array<String>) {
	readLine()?.toInt()?.let { maxSize ->
		readLine()
			?.split(" ")
			?.takeIf { it.size == maxSize }
			?.map { it.toFloat() }
			?.run {
				map { it * 100 / (max() ?: 1f) }
			}
			?.average()
			?.also { println(String.format("%.2f", it)) }
	}
}