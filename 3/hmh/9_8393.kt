package `3`.hmh

object Example3_9 {
	@JvmStatic
	fun main(args: Array<String>) {
		val number = readLine()?.toInt() ?: 0
		
		println((1..number).sum())
	}
}