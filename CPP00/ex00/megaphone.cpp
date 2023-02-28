/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aklaikel <aklaikel@student.42.fr>           +#+  +:+       +#+         */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/03 21:09:46 by aklaikel           #+#    #+#             */
/*   Updated: 2022/05/03 21:09:47 by aklaike           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av){
    if (ac == 1)
    {
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *"<< std::endl;
        return(0);
    }
    for(int i=1; i < ac ; i++)
    {
        for(int j=0; av[i][j]; j++)
            av[i][j] = toupper(av[i][j]);
        std :: cout << av[i] << " ";
    }
    std::cout << std::endl;
    return 0;
}