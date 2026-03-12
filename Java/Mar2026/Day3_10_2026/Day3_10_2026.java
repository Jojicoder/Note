package Java.Mar2026.Day3_10_2026;

public class Day3_10_2026 {
    public static void main(String[] arg){
        int[] process =  {7,1,5,3,6,4};
        int x=0;

        for(int i =0;i < process.length-1;i++)
            for(int j=i+1;j<process.length;j++){
                if(x<process[j]-process[i])
                    x = process[j]-process[i];
        }
    
            System.out.println(x);
        

  

    }
}
