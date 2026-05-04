import java.util.ArrayList;
import java.util.List;
import java.util.stream.Collectors;

public class Day5_2_2026 {
    enum Status{
        ACTIVE,INACTIVE,PENDING
        }

        static class User{
            String name;
            int age;
            Status status;

            User(String name, int age, Status status){
                this.name=name;
                this.age=age;
                this.status = status;
            }
        }

        /**
         * @param args
         */
        public static void main(String[] args){
            ArrayList<User> users = new ArrayList<>();
            users.add(new User("Alice", 25, Status.ACTIVE));
            users.add(new User("Bob", 17,Status.INACTIVE));
            users.add(new User("Charlie",30,Status.ACTIVE));
            users.add(new User("Diana",15,Status.PENDING));
            users.add(new User("Eve",22,Status.ACTIVE));
            
            List<String> result = users.stream()
                        .filter(u-> u.status==Status.ACTIVE && u.age>=18)
                        .map(u-> u.name)
                        .collect(Collectors.toList());
            
                        System.out.println("Result: "+ result);
        }
    
    
}
