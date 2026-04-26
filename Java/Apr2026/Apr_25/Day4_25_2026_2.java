import java.util.ArrayList;
public class Day4_25_2026_2 {
    public static void main(String[] args){
        ArrayList<Integer> numbers = new ArrayList<>();
        numbers.add(10);
        numbers.add(25);
        numbers.add(8);
        numbers.add(33);
        numbers.add(16);

        System.out.println("Over 20:");
        numbers.forEach(n ->{
            if(n >= 20){
                System.out.println(n);
            }
        });

        int[] total = {0};
        numbers.forEach(n->total[0]+=n);
        System.out.println("Total: "+total[0]);
    }
}
