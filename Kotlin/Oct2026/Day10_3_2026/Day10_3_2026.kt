
fun main(){
    val a = 12
    val b = 10

    println(a and b)
    println(a or b)
    println(a xor b)
    println(a shl 2)
    println(a shr 2)
    println(a.inv())

    var x = 10
    x += 5
    x *= 2

    println("x = $x, x / 4 = ${x / 4}, x % 4 = ${x % 4}")

    val raw = """
    |Path: C:\Users\joji
    |Total: ${a + b}
    """.trimMargin()
    println(raw)
}