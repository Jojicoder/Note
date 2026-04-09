package Java.Apr2026.Apr_6;
import java.util.ArrayList;

class Player{
        String name;
        int hits;
        int atBats;

        double getAverage(){
            if(atBats==0 )return 0;
            return (double)hits /atBats;
        }
    }
    
public class Day4_6_2026 {

    public static void main(String args[]){

        ArrayList<Player> players = new ArrayList<>();

        Player p1 = new Player();
        p1.name = "Joji";
        p1.hits = 30;
        p1.atBats = 120;
        players.add(p1);
         for(Player p:players){
            System.out.println(p.name+" AVG: " + p.getAverage());
         }
    
    }

   
}
