
fun main()
{
    // Get the computer's hand and player's hand
    val computer = getComputerHand()
    val player = getPlayerHand()

    println("You chose: $player")
    println("Computer chose: $computer")

    // Determine and display the result
    val result = determineWinner(player, computer)
    println(result)
}
// Randomly selects rock, paper, or scissors for the computer
fun getComputerHand(): String{
    val hands = arrayOf("rock", "paper", "scissors")

    return hands.random()
}
// Gets the player's input and checks if it is valid
fun getPlayerHand(): String
{
    while(true)
    {
        print("Enter rock, paper, or scissors: ")

        val input = readln().lowercase()

        if(input == "rock"||
            input == "paper" || 
            input == "scissors")
        {
            return input
        }
        else{
            println("Invalid input. Try again.")
        }
    }
}
// Compares the player's hand with the computer's hand
fun determineWinner(player: String, computer: String): String{

    return when
    {
        player == computer -> "Draw"
        player == "rock" && computer == "scissors"-> "You win"
        player == "paper" && computer == "rock" -> "You win"
        player == "scissors" && computer == "paper" -> "You win"

        else -> "Computer wins"

    }
}