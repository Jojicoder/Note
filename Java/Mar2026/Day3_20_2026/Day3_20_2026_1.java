package Java.Mar2026.Day3_20_2026;
import java.util.ArrayList;

public class Day3_20_2026_1 {
    public static void main(String[] args){
        ArrayList<Integer> numbers = new ArrayList<>();
        numbers.add(1);
        numbers.add(2);
        numbers.add(3);
        numbers.add(4);
        numbers.add(5);

        numbers.forEach(n -> System.out.println(n));
        numbers.forEach(n -> {
            if(n%2==0)
                System.out.println(n);
            });
    }
}
