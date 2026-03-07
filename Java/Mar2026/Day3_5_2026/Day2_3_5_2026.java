package Java.Mar2026.Day3_5_2026;
import java.util.LinkedHashMap;

public class Day2_3_5_2026 {
    public static void main(String[] args){
        LinkedHashMap<String, Integer> scores = new LinkedHashMap<>();
        scores.put("Taro",95);
        scores.put("Hanako", 88);
        scores.put("Jiro", 72);

        for(String name : scores.keySet()){
        System.out.println( name + ": "+ scores.get(name));
        }

        System.out.println(scores.get("Jiro"));
        System.out.println(scores.containsKey("Jiro"));
    }
}
