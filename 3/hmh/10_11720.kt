package `3`.hmh

object Example3_10 {
	@JvmStatic
	fun main(args: Array<String>) {
		val firstInput = readLine()
		val secondInput = readLine()
		
		var sum = 0
		secondInput?.takeIf { it.length == firstInput?.toInt() }?.forEach {
			sum += it.toString().toInt()
		}
		println(sum)
	}
}