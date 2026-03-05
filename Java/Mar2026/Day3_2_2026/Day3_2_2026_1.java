package Java.Mar2026.Day3_2_2026;
import java.util.HashMap;
import java.util.Map;

public class Day3_2_2026_1 {
    public static int[] twoSum(int[] nums, int target){
        Map<Integer, Integer> map = new HashMap<Integer, Integer>();

        for(int i =0;i<nums.length;i++){
            int complement = target - nums[i];

            if(map.containsKey(complement))
                return new int []{map.get(complement),i};
            
                map.put(nums[i],i);

        }
        return new int[]{};
    }

    public static void main(String[] args){
        System.out.println(java.util.Arrays.toString(twoSum(new int[]{2,7,11,15},9)));
        System.out.println(java.util.Arrays.toString(twoSum(new int[]{3,2,4},9)));
    }
}
