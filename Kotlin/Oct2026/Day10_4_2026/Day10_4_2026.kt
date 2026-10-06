fun grade(score: Int): String = when{
    score >= 90 -> "A"
    score >= 70 -> "B"
    else -> "C"
}

fun size(n: Int):String = when(n){
    1,2 -> "small"
    in 3..9 -> "medium"
    !in 0..100 -> "out of range"
    else -> "large"
    }

fun describe(x: Any): String = when(x){
    is String -> "text(${x.length})"
    is Int -> "int(%{x*2})"
    is Double -> "double"
    else -> "unknown"
}

fun main(){
    val a = 3
    val b = 7
    val max = if(a > b) a else b
    println(max)

    val label = if(max > 5){
        println("big branch")
        "BIG"
    }else{
        "SMALL"
    }
    println(label)

    val x = 8
    if(x == 10) println("x is 10")
    else if (x == 9)println("x is 9")
    else if (x == 8)println("x is 8")
    else println("x is less than 8")

    println(grade(95))
    println(grade(85))
    println(grade(70))
    println(grade(42))

    println(size(2))
    println(size(5))
    println(size(50))
    println(size(150))
    println(size(-1))



}