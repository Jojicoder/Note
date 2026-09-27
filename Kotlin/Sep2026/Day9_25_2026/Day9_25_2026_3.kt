// Superclass with common properties and functions
open class Animal
{
    open val image= ""
    open val food = ""
    open val habitat = ""

    var hunger = 10

    open fun makeNoise()
    {
        println("The Animal is making a noise")
    }

    open fun eat()
    {
        println("The Animal is eating")
    }

    open fun roam()
    {
        println("The Animal is roaming")
    }

    fun sleep()
    {
        println("The Animal is sleeping")
    }
}
// Dog subclass overrides Animal properties and functions
class Dog : Animal()
{
    override val image = "dog.jpg"
    override val food = "Dog food"
    override val habitat = "House"

    override fun makeNoise()
    {
        println("Dog says: Woof!")
    }

    override fun eat()
    {
        println("Dog is eating dog food")
    }

    override fun roam()
    {
        println("Dog is running around")
    }

}
// Cat subclass overrides Animal properties and functions
class Cat : Animal()
{
    override val image = "cat.jpg"
    override val food = "Cat food"
    override val habitat = "House"

    override fun makeNoise()
    {
        println("Cat says: Meow!")
    }

    override fun eat()
    {
        println("Cat is eating cat food")
    }

    override fun roam()
    {
        println("Cat is walking around")
    }
}
// Bird subclass overrides Animal properties and functions
class Bird : Animal()
{
    override val image = "bird.jpg"
    override val food = "Seeds"
    override val habitat = "Nest"

    override fun makeNoise()
    {
        println("Bird says: Chirp!")
    }

    override fun eat()
    {
        println("Bird is eating seeds")
    }

    override fun roam()
    {
        println("Bird is flying around")
    }
}

fun main()
{
    // Create a list of different child objects
    val animals = listOf(
        Dog(),
        Cat(),
        Bird()
        
    )
// Test all properties and functions
    for(animal in animals)
    {
        println("Image: ${animal.image}")
        println("Food: ${animal.food}")
        println("Habitat: ${animal.habitat}")
        println("Hunger: ${animal.hunger}")

        animal.makeNoise()
        animal.eat()
        animal.roam()
        animal.sleep()

        println()

    }
}