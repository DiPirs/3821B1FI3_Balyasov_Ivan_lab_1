#include <string>
#include <clocale>
#include <ctime>
#include "Animal.h"
#include "Predator.h"
#include "Herbivore.h"
#include "Cage.h"
#include "Zoo.h"

#include <iostream>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    
    Zoo MYzoo;
    MYzoo.Fill_zoo_rand();
    MYzoo.Excursion();
    
    return 0;
}