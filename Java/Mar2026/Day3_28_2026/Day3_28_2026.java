package Java.Mar2026.Day3_28_2026;
import java.util.Stack;


public class Day3_28_2026 {
    public static boolean isValid(String s){
        Stack<Character> stack =new Stack<>();

        for(char c:s.toCharArray()){
            if(c == '(' || c== '[' || c =='{'){
                    stack.push(c);
            }else
            {
                if(stack.isEmpty())
                    return false;

                char top = stack.pop();
                if(c==')' && top !='(') return false;
                else if(c==']'&& top !='[') return false;
                else if(c=='}' && top !='{') return false;
            }
        }
            return stack.isEmpty();
    }

    public static void main(String[] args){
        System.out.println(isValid("()"));
        System.out.println(isValid("()[]{}"));
    }
}
