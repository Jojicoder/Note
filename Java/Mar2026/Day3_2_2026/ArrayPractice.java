package Java.Mar2026.Day3_2_2026;

public class ArrayPractice {
    public static void main(String[] args){
        int[] scores = {80,92,75,88,95};
        int total = 0;
        double ave;
        for(int i = 0; i < scores.length;i++){
            System.out.print(scores[i]+" ");
            total += scores[i];
        }

        ave = total / scores.length;
        System.out.println(total);
        System.out.println(ave);
    }
}
