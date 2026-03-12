package Java.Mar2026.Day3_11_2026;

public class Day3_11_2026_1 {
    public static String reverseStr(String s,int k){

        char[] chars = s.toCharArray();
        for(int i =0;i<chars.length;i+=2*k){
        int left = i;
        int right = Math.min(i+k-1,chars.length -1);

            
        while(left< right){
            char temp = chars[left];
            chars[left] = chars[right];
            chars[right]=temp;
                left++;
                right--;
        }
        }

        return new String(chars);
    }

    public static void main(String[] args){
        System.out.println(reverseStr("abcdefg", 2)); // bacdfeg
        System.out.println(reverseStr("abcd", 2));    // bacd
    }
}
