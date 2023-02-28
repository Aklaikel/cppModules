/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/04 18:32:23 by aklaikel          #+#    #+#             */
/*   Updated: 2022/07/04 23:14:09 by aklaikel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Array.hpp"

#define MAX_VAL 750
int main(int, char**)
{
    Array<int> numbers(MAX_VAL);
    int* mirror = new int[MAX_VAL];
    srand(time(NULL));
    for (int i = 0; i < MAX_VAL; i++)
    {
        const int value = rand();
        numbers[i] = value;
        mirror[i] = value;
    }
    //SCOPE
    {
        Array<int> tmp = numbers;
        Array<int> test(tmp);
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        if (mirror[i] != numbers[i])
        {
            std::cerr << "didn't save the same value!!" << std::endl;
            return 1;
        }
    }
    try
    {
        numbers[-2] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    try
    {
        numbers[MAX_VAL] = 0;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    for (int i = 0; i < MAX_VAL; i++)
    {
        numbers[i] = rand();
    }
    delete [] mirror;//
    std::cout << "-------------------------main 2 -------------\n";
     Array<int> arr(5);
    arr[0] = 1; 
    arr[1] = 2; 
    arr[2] = 3; 
    arr[3] = 4; 
    arr[4] = 5; 
    
    for (size_t i = 0; i < arr.size(); ++i) std::cout << arr[i] << " ";
    for (size_t i = 0; i < arr.size(); ++i) arr[i] *= arr[i];
    std::cout << '\n';
    for (size_t i = 0; i < arr.size(); ++i) std::cout << arr[i] << " ";
    std::cout << '\n';

    try {
        arr[5];
    } catch (std::exception &e) {
        std::cout << e.what() << '\n';
    }
    
    Array<std::string> MyArray(3);
    MyArray[0] = "Hello "; 
    MyArray[1] = "night "; 
    MyArray[2] = "city"; 
    Array<std::string> MyArray_cpy(MyArray);
    std::cout << "myarray : " << MyArray[0] << '\n';
    std::cout << "myarray : " << MyArray[1] << '\n';
    std::cout << "myarray : " << MyArray[2] << '\n';
    std::cout << "the copy : " << MyArray_cpy[0] << '\n';
    std::cout << "the copy : " << MyArray_cpy[1] << '\n';
    std::cout << "the copy : " << MyArray_cpy[2] << '\n';
    return 0;
}