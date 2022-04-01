//is n prime?

#include <iostream>
#include "../include/nth.h"
#include <limits>

int main ()
{
    int n;
    int j = 0;
    int i;
    char replay = 'Y';

    do {
        system("clear");
        std::cout << "Enter a whole number 'n' (numbers less than 100,000 advisable):" << std::endl;
        while (!(std::cin >> n) || n < 0)
        {
            system("clear");
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "Invalid input; please re-enter number n.\n";
        }


        for (i = 2; j < n; i++) 
        {
            if (isPrime(i))
            j++;
        }

        std::cout << n << "th prime is: " << i -1 << std::endl;
        std::cout << "Try another number? (Y/N)" << std::endl;
        std::cin >> replay;

        j = 0;

    } while (replay == 'Y' || replay == 'y');
    
    return 0;
}