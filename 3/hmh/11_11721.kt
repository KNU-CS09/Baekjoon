package `3`.hmh

object Example3_11 {
	@JvmStatic
	fun main(args: Array<String>) {
		readLine()?.run {
			(0..count() / 10).forEach {
				val start = it * 10
				var end = (it + 1) * 10 - 1
				if (end >= count()) end = count() - 1
				slice(start..end).also { println(it) }
			}
		}
	}
}