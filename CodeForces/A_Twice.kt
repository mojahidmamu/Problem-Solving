// Author: Abdullah all Mojahid

import java.io.BufferedReader
import java.io.InputStreamReader
import java.io.PrintWriter
import java.util.StringTokenizer
import kotlin.math.sqrt
 
fun main() {
    val br = BufferedReader(InputStreamReader(System.`in`))
    val out = PrintWriter(System.out)

    val t = br.readLine().toInt()

    repeat(t) {
        val n = br.readLine().toInt()
        val st = StringTokenizer(br.readLine())
        val a = IntArray(n)

        for (i in 0 until n) {
            a[i] = st.nextToken().toInt()
        }

        if (n <= 1) {
            out.println(0)
        } else {
            var score = 0
            for (i in 0 until n) {
                for (j in i + 1 until n) {
                    if (a[i] == a[j]) {
                        score++
                        break
                    }
                }
            }
            out.println(score)
        }
    }

    out.flush()
}