package Java.Mar2026.Day3_14_2026;
import java.util.ArrayList;
import java.util.Collections;

public class Day3_14_2026 {
    public static void main(String[] args) {
        ArrayList<Integer> numbers = new ArrayList<>();

        // 数字を追加
        numbers.add(45);
        numbers.add(92);
        numbers.add(17);
        numbers.add(88);
        numbers.add(63);

        // ソート前
        System.out.println("Before: " + numbers);

        // 昇順ソート
        Collections.sort(numbers);
        System.out.println("Ascending: " + numbers);

        // 降順ソート
        Collections.reverse(numbers);
        System.out.println("Descending: " + numbers);

        // 最大値・最小値
        System.out.println("Max: " + Collections.max(numbers));
        System.out.println("Min: " + Collections.min(numbers));
    }
    
    
}
