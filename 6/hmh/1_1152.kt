fun main(args: Array<String>) {
	readLine()
		?.trim()
		?.split(" ")
		?.count { it.isNotBlank() }
		?.also { println(it) }
}