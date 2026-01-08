using System;
using System.Collections.Generic;

// いきなりロジックを書いてOK
var gymRecords = new Dictionary<string, int>();
gymRecords["Squat"] = 225;

Console.WriteLine($"Squat: {gymRecords["Squat"]} lbs");