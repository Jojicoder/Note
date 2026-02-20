package Java.Feb2026.Day2_20_2026;

public class Patient {
    String name;
    int age;

    public Patient(String name,int age){
        this.name = name;
        this.age = age;
    }

    public void displayInfo(){
        System.out.println("Patient Name: "+ name+ ", Age :" + age);
    }

    public static void main(String[] args){
        Patient p1 = new Patient("Joji",34);
        p1.displayInfo();
    }
}
