import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

public class Day4_26_2026_2 {
    public static void main(String[] args){
        ArrayList<Integer> numbers = new ArrayList<>();
        numbers.add(10);
        numbers.add(25);
        numbers.add(8);
        numbers.add(33);
        numbers.add(16);

        List<Integer> result = numbers.stream()
                            .filter(n -> n >=20)
                            .collect(Collectors.toList());

        System.out.println("Result: "+result);
    }
}
