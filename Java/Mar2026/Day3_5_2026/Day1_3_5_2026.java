package Java.Mar2026.Day3_5_2026;
import java.util.ArrayList;

public class Day1_3_5_2026 {
    public static void main(String[] arg){
        ArrayList<String> languages = new ArrayList<>();

        languages.add("Java");
        languages.add("Swift");
        languages.add("C");

        for(int i =0; i < languages.size();i++){
            System.out.println(languages.get(i));
        }
        
        languages.remove(2);

        for(String lang:languages){
            System.out.println(lang);
        }
    }
}
