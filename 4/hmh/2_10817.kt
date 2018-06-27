fun main(args: Array<String>) {
	readLine()?.run {
		split(" ")
			.map { it.toInt() }
			.sorted()[1]
			.also { println(it) }
	}
}