package `1`

object Example1_8 {
	@JvmStatic
	fun main(args: Array<String>) {
		var count = 0
		while (count < 100) {
			println(readLine()?.takeIf { it.length in 0..100 } ?: return)
			count++
		}
	}
}