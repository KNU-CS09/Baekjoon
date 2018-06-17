package `3`.hmh

object Example3_4 {
	@JvmStatic
	fun main(args: Array<String>) {
		val number = readLine()?.toInt() ?: 0
		
		var a = ""
		(1..number).forEach {
			a += "*"
			println(a)
		}
	}
}