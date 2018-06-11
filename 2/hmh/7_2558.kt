package `2`.hmh

object Example2_7 {
	@JvmStatic
	fun main(args: Array<String>) {
		val a = readLine()?.toInt()
		val b = readLine()?.toInt()
		if (a != null && a in 1 until 10 && b != null && b in 1 until 10) {
			println(a + b)
		}
	}
}