using System;


namespace Feb2026.Days
{
    public class Day_2026_02_20
    {
        public void Run()
    {
        List<string> inventory = new List<string>();

        inventory.Add("Iron Sword");
        inventory.Add("Wooden Shield");
        inventory.Add("Health Potion");

        Console.WriteLine("=== Player Inventory ===");

        foreach (string item in inventory)
            {
                Console.WriteLine($"- Equipped: {item}");
            }
        Console.WriteLine("-------------------------------");

        if(inventory.Contains("Health Potion"))
            {
                Console.WriteLine("Action: Using Health Potion..");

                inventory.Remove("Health Potion");
            }

        Console.WriteLine($"Reemaing items in inventory: {inventory.Count}");
    }
  }
}