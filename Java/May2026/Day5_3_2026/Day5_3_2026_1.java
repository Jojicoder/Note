import java.util.HashMap;

public class Day5_3_2026_1 {
    public static int[] twoSum(int[] nums,int target){
        HashMap<Integer,Integer> map= new HashMap<>();

        for(int i= 0;i<nums.length;i++){
            int complement = target - nums[i];

            if(map.containsKey(complement)){
                return new int[]{map.get(complement),i};
            }

            map.put(nums[i],i);
        }
    return new int[]{};
}
    public static void main(String[] args){
        System.out.println(java.util.Arrays.toString(twoSum(new int[]{2, 7, 11, 15}, 9))); // [0, 1]
        System.out.println(java.util.Arrays.toString(twoSum(new int[]{3, 2, 4}, 6))); 
    }
}