public class Day5_13_2026_1 {
    
    public static int myAtoi(String s){
        int i = 0;
        int sign = 1;
        int result = 0;

        while(i < s.charAt(i) && s.charAt(i) == ' '){
            i++;
        }

        if(i < s.length() && (s.charAt(i) == '+') || s.charAt(i)=='-'){
            if(s.charAt(i)=='-') sign = -1;
            i++;
        }
    }
}
