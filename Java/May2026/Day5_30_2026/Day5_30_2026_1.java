import java.util.Optional;

public class Day5_30_2026_1 {
    static class Address{
        String city;
        Address(String city){
            this.city = city;
        }
    }

    static class User{
        String name;
        Address address;

        User(String name, Address address){
            this.name = name;
            this.address = address;
        }

        public static void main(String[] args) {
            User user1 = new User("Alice", new Address("New York"));

            User user2 = new User("Bob", null);

            String city1 = Optional.ofNullable(user1.address)
                .map(a -> a.city)
                .orElse("Unknown");

            String city2 = Optional.ofNullable(user2.address)
                .map(a-> a.city)
                .orElse("Unknown");
            
            System.out.println("Alice lives in: "+ city1);
            System.out.println("Bob lives in: " + city2);
        }}
    }
