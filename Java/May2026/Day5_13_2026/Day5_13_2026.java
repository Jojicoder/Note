public class Day5_13_2026 {
    public static int myAtoi(String s){
        int i=0;
        int sign = 1;
        int result = 0;

        while(i<s.length()&& s.charAt(i)==' '){
            i++;
        }

        if(i<s.length() && (s.charAt(i) == '+' || s.charAt(i) == '-')){
            if(s.charAt(i) == '-') sign = -1;
            i++;
        }

        while(i<s.length() && Character.isDigit(s.charAt(i))){
            int digit = s.charAt(i) - '0';

            if(result > (Integer.MAX_VALUE-digit)/10){
                return sign == 1 ? Integer.MAX_VALUE : Integer.MIN_VALUE;
            }

            result = result*10+digit;
            i++;
        }
        return result * sign;
    }

    public static void main(String[] args){
        System.out.println(myAtoi("42"));
        System.out.println(myAtoi("     -42"));
        System.out.println(myAtoi("4193 words"));
        System.out.println(myAtoi("word 987"));
        System.out.println(myAtoi("-91283472332")); 
    }
}
