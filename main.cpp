// Name: Jong Kevin Kim
// This program calculates and displays business expenses.

#include <iostream>

int main()
{
  int trip_location, days;
  double hotel_expense, meal_expense, total;

  //Write intrduction and questions.
  std::cout<< "Welcome to the Business Trip Tracker!\n";
  std::cout<< "What is the business trip location?\n";
  std::cin>> trip_location;
  std::cout<< "How many days will the trip take?\n";
  std::cin>> days;
  std::cout<< "What is the total hotel expense?\n";
  std::cin>> hotel_expense;
  std::cout<< "What is the total meal expense?\n";
  std::cin>> meal_expense;
  

  //Calculate the tip location, days, and total cost.

  total = hotel_expense + meal_expense;


  return 0;
}
