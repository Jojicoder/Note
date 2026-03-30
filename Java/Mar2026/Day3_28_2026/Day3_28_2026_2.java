package Java.Mar2026.Day3_28_2026;

public class Day3_28_2026_2 {
     public static void merge(int[] nums1, int m,int[] nums2, int n){
        int p1=m-1;
        int p2=n-1;
        int p = m+n-1;

            while(0<=p2){
                if((p1>=0 && nums1[p1]>nums2[p2])){
                    nums1[p] = nums1[p1];
                    p1--;
                    p--;
                }else
                {
                    nums1[p]=nums2[p2];
                    p2--;
                    p--;
                }
            }
     }

     public static void main(String[] args){
        int[] nums1={1,2,3,0,0,0};
        int[] nums2={2,5,6};
        merge(nums1, 3,nums2,3);
        System.out.println(java.util.Arrays.toString(nums1));
     }
}
