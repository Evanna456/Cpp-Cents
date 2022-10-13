#include <iostream>

int main()
{
    int cents;
    int dollars;
    int quarters;
    int dimes;
    int nickel;
    int penny;
    std::cout << "Enter Cents: ";
    std::cin >> cents;
    dollars = cents / 100;
    int dollars_remainder = cents % 100;
    quarters = dollars_remainder / 25;
    int quarters_remainder = cents % 25;
    dimes = quarters_remainder / 10;
    int dimes_remainder = quarters_remainder % 10;
    nickel = dimes_remainder / 5;
    int nickel_remainder = dimes_remainder % 5;
    penny = nickel_remainder / 1;
    std::cout << "Dollars: " << dollars  << "\n";
    std::cout << "Quarters: " << quarters << "\n";
    std::cout << "Dimes: " << dimes << "\n";
    std::cout << "Nickel: " << nickel << "\n";
    std::cout << "Penny: " << penny << "\n";
    std::cout << "Press any key to exit the console...";
    std::cin.ignore();
    std::cin.get();
    return 0;
}




