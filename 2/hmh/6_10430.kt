package `2`.hmh

import java.util.*

object Example2_6 {
	@JvmStatic
	fun main(args: Array<String>) {
		val sc = Scanner(System.`in`)
		val a = sc.nextInt()
		val b = sc.nextInt()
		val c = sc.nextInt()
		if (a in 2..10000 && b in 2..10000 && c in 2..10000) {
			println((a + b) % c)
			println((a % c + b % c) % c)
			println((a * b) % c)
			println((a % c * b % c) % c)
		}
	}
}