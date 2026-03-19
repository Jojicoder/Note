package Java.Mar2026.Day3_19_2026;

public class Day3_19_2026 {
  
        static class Box<T>{
            T value;
            
            Box(T value){
                this.value=value;
            }

            T getValue(){
                return value;
            }
        }
    

    public static void main(String[] args){
        Box<Integer> intBox = new Box<>(42);
        Box<String> strBox = new Box<>("Hello");
        Box<Double> dblBox = new Box<>(3.14);

        System.out.println("Int: "+intBox.getValue());
        System.out.println("String: " + strBox.getValue());
        System.out.println("Double: "+dblBox.getValue());

    }
}
