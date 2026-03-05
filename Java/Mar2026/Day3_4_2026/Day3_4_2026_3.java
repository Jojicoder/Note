package Java.Mar2026.Day3_4_2026;

public class Day3_4_2026_3 {
    public static boolean isPalindrome(String s){
        StringBuilder sb = new StringBuilder();
        for(char c:s.toCharArray()){
            if(Character.isLetterOrDigit(c)){
                sb.append(Character.toLowerCase(c));
            }
        }
        String clean = sb.toString();

        int left =0;
        int right = clean.length()-1;
        while(left<right){
            if(clean.charAt(left)!=clean.charAt(right)){
                return false;
            }
            left++;
            right--;
        }

        return true;
    }

    public static void main(String[] args) {
        System.out.println(isPalindrome("A man, a plan, a canal: Panama")); // true
        System.out.println(isPalindrome("race a car"));                      // false
        System.out.println(isPalindrome(" "));                               // true
    }
}
