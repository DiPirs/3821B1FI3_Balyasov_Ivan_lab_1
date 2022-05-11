#pragma once

#include <string>
#include "Animal.h"

#include <iostream>
using namespace std;

class Herbivore : public Animal
{

public:
    string Type_of_animal() override
    {
        return "Травоядное";
    }
    string Name_of_animal() override
    {
        return "";
    }
    string Voice_of_animal() override
    {
        return "";
    }
};

class Sheep : public Herbivore
{
public:
    string Name_of_animal() override
    {
        return "Овца";
    }
    string Voice_of_animal() override
    {
        return "Baaah";
    }
};

class Cow : public Herbivore
{
public:
    string Name_of_animal() override
    {
        return "Корова";
    }
    string Voice_of_animal() override
    {
        return "Moo-moo";
    }
};

class Pig: public Herbivore
{
public:
    string Name_of_animal() override
    {
        return "Свинья";
    }
    string Voice_of_animal() override
    {
        return "Oink-oink";
    }
};

class Rabbit : public Herbivore
{
public:
    string Name_of_animal() override
    {
        return "Кролик";
    }
    string Voice_of_animal() override
    {
        return "Fh-fh-fh";
    }
};

class Zebra : public Herbivore
{
public:
    string Name_of_animal() override
    {
        return "Зебра";
    }
    string Voice_of_animal() override
    {
        return "Igo-go";
    }
};

