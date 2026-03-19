package Java.Mar2026.Day3_18_2026;

public class Day3_18_2026 {
    public static void main(String[] args){
        try{
            int result = 10/0;
            System.out.println("Result: "+ result);
        }catch (ArithmeticException e){
            System.out.println("Error: " + e.getMessage());
        }finally{
            System.out.println("Done");
        }

        int[] numbers ={1,2,3};
        try{
            System.out.println(numbers[5]);
        }catch (ArrayIndexOutOfBoundsException e){
            System.out.println("Error: "+ e.getMessage());
        }

        try{
            int num = Integer.parseInt("abc");
        }catch (NumberFormatException e){
            System.out.println("Error: "+ e.getMessage());
        }
    }
}
