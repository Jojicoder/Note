import java.util.ArrayList;
import java.util.List;
import java.util.Optional;
import java.util.stream.Collectors;

public class Day5_30_2026 {
    
    enum Role{
        ADMIN,USER,GUEST
    }

    static class Account{
        String name;
        int balance;
        Role role;

        Account(String name, int balance, Role role){
            this.name = name;
            this.balance = balance;
            this.role = role;
        }
    }

    public static void main(String[] args){
        ArrayList<Account>  accounts = new ArrayList<>();
        accounts.add(new Account("Alice",150000,Role.ADMIN));
        accounts.add(new Account("Bob", 50000,Role.USER));
        accounts.add(new Account("Charlie",200000,Role.USER));
        accounts.add(new Account("Diana",80000,Role.GUEST));
        accounts.add(new Account("Eve",120000,Role.ADMIN));

        List<String> result = accounts.stream()
            .filter(a -> a.role != Role.GUEST)
            .filter(a -> a.balance >= 100000)
            .map(a -> a.name)
            .collect(Collectors.toList());

        System.out.println("Result: " + result);

        Optional<Account> admin = accounts.stream()
                .filter(a -> a.role == Role.ADMIN)
                .findFirst();
        
        admin.ifPresent(a -> System.out.println("First Admin: " + a.name));
    }
}
