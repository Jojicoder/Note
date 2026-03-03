package Java.Mar2026.Day3_2_2026;

public class MyProfile {
    public static void main(String[] args){
        String name = "Taro";
        int age = 67;
        String goal = "NYC Engineer";

        System.out.println("Name: "+ name);
        System.out.println("Age :"+age);
        System.out.println("Goal: "+ goal);

        if(65<=age){
            System.out.println("Senior Enginner!");
        }else{
            System.out.println("Junior Engineer!");
        }
    }
}
