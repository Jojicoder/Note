package Java.Mar2026.Day3_5_2026;
import java.util.HashMap;
import java.util.ArrayList;
import java.util.Arrays;

public class Day5_3_5_2026 {

    public static void main(String[] args){
        HashMap<String, ArrayList<String>> map = new HashMap<>();
        String[] s = {"eat","tea","tan","ate","nat","bat"};

        for(int i = 0; i<s.length;i++){
            char[] chars = s[i].toCharArray();
            Arrays.sort(chars);
            String sorted = new String(chars);
            map.putIfAbsent(sorted, new ArrayList<>());
            map.get(sorted).add(s[i]);
        }

        for(ArrayList<String> group: map.values()){
            System.out.println(group);
        }
    }

    
}
