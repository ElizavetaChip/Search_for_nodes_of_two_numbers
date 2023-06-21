#include <iostream>
#include <stdio.h>
#include <map> 
#include "Search_for_nodes_of_two_numbers.h"

using namespace std;

int main()
{
    
    setlocale(LC_ALL, ""); //для вывода сообщений русскими буквами

    //Проверка на кол-во введенных римских чисел
    if (argc != 5)  //Если введено не 4 числа - вывести ошибку и завершить программу
    {
        printf("Недопустимое количество чисел. Введите четыре числа через пробел.\n");
        return 1;
    }

    //Скопировать первый аргумент (первую римскую букву) в переменную
    char number1[10];
    strcpy_s(number1, argv[1]);

    //Скопировать второй аргумент в переменную
    char number2[10];
    strcpy_s(number2, argv[2]);

    //Скопировать третий аргумент в переменную
    char number3[10];
    strcpy_s(number3, argv[3]);

    //Скопировать четвертый аргумент в переменную
    char number4[10];
    strcpy_s(number4, argv[4]);
    

    //Проверка введенных чисел на наличие недопустимых символов
    const char roman_ch[7] = { 'M', 'D', 'C', 'I', 'X', 'L', 'V' };
    bool dataCorrect = true;

    bool isRoman = true;
    for (int i = 0; i < strlen(number1) && isRoman; i++)    //Проверка первого числа
    {
        isRoman = false;
        for (int j = 0; j < 7; j++)
        {
            if (number1[i] == roman_ch[j])
                isRoman = true;
        }

    }
    if (!isRoman) //Если римское число содержит недопустимые символы - вывести сообщение об ошибке и считать данные некорректными
    {
        printf("Число \"%s\" содержит недопустимые символы.", number1);
        dataCorrect = false;
    }


    isRoman = true;
    for (int i = 0; i < strlen(number2) && isRoman; i++) //Проверка второго числа
    {
        isRoman = false;
        for (int j = 0; j < 7; j++)
        {
            if (number2[i] == roman_ch[j])
                isRoman = true;
        }

    }
    if (!isRoman) //Если римское число содержит недопустимые символы - вывести сообщение об ошибке и считать данные некорректными
    {
        printf("Число \"%s\" содержит недопустимые символы.", number2);
        dataCorrect = false;
    }

    isRoman = true;
    for (int i = 0; i < strlen(number3) && isRoman; i++) //Проверка третьего числа
    {
        isRoman = false;
        for (int j = 0; j < 7; j++)
        {
            if (number3[i] == roman_ch[j])
                isRoman = true;
        }

    }
    if (!isRoman) //Если римское число содержит недопустимые символы - вывести сообщение об ошибке и считать данные некорректными
    {
        printf("Число \"%s\" содержит недопустимые символы.", number3);
        dataCorrect = false;
    }

    isRoman = true;
    for (int i = 0; i < strlen(number4) && isRoman; i++) //Проверка четвертого числа
    {
        isRoman = false;
        for (int j = 0; j < 7; j++)
        {
            if (number4[i] == roman_ch[j])
                isRoman = true;
        }

    }
    if (!isRoman) //Если римское число содержит недопустимые символы - вывести сообщение об ошибке и считать данные некорректными
    {
        printf("Число \"%s\" содержит недопустимые символы.", number4);
        dataCorrect = false;
    }

    if (!dataCorrect) //Если данные некорректны (есть недопустимые символы хотя бы в одном из чисел) - завершить программу
        return 1;
    
    //Перевод числа из римской системы счисления в арабскую
    int num1 = roman_to_int(number1);
    int num2 = roman_to_int(number2);
    int num3 = roman_to_int(number3);
    int num4 = roman_to_int(number4);

    //Проверка того, что числитель должен быть больше или равен знаменателю
    //Если данные некорректны (числитель меньше знаменателя) - завершить программу
    //Проверка чисел на допустимый диапазон [1..3000]
    //Если данные некорректны (числа не принадлежат диапазону) - завершить программу
       

    //Найти результаты деления двух дробей
    int res1 = int_part_of_fraction(num1, num2);
    int res2 = int_part_of_fraction(num3, num4);

    //Найти наибольший общий делитель полученных результатов
    int result;
    result = greatest_common_divisor(res1, res2);

    //Вывод результата
    printf("%d\n", result);
    return 0;
 
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
    if (denominator == 0)
        return -1;

    //Иначе вернуть результат деления без остатка и без округления
    return (numerator / denominator);
}