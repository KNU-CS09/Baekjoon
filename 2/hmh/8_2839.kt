package `2`.hmh

import java.util.*

object Example2_8 {
	@JvmStatic
	fun main(args: Array<String>) {
		var inputNumber = Scanner(System.`in`).nextInt()
		
		var x = 0
		while (true) {
			if (inputNumber % 5 == 0) {
				println(inputNumber / 5 + x)
				break
			} else if (inputNumber <= 0) {
				println("-1")
				break
			}
			inputNumber -= 3
			x++
		}
	}
}