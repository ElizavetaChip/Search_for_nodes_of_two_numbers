#pragma once

/*!
* Переводит число из римской системы счисления в арабскую
*\param [in] s - строка, в которой записано римское число
*\return - числовой эквивалент римскому числу (-1, если входные данные некорректны)
*/
int roman_to_int(const char* s);


/*!
* Находит наибольший общий делитель двух целых положительных чисел
*\param [in] a - первое целое число
*\param [in] b - второе целое число
*\return - наибольший общий делитель (0, если входные данные некорректны)
*/
unsigned int greatest_common_divisor(unsigned int a, unsigned int b);



/*!
* Делит дробь и возвращает целую часть (без округления)
*\param [in] numerator - числитель дроби
*\param [in] denominator - знаменатель дроби
*\return - целая часть от деления (-1, если знаменатель равен 0)
*/
int int_part_of_fraction(int numerator, int denominator);