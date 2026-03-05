package Java.Mar2026.Day3_3_2026;

public class Day3_3_2026 {
    static int absoluteValue(int n){
        if(n < 0){
            return -n;
        }
        return n;
    }

    public static void main(String[] args){
        System.out.println(absoluteValue(5));
        System.out.println(absoluteValue(-3));
        System.out.println(absoluteValue(0));
        System.out.println(max(100,20));
    }

    static int max(int x,int y){
        if(x>y)
            return x;
        return y;
    }
}
