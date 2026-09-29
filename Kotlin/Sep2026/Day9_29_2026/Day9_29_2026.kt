fun main()
{
    val scores = arrayOf(80,92,75,88,95)
    val maxScore = getMax(scores)

    println("Max score: $maxScore")
}

fun getMax(scores: Array<Int>): Int
{
    var max = scores[0]

    for(score in scores)
    {
        if(score > max)
        {
            max = score
        }
    }

    return max
}