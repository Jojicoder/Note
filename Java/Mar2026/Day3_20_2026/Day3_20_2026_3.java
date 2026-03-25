package Java.Mar2026.Day3_20_2026;

public class Day3_20_2026_3 {

    enum Day{
        MONDAY, TUESDAY,WEDNESDAY,
        THURSDAY,FRIDAY,SATURDAY,SUNDAY
    }

    public static void main(String[] args){
        Day today = Day.FRIDAY;

        System.out.println("Today: " + today);

        if(today == Day.FRIDAY){
            System.out.println("Weekend is coming!");
        }

        switch(today){
            case SATURDAY:
            case SUNDAY:
                System.out.println("Weekend!");
                break;
            default:
                    System.out.println("Weekday!");
                    break;
        }

    }
    
}
