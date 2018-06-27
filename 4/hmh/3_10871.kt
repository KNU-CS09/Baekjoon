fun main(args: Array<String>) {
	readLine()?.run {
		val splitString = split(" ")
		val number = splitString[0].toInt()
		val limit = splitString[1].toInt()
		
		readLine()?.run {
			split(" ")
				.takeIf { it.size == number }
				?.map { it.toInt() }
				?.filter { it < limit }
				?.forEach { println(it) }
		}
	}
}