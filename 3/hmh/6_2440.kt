package `3`.hmh

object Example3_6 {
	@JvmStatic
	fun main(args: Array<String>) {
		val number = readLine()?.toInt() ?: 0
		
		for (i in 0 until number) {
			var a = ""
			for (j in 0 until number - i) {
				a += "*"
			}
			println(a)
		}
	}
}