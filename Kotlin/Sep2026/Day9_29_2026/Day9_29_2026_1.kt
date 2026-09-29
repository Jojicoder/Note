fun main()
{
    val numbers = arrayOf(12,7,25,18,25,10)

    val second = getSecondLargest(numbers)

    println("Second largest: $second")
}

fun getSecondLargest(numbers: Array<Int>): Int
{
    var largest = Int.MIN_VALUE
    var secondLargest = Int.MIN_VALUE

    for(number in numbers)
    {
        if(number > largest)
        {
            secondLargest = largest
            largest = number
        }
        else if(number > secondLargest && number  != largest)
        {
            secondLargest = number
        }
    }

    return secondLargest
}