package Java.Feb2026.Day2_21_2026;

public class SimpleCalc {
    public static void  main(String[] args){
        int num1 = 10;
        int num2 = 5;

        int sum = add(num1, num2);
        System.out.println("Result of Addition: "+ sum);

        int product = multiply(num1,num2);
        System.out.println("Result of Mutiplication: "+ product);
    }

    public static int add(int a,int b){
        return a+b;
    }

    public static int multiply(int a ,int b){
        return a*b;
    }
}

