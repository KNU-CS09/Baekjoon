package `1`

object Example1_7 {
	@JvmStatic
	fun main(args: Array<String>) {
		var count = 0
		while (count < 100) {
			val str = readLine()
			if (str.isNullOrBlank()) return
			println(str?.trim())
			count++
		}
	}
}