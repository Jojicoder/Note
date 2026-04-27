import java.util.ArrayList;

public class Day4_26_2026 {
    public static void main(String[] args){
        ArrayList<Integer> numbers = new ArrayList<>();
        numbers.add(10);
        numbers.add(25);
        numbers.add(8);
        numbers.add(33);
        numbers.add(16);

        numbers.stream()
                .filter(n -> n >= 20)
                .forEach( n ->System.out.println(n));
    }
}
