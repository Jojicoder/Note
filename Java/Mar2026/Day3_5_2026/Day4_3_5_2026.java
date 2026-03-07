package Java.Mar2026.Day3_5_2026;
import java.util.HashMap;

public class Day4_3_5_2026 {
    public static void main(String[] args){
        HashMap<Character, Integer> map = new HashMap<>();

        String s,t;
        s = "anagram";
        t = "nagaram";
        for(int i = 0; i <s.length();i++){
            char c =s.charAt(i);
            map.put(c,map.getOrDefault(c,0)+1);
        }

        for(int i = 0; i <t.length();i++){
            char c = t.charAt(i);
            map.put(c,map.getOrDefault(c,0)-1);
        }
        boolean  result = true;
        for(int count:map.values()){
            if(count!=0){
                result = false;
                break;
            }
        }
       System.out.println(result);
    }
}
