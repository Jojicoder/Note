package Java.Mar2026.Day3_10_2026;

public class Day3_10_2026_2 {
    public static void main(String[] arg){
        int[] prices =  {7,1,5,3,6,4};
        int minPrice = Integer.MAX_VALUE;
        int maxProfit =0;

        for(int price : prices){
            minPrice = Math.min(minPrice,price);
            maxProfit = Math.max(maxProfit, price-minPrice);
        }
        System.out.println(maxProfit);
    }
}
