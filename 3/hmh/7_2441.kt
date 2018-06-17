package `3`.hmh

object Example3_7 {
	@JvmStatic
	fun main(args: Array<String>) {
		val number = readLine()?.toInt() ?: 0
		
		for (i in 0..number) {
			var a = ""
			for (j in 0 until i) {
				a += " "
			}
			for (j in 0 until number - i) {
				a += "*"
			}
			println(a)
		}
	}
}