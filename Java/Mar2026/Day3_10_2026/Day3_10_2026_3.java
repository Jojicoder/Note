package Java.Mar2026.Day3_10_2026;

public class Day3_10_2026_3 {

    public static int maxSubArray(int[] nums){
        int currentSum = nums[0];
        int maxSum = nums[0];

        for(int i = 1;i<nums.length;i++){
          
            currentSum = Math.max(currentSum+nums[i],nums[i]);

            maxSum = Math.max(maxSum,currentSum);
    
           
        }
        
        return maxSum;
    }
    public static void main(String[] arg){
          System.out.println(maxSubArray(new int[]{-2, 1, -3, 4, -1, 2, 1, -5, 4})); // 6
        System.out.println(maxSubArray(new int[]{1}));                               // 1
        System.out.println(maxSubArray(new int[]{5, 4, -1, 7, 8}));   
    }
}
