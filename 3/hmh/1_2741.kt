package `3`.hmh

object Example3_1 {
	@JvmStatic
	fun main(args: Array<String>) {
		val number = readLine()?.toInt() ?: 0
		
		for (i in 1..number) {
			println(i)
		}
	}
}