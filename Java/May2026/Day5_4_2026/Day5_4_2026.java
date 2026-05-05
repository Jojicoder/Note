import java.util.Optional;
public class Day5_4_2026 {

    static class User{
        String name;
        User(String name){
            this.name = name;
        }
    }
    public static void main(String[] args){
        Optional<String> name = Optional.of("Taro");
        Optional<User> person = Optional.ofNullable(null);
        name.ifPresent(n -> System.out.println("Name: " +n));

        Optional<String> empty = Optional.empty();
        String result = empty.orElse("No name");
        System.out.println("Result: " + result);

        Optional<String> nullable = Optional.ofNullable(null);
        System.out.println("Is empty: " + nullable.isEmpty());

        String per = person
                .map(u->u.name)
                .orElse("Guest");
        System.out.println(per);
    }
}
