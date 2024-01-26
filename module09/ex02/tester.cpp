
// function that make a ramdom array of potsitive interger the lenght 
// must be between 2 and 3000 (randomSize) and cant have the same number twice

#include <iostream>
#include <string>
#include <stdexcept>
#include <cstdlib>
#include <ctime>

int main()
{
    int ARRAY_SIZE = std::rand() % (3000 - 2 + 1) + 2;

    int ramdomSizeArray[ARRAY_SIZE];
    // ramdomSizeArray cant have twice the same number and 0
    for (int i = 0; i < ARRAY_SIZE; i++)
    {
        ramdomSizeArray[i] = std::rand() % (3000 - 0 + 1) + 0;
        for (int j = 0; j < i; j++)
        {
            if (ramdomSizeArray[i] == ramdomSizeArray[j])
            {
                ramdomSizeArray[i] = std::rand() % (3000 - 0 + 1) + 0;
                j = -1;
            }
        }
    }
    // std::cout << "Unsorted input: ";
    for (int i = 0; i < ARRAY_SIZE; i++)
        std::cout << ramdomSizeArray[i] << ' ';
    std::cout << std::endl;
}