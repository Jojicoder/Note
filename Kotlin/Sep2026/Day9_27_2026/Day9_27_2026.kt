open class Vehicle
{
    open val name = "Vehicle"
    open val speed = 0

    open fun move()
    {
        println("$name is moving")
    }
}

class Car : Vehicle()
{
    override val name = "Car"
    override val speed = 120

    override fun move()
    {
        println("$name is driving at $speed km/h")
    }
}

class Bike : Vehicle()
{
    override val name ="Bike"
    override val speed = 30

    override fun move()
    {
        println("$name is driving at $speed km/h")
    }
}

fun main()
{
    val vehicles = listOf(
        Car(),
        Bike()
    )

    for(vehicle in vehicles)
    {
        println("Name: ${vehicle.name}")
        println("Speed: ${vehicle.speed}")

        vehicle.move()

        println()
    }
}