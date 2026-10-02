fun main()
{
    val scores = arrayOf(80,92,75,88,95,60)

    val average = getAverage(scores)
    val count = countAboveAverage(scores, average)
    println("average: $average")
    println("Students above average: $count")
}

fun getAverage(scores: Array<Int>): Double
{
    var total = 0

    for(score in scores)
    {
        total += score
    }

    return total.toDouble() / scores.size
}

fun countAboveAverage(scores: Array<Int>, average: Double): Int
{
    var count = 0
    for(score in scores)
    {
        if(score > average)
        {
            count++
        }
    }

    return count 
}