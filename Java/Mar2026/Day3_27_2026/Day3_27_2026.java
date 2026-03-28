package Java.Mar2026.Day3_27_2026;

public class Day3_27_2026 {
    public static boolean isPalindrome(String s) {

            StringBuilder sb = new StringBuilder(); 
            for(char c: s.toCharArray()){
                if(Character.isLetterOrDigit(c)){
                    sb.append(Character.toLowerCase(c));
                }
            }
            String clean = sb.toString();
            int right = clean.length()-1;
            int left=0;
            while(left<right)
            {
                    if(clean.charAt(left) != clean.charAt(right))
                        return false;
                right--;
                left++;

            }
            return true;
}

        public static void main(String args[]){
            System.out.println(isPalindrome("tommot"));

            String s ="abc";
            System.out.println(s.equals("a"));

        } 
}
