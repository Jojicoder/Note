package Java.Mar2026.Day3_20_2026;
import java.util.ArrayList;
import java.util.Collections;

public class Day3_20_2026{
    public static void main(String[] args){
        ArrayList<String> names = new ArrayList<>();
        names.add("Charlie");
        names.add("Alice");
        names.add("Bob");

        Collections.sort(names);
        System.out.println("Ascending: "+ names);

        names.sort((a,b) -> b.compareTo(a));
        System.out.println("Descending: " + names);
    }
}

