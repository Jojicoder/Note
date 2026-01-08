using System;
using System.Collections.Generic;

namespace GymApp
{
    // C#はすべての関数が必ず何らかの「クラス」の中にないといけません
    class Program
    {
        // プログラムの入り口（エントリーポイント）
        static void Main(string[] args)
        {
            // --- ここから中身は同じです ---
            
            var gymRecords = new Dictionary<string, int>
            {
                { "Bench Press", 155 },
                { "Squat", 225 },
                { "Deadlift", 275 }
            };

            // 記録更新
            gymRecords["Bench Press"] = 160;

            // 新種目追加
            gymRecords["Overhead Press"] = 95;

            Console.WriteLine("--- Current Stats (lbs) ---");

            foreach (var item in gymRecords)
            {
                // 左揃え(-15)で綺麗に表示
                Console.WriteLine($"{item.Key,-15} : {item.Value} lbs");
            }
            
            // --- ここまで ---
        }
    }
}