package Java.Feb2026.Day2_20_2026;
import java.util.Scanner;

public class WelcomeNYC {
    public static void main(String[] args){
        Scanner scanner = new Scanner(System.in);

        System.out.print("Enter your Name: ");
            String name = scanner.nextLine();

        System.out.print("Enter your favorite coding language: ");
        String lang = scanner.next();

        System.out.println("\n--- Welcome to NYC Tech Sene ---");
        System.out.println("Hello, "+name+"!");
        System.out.println("It's great that you are learning "+ lang + ".");

        scanner.close();
    
    }
}
