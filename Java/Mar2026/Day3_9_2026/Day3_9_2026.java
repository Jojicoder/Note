package Java.Mar2026.Day3_9_2026;

public class Day3_9_2026 {
    public static void main(String[] args){
    
    for(int i = 1;i<=50;i++){


        if(i%15==0)
        {
            System.out.println("FizzBUzz");
        }else if(i%5==0)
        {
            System.out.println("Buzz");
        }else if(i%3==0)
        {
            System.out.println("Fizz");}
        else
        {
            System.out.println(i);
        }
        /*if(i%3==0&&i%15!=0){
            System.out.println("Fizz");
        }else if(i%5==0&&i%15!=0)
        {
            System.out.println("Buzz");
        }else if(i%15==0)
        {
            System.out.println("FizzBUzz");
        }
        else
        {
            System.out.println(i);
        }*/
    }       

}
}
