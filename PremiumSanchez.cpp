/*
* Roberto Sanchez, sanc735@usc.edu
* ITP 165, Spring 2021
* Premium 
*/

#include <iostream>
using namespace std;

const double basePrice = 900; // dollar, premium base price
const double penalty = 100; // dollar 
const int minAge = 25; // for good rate
const int minDrivingYears = 5; // for good rate
const int minNumAccidents = 0; // for good rate
const int maxCarAge = 5; // for good rate
const int currentYear = 2021; // current year

int main()
{
    int age;            // driver age
    int drivingHistory; // driver num of years driving
    int numOfAccidents; // driver num of accidents in last 5 yrs
    int yearMade;       // year car was made
    double premium = basePrice;  // premium total -> base price 900
    int carAge;         // car age in years

    cout << "Welcome to RobCo Insurance Company. Before we can provide you "
         << "a quote, \nwe need you to answer the following questions:\n\n";

    cout << "What is your age? ";
    cin >> age; // store age

    cout << "How many years have you been driving? ";
    cin >> drivingHistory; // store years driving

    cout << "How many accidents have had in the last five years? ";
    cin >> numOfAccidents; // store driving history

    cout << "What year was your car made? ";
    cin >> yearMade; // store car year made

    // if age is under 25
    if (age < minAge)
    {
        premium += penalty; // increment premium by 100
    }

    // if driving history is less than 5 yrs
    if (drivingHistory < minDrivingYears)
    {
        premium += penalty; // increment premium by 100
    }

    // if num of accidents is more than 0
    if (numOfAccidents > minNumAccidents)
    {
        premium += penalty; // increment premium by 100
    }

    // calc age of car using current year
    carAge = currentYear - yearMade;

    // if car is older than 5 years
    if (carAge > maxCarAge)
    {
        premium += penalty; // increment premium by 100
    }

    cout << "\nYour insurance premium is $" << premium << "\n";

    return 0;
}