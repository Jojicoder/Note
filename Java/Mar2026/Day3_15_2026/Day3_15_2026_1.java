package Java.Mar2026.Day3_15_2026;
import java.util.ArrayList;
import java.util.HashMap;

public class Day3_15_2026_1 {
    public static void main(String[] args){
        ArrayList<String> names = new ArrayList<>();
        ArrayList<Integer> scores = new ArrayList<>();

        names.add("Alice");     scores.add(92);
        names.add("Bob");       scores.add(58);
        names.add("Charlie");   scores.add(75);
        names.add("Dina");      scores.add(88);
        names.add("Eva");       scores.add(45);

        HashMap<String, String> results = new HashMap<>();
        for(int i = 0; i < names.size();i++){
            if(scores.get(i)>=70)
                    results.put(names.get(i), "Pass");
            else{
                results.put(names.get(i),"Fail");
            }
        }

        for(String name: results.keySet())
            System.out.println(name + ": "+ results.get(name));
    }
}
