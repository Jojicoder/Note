fun main()
{
    val scores = arrayOf(95,82,76,68,54)

    for(score in scores)
    {
        val grade = getGrade(score)

        println("Score: $score Grade: $grade")
    }

}

fun getGrade(score: Int):String
{
    return when
    {
        score >= 90 -> "A"
        score >= 80 -> "B"
        score >= 70 -> "C"
        score >= 60 -> "D"
        else -> "F"
    }
}