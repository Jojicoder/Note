import java.util.ArrayList;
public class Day4_26_2026_1 {
        public static void main(String[] args) {
            ArrayList<String> names =new ArrayList<>();

            names.add("alice");
            names.add("bob");
            names.add("charlie");

            names.stream()
                .map(n-> n.toUpperCase())
                .forEach(n-> System.out.println(n));
        
            }
        }

