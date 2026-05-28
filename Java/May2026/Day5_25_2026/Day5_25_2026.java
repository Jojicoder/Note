public class Day5_25_2026 {
    
    public static int maxSubArray(int[] nums){
     int currentSum = nums[0];
     int maxSum = nums[0];

     for(int i = 1;i<nums.length;i++){
        currentSum = Math.max(currentSum+nums[i],nums[i]);
        maxSum = Math.max(currentSum,maxSum);
     }
     return maxSum;
    }

    public static void main(String[] args){
        System.out.println(maxSubArray(new int[]{-2, 1, -3, 4, -1, 2, 1, -5, 4})); // 6
        System.out.println(maxSubArray(new int[]{1}));                               // 1
        System.out.println(maxSubArray(new int[]{5, 4, -1, 7, 8})); 
    }
}
