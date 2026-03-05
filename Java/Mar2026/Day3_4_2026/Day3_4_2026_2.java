package Java.Mar2026.Day3_4_2026;

public class Day3_4_2026_2 {
    static class Person{
        void greet(){
            System.out.println("Hi, I'm a person.");
        }
    }

    static class Engineer extends Person{
        @Override
        void greet(){
            System.out.println("Hi, I'm an engineer!");
        }
    }

    static class Designer extends Person{
        @Override
        void greet(){
            System.out.println("Hi, I'm a desingner!");
        }
}

    public static void main(String[] args){
        Person[] people = {
            new Person(),
            new Engineer(),
            new Designer()
        };

        for(Person p: people){
            p.greet();
        }

        people[0].greet();

    }
}
