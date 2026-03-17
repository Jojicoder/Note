package Java.Mar2026.Day3_15_2026;
import java.util.HashMap;

public class Day3_15_2026 {
    public static void main(String[] args){
        HashMap<String, Integer> scores = new HashMap<>();

        scores.put("Alice",92);
        scores.put("Bob", 78);
        scores.put("Charlie",85);
        scores.put("Diana",91);

        for(String name : scores.keySet()){
            System.out.println(name + ": " + scores.get(name));
        }
        System.out.println();

        for(String name: scores.keySet()){
            if(scores.get(name)>=80){
                System.out.println(name+ " Passed!");
            }
        }


    }
}
