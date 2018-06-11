package `3`.hmh

import java.util.*

object Example3_8 {
	@JvmStatic
	fun main(args: Array<String>) {
		readLine()?.split(" ")?.let {
			val month = it[0].toInt() - 1
			val day = it[1].toInt()
			
			println(
				when (Calendar.getInstance().apply { set(2007, month, day) }
					.get(Calendar.DAY_OF_WEEK)) {
					Calendar.MONDAY -> "MON"
					Calendar.TUESDAY -> "TUE"
					Calendar.WEDNESDAY -> "WED"
					Calendar.THURSDAY -> "THU"
					Calendar.FRIDAY -> "FRI"
					Calendar.SATURDAY -> "SAT"
					else -> "SUN"
				})
		}
	}
}