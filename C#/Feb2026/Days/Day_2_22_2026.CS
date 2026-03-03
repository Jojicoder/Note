using System;
using System.Collections.Generic;
using System.Linq;

namespace Feb2026.Days
{
    public class Character
    {
        public string Name{get; set;} = "";
        public int Level{get;set;}
        public int Hp{get; set;}

    }

    public class Day_2_22_2026
    {
        public void Run()
        {
            List<Character> party = new List<Character>
            {
                new Character {Name = "Arthur", Level = 15,Hp=120},
                new Character {Name = "Lancelot", Level = 12, Hp = 0},
                new Character {Name = "Merlin", Level = 20,Hp = 80},
                new Character {Name = "Gawain", Level = 10,Hp = 45}
            };

            Console.WriteLine("=== Alive Characters ===");

            var aliveNames = party
                .Where(c => c.Hp > 0)
                .Select(c => c.Name);

            foreach(string name in aliveNames)
            {
                Console.WriteLine($"Name: {name}");
            }

            Console.WriteLine("-------------------------------");

            int highLevelCount = party.Count(c => c.Level >= 15);
            Console.WriteLine($"High level characters count: {highLevelCount}");
        }
    }
}