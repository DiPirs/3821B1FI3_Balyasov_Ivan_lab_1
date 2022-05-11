#pragma once

#include <string>
#include "Animal.h"
#include "Predator.h"
#include "Herbivore.h"
#include "Cage.h"

#include <iostream>
using namespace std;

class Zoo
{
private:
	Cage cage[10];
public:
	Zoo()
	{
		for (int i = 0; i < 10; i++)
			cage[i];
	}
	void Fill_zoo_rand()
	{
        bool* arr = new bool[10];
        for (int i = 0; i < 10; i++)
        {
            arr[i] = false;
        }
        srand(time(NULL));
        int num = 0, an = 0;
        while (an < 10)
        {
            switch (rand() % 10)
            {
            case 0:
            {
                if (arr[0] == false)
                {
                    cage[num].Put_animal_in_cage(new Lion);
                    arr[0] = true;
                    an++;
                    num++;
                }
                break;
            }
            case 1:
            {
                if (arr[1] == false)
                {
                    cage[num].Put_animal_in_cage(new Tigre);
                    arr[1] = true;
                    an++;
                    num++;
                }
                break;
            }
            case 2:
            {
                if (arr[2] == false)
                {
                    cage[num].Put_animal_in_cage(new Wolf);
                    arr[2] = true;
                    an++;
                    num++;
                }
                break;
            }
            case 3:
            {
                if (arr[3] == false)
                {
                    cage[num].Put_animal_in_cage(new Bear);
                    arr[3] = true;
                    an++;
                    num++;
                }
                break;
            }
            case 4:
            {
                if (arr[4] == false)
                {
                    cage[num].Put_animal_in_cage(new Sheep);
                    arr[4] = true;
                    an++;
                    num++;
                }
                break;
            }
            case 5:
            {
                if (arr[5] == false)
                {
                    cage[num].Put_animal_in_cage(new Cow);
                    arr[5] = true;
                    an++;
                    num++;
                }
                break;
            }
            case 6:
            {
                if (arr[6] == false)
                {
                    cage[num].Put_animal_in_cage(new Pig);
                    arr[6] = true;
                    an++;
                    num++;
                }
                break;
            }
            case 7:
            {
                if (arr[7] == false)
                {
                    cage[num].Put_animal_in_cage(new Rabbit);
                    arr[7] = true;
                    an++;
                    num++;
                }
                break;
            }
            case 8:
            {
                if (arr[8] == false)
                {
                    cage[num].Put_animal_in_cage(new Zebra);
                    arr[8] = true;
                    an++;
                    num++;
                }
                break;
            }
            case 9:
            {
                if (arr[9] == false)
                {
                    arr[9] = true;
                    an++;
                    num++;
                }
                break;
            }
            }
        }
	}
    void Excursion()
    {
        int number, k;

        cout << "Добро пожаловать в зоопарк!" << endl;
        cout << "В зоопарке 10 клеток. Вводите номер клетки для получения информации о ней." << endl;
        cin >> number;
        cout << "---------------------------------------" << endl;
        cout << "Клека " << number << ": " << endl;
        cage[number - 1].Tell_about_animal();
        cout << "---------------------------------------" << endl;
        cout << endl;
        cout << "Хотите продолжить изучать зоопарк?" << endl;
        cout << "1. Да" << endl;
        cout << "2. Нет" << endl;
        cin >> k;
        cout << endl;
        while (k == 1)
        {
            cout << "Введите номер клетки: " << endl;
            cin >> number;
            cout << "---------------------------------------" << endl;
            cout << "Клека " << number << ": " << endl;
            cage[number - 1].Tell_about_animal();
            cout << "---------------------------------------" << endl;
            cout << endl;
            cout << "Хотите продолжить изучать зоопарк?" << endl;
            cout << "1. Да" << endl;
            cout << "2. Нет" << endl;
            cin >> k;
            cout << endl;
        }
        cout << "Спасибо за посещение зоопарка!" << endl;
    }
};
