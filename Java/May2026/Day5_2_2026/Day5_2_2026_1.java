import java.util.Optional;
public class Day5_2_2026_1 {
    public static void main(String[] args){
        Optional<String> name = Optional.of("Taro");
        name.ifPresent(n->System.out.println("Name: "+ n));

        Optional<String> empty = Optional.empty();
        String result = empty.orElse("No name");
        System.out.println("Result: "+ result);

        Optional<String> nullable = Optional.ofNullable(null);
        System.out.println("Is empty: "+ nullable.isEmpty());
    }
}
