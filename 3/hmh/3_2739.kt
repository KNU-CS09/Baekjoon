package `3`.hmh

object Example3_3 {
	@JvmStatic
	fun main(args: Array<String>) {
		val number = readLine()?.toInt() ?: 0
		
		(1..9).forEach {
			println("$number * $it = ${number * it}")
		}
	}
}