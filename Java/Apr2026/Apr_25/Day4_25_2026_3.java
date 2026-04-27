import java.util.ArrayList;
public class Day4_25_2026_3 {
    enum Priority{
        HIGH,MEDIUM,LOW
    }

    static class Task{
        String name;
        Priority priority;

        Task(String name, Priority priority){
            this.name=name;
            this.priority = priority;
        }
    }

    public static void main(String[] args) {
        ArrayList<Task> tasks = new ArrayList<>();
        tasks.add(new Task("Fix bug", Priority.HIGH));
        tasks.add(new Task("Write docs", Priority.LOW));
        tasks.add(new Task("Code review",Priority.MEDIUM));

        System.out.println("High Priority Tasks:");
        tasks.forEach(t->{
            if(t.priority==Priority.HIGH){
                System.out.println("- "+t.name);
            }
        });

    }
}

