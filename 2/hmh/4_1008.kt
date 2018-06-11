package `2`.hmh

import java.util.*

object Example2_4 {
	@JvmStatic
	fun main(args: Array<String>) {
		val sc = Scanner(System.`in`)
		val a = sc.nextDouble()
		val b = sc.nextDouble()
		if (a in 1 until 10 && b in 1 until 10)
			println(a / b)
	}
}