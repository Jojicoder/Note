fun main()
{
    print("Enter a number: ")
    val number = readln().toInt()
    
    if(number % 2 == 0)
    {
        println("$number is Even")
    }
    else
    {
        println("$number is Odd")
    }

    println()

    println("Number from 1 to 5:")

    for(i in 1..5)
    {
        println(i)
    }

    println()

    val result = checkNumber(number)

    println(result)
}

fun checkNumber(number: Int): String
{
    return when 
    {
        number > 0 -> "Positive number"
        number < 0 ->  "Negative number"
        else -> "Zero"
    }
}