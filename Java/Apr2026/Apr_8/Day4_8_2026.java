package Java.Apr2026.Apr_8;
import java.util.HashMap;

public class Day4_8_2026 {
    public static boolean isAnagram(String s, String t){
        if(s.length() != t.length()) return false;

        HashMap<Character, Integer> map = new HashMap<>();

        for(char c : s.toCharArray()){
                map.put(c, map.getOrDefault(c,0)+1);
        }


        for(char c: t.toCharArray()){
            map.put(c,map.getOrDefault(c,0)-1);
        }

        for(int count: map.values()){
            if(count != 0) return false;
        }
        return true;
    }

    public static void main(String[] args){
        System.out.println(isAnagram("anagram", "nagaram"));
        System.out.println(isAnagram("rat","car"));
    }
}
