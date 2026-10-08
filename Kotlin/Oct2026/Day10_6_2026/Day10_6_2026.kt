fun main(){
    for(i in 1..5){
        if(i%2==0)continue
        print("$i ")
    }
    println()

    for(i in 1..5){
        print("$i ")
        if(i==3)break;
    }
    println()

    var n = 3
    while(n>0){
        println("n ")
        n--
    }
}