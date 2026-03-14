package Java.Mar2026.Day3_13_2026;

public class Day3_13_2026 {
    public static void main(String[] args){
        int[] scores = {45,92,17,88,63,71,55};

        int max = scores[0];
        for(int i = 1;i<scores.length;i++){
            if(scores[i]> max){
                max = scores[i];
            }
        }

        int min = scores[0];
        for(int i = 1;i<scores.length;i++){
            if(scores[i]<min){
                min = scores[i];
            }
        }

        int total = 0;
        for(int score:scores){

            total +=score;
        }
        double avg = (double)total/scores.length;

        System.out.println("Max: " + max);
        System.out.println("Min: "+min);
        System.out.println("Total: "+total);
        System.out.println("Avg: "+avg);
    }
}
