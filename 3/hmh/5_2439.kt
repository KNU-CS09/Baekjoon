package `3`.hmh

object Example3_5 {
	@JvmStatic
	fun main(args: Array<String>) {
		val number = readLine()?.toInt() ?: 0
		
		for (i in 1..number) {
			var a = ""
			for (j in 1..number - i) {
				a += " "
			}
			for (j in 1..i) {
				a += "*"
			}
			println(a)
		}
	}
}