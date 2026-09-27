fun main()
{
    val scores = arrayOf(80,92,75,88,95)

    val total = getTotal(scores)
    val average = getAverage(scores)

    println("Total: $total")
    println("Average: $average")
}

fun getTotal(scores: Array<Int>): Int
{
    var total = 0
    for(score in scores)
    {
        total += score
    }

    return total
}

fun getAverage(scores: Array<Int>): Double
{
    val total = getTotal(scores)

    return total.toDouble()/scores.size
}