﻿

#include <iostream>

int roman_to_int(const char* s);
unsigned int greatest_common_divisor(unsigned int a, unsigned int b);
int int_part_of_fraction(int numerator, int denominator);


int main()
{
    std::cout << "Hello World!\n";
}

int roman_to_int(const char* s)
{
    //Проверка входной строки (римского числа) на недопустимые символы
    const char roman_ch[7] = { 'M', 'D', 'C', 'I', 'X', 'L', 'V' };
    bool isRoman = true;
    for (int i = 0; i < strlen(s) && isRoman; i++)
    {
        isRoman = false;
        for (int j = 0; j < 7; j++)
        {
            if (s[i] == roman_ch[j])
                isRoman = true;
        }

    }
    if (!isRoman) //Если есть недопустимые символы - вернуть -1 и завершить работу функции
        return -1;


    map<char, int> roman; //Переменная, хранящая римскую букву и ее числовой эквивалент
    roman['M'] = 1000;
    roman['D'] = 500;
    roman['C'] = 100;
    roman['L'] = 50;
    roman['X'] = 10;
    roman['V'] = 5;
    roman['I'] = 1;

    int res = 0;
    //Для каждой буквы числа, кроме последней
    for (int i = 0; i < strlen(s) - 1; i++)
    {
        //Если текущее число(эквивалент букве) меньше следующего, вычесть это число из результата
        if (roman[s[i]] < roman[s[i + 1]])
            res -= roman[s[i]];
        //Иначе прибавить это число к результату
        else
            res += roman[s[i]];
    }
    //Прибавить последнее число (последнюю букву)
    res += roman[s[strlen(s) - 1]];

    return res;
}

unsigned int greatest_common_divisor(unsigned int a, unsigned int b)
{
    //Проверить не равны ли числа 0
    if (a == 0 || b == 0)
        return 0; //если хотя бы одно число равно нулю - вернуть 0 (ошибка)

    //Проверить, равны ли a и b...
    if (a == b)
        return a; //Если равны, вернуть значение этих чисел и завершить выполнение функции

    //Проверить, больше ли a чем b...      
    if (a > b)
    {
        return greatest_common_divisor(a - b, b);//  Если a больше, чем b, функция возвращает число, полученное от вызова самой себя с аргументами (a-b) и b и завершает выполнение 
    }
    return greatest_common_divisor(a, b - a); //Иначе Функция возвращает число, полученное от вызова самой себя с аргументами a и (b-a) и завершает выполнение
}

int int_part_of_fraction(int numerator, int denominator)
{
    //Если знаменатель равен 0 - вернуть -1 (ошибка)
    //Иначе вернуть результат деления без остатка и без округления
  
    return 0;
}