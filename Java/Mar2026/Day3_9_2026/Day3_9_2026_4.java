package Java.Mar2026.Day3_9_2026;

public class Day3_9_2026_4 {
    
    public static void reverseString(char[] s){
        int left=0;
        int right = s.length-1;

        while(left<right){
            char x = s[left];
            s[left] = s[right];
            s[right] = x;

            left++;
            right--;
        }
    }

    public static void main(String[] args){
        char[] s1 = {'h','e','l','l','o'};
        reverseString(s1);
        System.out.println(s1);
    }
}
