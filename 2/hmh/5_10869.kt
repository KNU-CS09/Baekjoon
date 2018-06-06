package `2`.hmh

import java.util.*

object Example2_5 {
	@JvmStatic
	fun main(args: Array<String>) {
		val sc = Scanner(System.`in`)
		val a = sc.nextInt()
		val b = sc.nextInt()
		if (a in 1..10000 && b in 1..10000) {
			println(a + b)
			println(a - b)
			println(a * b)
			println(a / b)
			println(a % b)
		}
	}
}