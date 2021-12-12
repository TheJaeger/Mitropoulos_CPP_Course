/*
Program to take an input of number from 1 - 100 and valide user's feeling so
they feel more secure.
*/

#include <iostream>

int main()
{
    int favoriteNumber;
    std::cout << "Enter your favorite number between 1 and 100: ";
    std::cin >> favoriteNumber;
    std::cout << "Amazing!! That's my favorite number too!" << std::endl;
	std::cout << "No really!! " << favoriteNumber << " is my favorite number!"
		<< std::endl;
    return 0;
}