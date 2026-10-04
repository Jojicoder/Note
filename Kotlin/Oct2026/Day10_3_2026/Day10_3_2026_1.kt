fun main()
{
    val scores = arrayOf(23,45,50)
    println("${scores[1]} ${scores.size}")

    val odds = IntArray(5) {i ->  i*2+3}
    println(odds.joinToString())

    val nums = (1..5).toList().toTypedArray()
    println(nums.joinToString(" "))

    println((1..5).toList())
    println((1 until 5).toList())
    println((10 downTo 1 step 3).toList())
    println(1.rangeTo(10).step(2).toList())

    println("c" in "a".."f")
    println(5 in 1..5)
    println(5 in 1 until 5)

    for(i in 0 until scores.size){
        print("$i:${scores[i]} ")
    }
    println()

    for(i in scores.indices){
        print("$i:${scores[i]} ")
    }
    println()
}