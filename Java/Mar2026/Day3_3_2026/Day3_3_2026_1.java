package Java.Mar2026.Day3_3_2026;

public class Day3_3_2026_1 {
    static class Person{
        String name;
        int age;

        void greet(){
            System.out.println("Hi, I'm "+name+", age "+age);
        }
    }

    public static void main(String[] args){
        Person p = new Person();
        p.name = "Taro";
        p.age =67;
        p.greet();
    }
}
