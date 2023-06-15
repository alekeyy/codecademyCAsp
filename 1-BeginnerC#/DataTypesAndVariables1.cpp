using System;

namespace MadLibs
{
  class Program
  {
    static void Main(string[] args)
    {
      /*
      This program ... does what codecademy wants me to do
      Author: ... alekey
      */


      // Let the user know that the program is starting:

      Console.WriteLine("PROGRAM IS RUNNIN'");
      // Give the Mad Lib a title:
      string title = "Mi Historia";

      Console.WriteLine(title);
      // Define user input and variables:
      Console.Write("TYPE USER NAME: ");
      string name = Console.ReadLine();

      Console.WriteLine("Now you will type a: ");

      Console.Write("adjective 1: ");
      string adj1 = Console.ReadLine();
      Console.Write("adjective2: ");
      string adj2 = Console.ReadLine();
      Console.Write("adjective3: ");
      string adj3 = Console.ReadLine();

      Console.Write("Verb: ");
      string verb = Console.ReadLine();

      Console.Write("Noun1: ");
      string noun1 = Console.ReadLine();
      Console.Write("Noun2: ");
      string noun2 = Console.ReadLine();

      Console.WriteLine("Here comes the big input: ");
      Console.Write("Animal: ");
      string animal = Console.ReadLine();
      Console.WriteLine("Here comes the big input: ");
      Console.Write("Food: ");
      string food = Console.ReadLine();
      Console.WriteLine("Here comes the big input: ");
      Console.Write("Fruit: ");
      string fruit = Console.ReadLine();
      Console.WriteLine("Here comes the big input: ");
      Console.Write("Superhero: ");
      string superhero = Console.ReadLine();
      Console.WriteLine("Here comes the big input: ");
      Console.Write("Country: ");
      string country = Console.ReadLine();
      Console.WriteLine("Here comes the big input: ");
      Console.Write("Dessert: ");
      string dessert = Console.ReadLine();
      Console.WriteLine("Here comes the big input: ");
      Console.Write("Year: ");
      string year = Console.ReadLine();
      // The template for the story:

      string story = $"This morning {name} woke up feeling {adj1}. 'It is going to be a {adj2} day!' Outside, a bunch of {animal}s were protesting to keep {food} in stores. They began to {verb} to the rhythm of the {noun1}, which made all the {fruit}s very {adj3}. Concerned, {name} texted {superhero}, who flew {name} to {country} and dropped {name} in a puddle of frozen {dessert}. {name} woke up in the year {year}, in a world where {noun2}s ruled the world.";


      // Print the story:
      Console.WriteLine(story);
    }
  }
}
