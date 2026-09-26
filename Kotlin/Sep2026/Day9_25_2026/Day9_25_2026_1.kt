fun main()
{
    println("Enter a number: ")

    val number = readln().toInt()

    val type = checkNumber(number)

    println(type)

    println("Counting from 1 to $number")

    for(i in 1..number)1
    {
        println(i)
    }
}

fun checkNumber(number: Int):String
{
    return when{
        number % 2 == 0 -> "Even number"
        else -> "Odd number"
    }
}