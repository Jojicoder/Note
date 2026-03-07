package Java.Mar2026.Day3_5_2026;
import java.util.HashMap;


public class Day3_3_5_2026 {
    public static void main(String[]args){
        HashMap<Integer,Integer> map = new HashMap<>();
        int[] nums = {2,7,11,15};
        int target = 9;
    
        for(int i = 0;i < nums.length;i++){
            int complement = target - nums[i];
            if(map.containsKey(complement)){
                System.out.println("["+ map.get(complement)+","+i+"]");
            }
            map.put(nums[i],i);
            }
        

        }
        
    }

