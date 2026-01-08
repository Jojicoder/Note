/*
using System;
using static System.Console;

var me  = new Adventurer("User");

WriteLine("--今日の活動開始--");

me.Study("C#の基礎");
me.Workout("スクワット 155lb");

me.Rest();
me.Study("LINQの学習");

class Adventurer
{
    public string Name;
    public int Energy = 10;

    public Adventurer(string name)
    {
        Name = name;
    }

    public void Study(string topic)
    {
        Energy -= 3;
        WriteLine($"{Name}は{topic}を勉強した。(残り体力:{Energy})");
    }

    public void Workout(string menu)
    {
        Energy -= 5;
        WriteLine($"{Name} は {menu} をした！キツイ (残り体力:{Energy})");
    }

    public void Rest()
    {
        Energy = 10;
        WriteLine($"{Name} はぐっすり寝て全回復した！");
    }
}*/