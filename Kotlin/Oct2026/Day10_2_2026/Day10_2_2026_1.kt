class Profile{
    lateinit var nickname: String
}

fun main(){
    val name: String = "Joji"
    var age = 20
    age +=1
    val height = 172.5
    val big  = 5L

    val ageText: String = age.toString()
    val parsed: Int = "42".toInt()

    var city: String? = null
    println(city?.length)
    println(city?.length ?: 0)
    city = "nyc"

    println(city?.uppercase())

    val p = Profile()
    p.nickname = "JojiCode"
    println("$name ($age) ${height}cm $big $ageText ${parsed + 1} ${p.nickname}")
}