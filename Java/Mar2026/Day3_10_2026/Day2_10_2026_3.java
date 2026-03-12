package Java.Mar2026.Day3_10_2026;
import java.util.Arrays;

public class Day2_10_2026_3 {
    public static int[] runningSum(int[] nums){

        for(int i = 1;i<nums.length;i++){
            nums[i] = nums[i]+nums[i-1];
        }
        return nums;
    }

    public static void main(String[] args){
        System.out.println(Arrays.toString(runningSum(new int[]{1,2,3,4})));
        System.out.println(Arrays.toString(runningSum(new int[]{1,1,1,1,1})));
    }
}
