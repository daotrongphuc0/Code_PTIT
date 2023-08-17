<<<<<<< HEAD
﻿using System;
using DecoratorPattern.Base;
using DecoratorPattern.Decorators;

namespace DecoratorPattern
{
    class Program
    {
        static void Main(string[] args)
        {
            // TODO: Create an EggPuddingAndFruitPuddingBlackSugarBubbleMilkTea
            /* Get the cost()
             * It should be 14$
            */
            var firstMilkTea = new EggPudding(
                                new FruitPudding(
                                    new BlackSugar(
                                        new Bubble(
                                            new MilkTea()))));
            Console.WriteLine("EggPuddingAndFruitPuddingBlackSugarBubbleMilkTea:\t"
                                + firstMilkTea.Cost());

            // TODO: Create an EggPuddingBlackSugarWhiteBubbleMilkTea
            /* Get the cost()
             * It should be 11.5$
            */

            var secondMilkTea = new EggPudding(
                                    new BlackSugar(
                                        new WhiteBubble(
                                            new MilkTea())));
            Console.WriteLine("EggPuddingBlackSugarWhiteBubbleMilkTea:\t"
                                + secondMilkTea.Cost());
        }
    }
}
>>>>>>> 46171bafc32edbca31738f28145d2cb6863c2a1d
