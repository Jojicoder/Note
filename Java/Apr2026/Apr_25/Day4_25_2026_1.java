import java.util.ArrayList;
public class Day4_25_2026_1 {
    enum Status{
        ACTIVE, INACTIVE, PENDING;
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

    public static void main(String[] args){
        ArrayList<User> users= new ArrayList<>();
        users.add(new User("Alice", 25, Status.ACTIVE));
        users.add(new User("Bob",17,Status.INACTIVE));
        users.add(new User("Charlie", 30,Status.PENDING));
        users.add(new User("Diana",22,Status.ACTIVE));

        users.forEach(u ->{
            if(u.status== Status.ACTIVE && u.age >=18){
                System.out.println(u.name + " is active!");
            }
        });
    }
}
