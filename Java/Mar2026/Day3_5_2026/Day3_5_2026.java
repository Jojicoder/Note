package Java.Mar2026.Day3_5_2026;

public class Day3_5_2026{
    interface Codable{
        void code();
    }

    interface Designable{
        void design();
    }

    static class FullStackEngineer implements Codable, Designable{
        @Override
        public void code(){
            System.out.println("Writing Java code!");
        }

        @Override
        public void design(){
            System.out.println("Designing UI!");
        }
    }

    public static void main(String[] args){
        FullStackEngineer fe =new FullStackEngineer();
        fe.code();
        fe.design();
    }
}