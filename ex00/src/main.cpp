/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:53:36 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/30 17:53:39 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../inc/Convert.h"

int foo_int(){
    return 0;
}

int main(int argc, char *argv[]) {
    if (argc != 2) {
        std::cout << "./ex00 [literal]" << std::endl;
        return 1;
    }
    Convert a(argv[1]);
    char c = static_cast<char>(a);
    int i = static_cast<int>(a);
    float f = static_cast<float>(a);
    double d = static_cast<double>(a);
}

