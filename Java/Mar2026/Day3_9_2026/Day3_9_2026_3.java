package Java.Mar2026.Day3_9_2026;
import java.util.HashSet;

public class Day3_9_2026_3 {
    public static boolean containsDuplicate(int[] nums){
        HashSet<Integer> set = new HashSet<>();
        for(int num : nums){
            if(set.contains(num)){
                return true;
            }
            set.add(num);
        }
        return false;
    }
    public static void main(String[] args){
        System.out.println(containsDuplicate(new int[]{1,2,3,1}));
    }
}
