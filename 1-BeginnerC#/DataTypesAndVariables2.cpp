using System;

namespace MoneyMaker
{
  class MainClass
  {
    public static void Main(string[] args)
    {
      Console.WriteLine("Welcome to Money Maker!");
      Console.WriteLine("Introduce the amount of money to convert: ");
      //USER INPUT
      double userNumber = Convert.ToDouble(Console.ReadLine());
      Console.Write($"{userNumber} is equal to...");
      
      //values
      double goldValue = 10;
      double silverValue = 5;
      //convert
      double goldCoins = Math.Floor(userNumber / goldValue);
      double goldLeft = userNumber % goldValue;

      double silverCoins = Math.Floor(goldLeft / silverValue);
      double reminder = Math.Floor(goldLeft % silverValue);

      Console.WriteLine($"Gold coins: {goldCoins}");
      Console.WriteLine($"Silver coins: {silverCoins}");
      Console.WriteLine($"Bronze coins: {reminder}");
    }
  }
}

