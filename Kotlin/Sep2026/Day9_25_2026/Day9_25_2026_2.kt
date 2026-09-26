fun main()
{
    val computer = getComputerHand()

    val player = getPlayerHand()

    println("You chose: $player")
    println("Computer chose:  $computer")
}

fun getComputerHand(): String{
    val hands = arrayOf("rock", "paper","scissors")

    return hands.random()
}

fun getPlayerHand(): String{
    
    while(true)
    {
        print("Enter rock, paper, or scissors: ")

        val input = readln().lowercase()

        if(input == "rock"||
        input == "paper"||
        input == "scissors")
        {
            return input
        }
        else{
            println("Invalid input. Try again.")
        }
    }
}   