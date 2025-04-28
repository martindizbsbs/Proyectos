using System;

namespace SumaDeDosNum

{
    class Program
    {
   static void Main(string[] args)
    {
        Console.Write ("Ingresa el primer num:");
        double num1= Convert.ToDouble(Console.ReadLine());
        Console.Write("Ingresa el primer num:");
        double num2= Convert.ToDouble(Console.ReadLine());
        double suma =num1+num2;
        
        Console.WriteLine ($"la suma de {num1}+{num2}es {suma}");
        Console.ReadKey();
        
    }
}
}
