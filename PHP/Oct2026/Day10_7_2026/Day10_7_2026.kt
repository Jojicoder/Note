fun main() {
    // ①
    for (i in 1..5) {
        if (i % 2 == 0) continue
        print("$i ")
    }
    println()

    // ②
    for (i in 1..5) {
        print("$i ")
        if (i == 3) break
    }
    println()

    // ③
    var n = 3
    while (n > 0) {
        print("$n ")
        n--
    }
    println()

    // ★④ do-while
    var m = 10
    do {
        print("$m ")
        m++
    } while (m < 3)
    println()

    // ⑤
    var sum = 0
    for (k in listOf(5, 10, 15)) sum += k
    println(sum)

    // ⑥
    for (i in 1..3) {
        for (j in 1..3) {
            if (j == 2) break
            print("$i$j ")
        }
        print("| ")
    }
    println()

    // ★⑦ break@outer
    outer@ for (i in 1..3) {
        for (j in 1..3) {
            if (i == 2 && j == 2) break@outer
            print("$i$j ")
        }
        print("| ")
    }
    println()

    // ★⑧ continue@outer
    outer@ for (i in 1..3) {
        for (j in 1..3) {
            if (j == 2) continue@outer
            print("$i$j ")
        }
        print("| ")
    }
    println()

    // ⑨
    for (i in 1..3) {
        for (j in 1..3) {
            if (j == 2) continue
            print("$i$j ")
        }
        print("| ")
    }
    println()

    // ⑩
    for (i in 10 downTo 1 step 3) print("$i ")
    println()
}