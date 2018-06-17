package `3`.hmh

import java.io.BufferedReader
import java.io.BufferedWriter
import java.io.InputStreamReader
import java.io.OutputStreamWriter

object Example3_12 {
	@JvmStatic
	fun main(args: Array<String>) {
		val br = BufferedReader(InputStreamReader(System.`in`))
		val bw = BufferedWriter(OutputStreamWriter(System.out))
		
		val max = br.readLine().toInt()
		var count = 0
		while (count < max) {
			br.readLine().run {
				split(" ").takeIf { it.count() == 2 }?.run {
					val first = this[0].toInt()
					val second = this[1].toInt()
					
					if (first in 1..1000 && second in 1..1000) {
						bw.write((first + second).toString())
						bw.newLine()
					}
				}
			}
			count++
		}
		bw.flush()
		bw.close()
	}
}