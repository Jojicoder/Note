package Java.Mar2026.Day3_4_2026;

public class Day3_4_2026 {
    static class Person{
        String name;
        int age;
        Person(String name, int age) {
            this.name = name;
            this.age = age;
        }
        void greet(){
            System.out.println("Hi, I'm "+name);
        }
    }
    static class Engineer extends Person{
        String language;

        Engineer(String name,int age, String language){
            super(name,age);
            this.language = language;
        }

        void code(){
            System.out.println(name + " codes in "+ language);
        }
    }

    static class FinTechEngineer extends Engineer{
        String company;
        FinTechEngineer(String name,int age, String language,String company){
            super(name,age,language);
            this.company = company;
        }

        void work(){
            System.out.println(name +" works at "+ company);
        }
    }

    public static void main(String[] args){
        FinTechEngineer e = new FinTechEngineer("Taro",67,"Java","Goldman Sachs");
        e.greet();
        e.code();
        e.work();

    }
}
