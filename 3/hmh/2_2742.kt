package `3`.hmh

object Example3_2 {
	@JvmStatic
	fun main(args: Array<String>) {
		val number = readLine()?.toInt() ?: 0
		
		for (i in number downTo 1) {
			println(i)
		}
	}
}