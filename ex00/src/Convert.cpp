/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:53:33 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/30 17:53:35 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/Convert.h"

Convert::Convert() : s_value("42") {
}

Convert::Convert(std::string s_value) : s_value(s_value){
}

Convert::Convert(const Convert &other) :s_value(other.s_value){
}

Convert &Convert::operator=(const Convert &other)  {
    this->s_value = other.s_value;
    return *this;
}

Convert::~Convert() {
}

Convert::operator char() {
    long long ll_value = 0;
    char c_value = 0;
    try
    {
        ll_value = stoll(s_value);
    }
    catch(std::exception &ex)
    {
        std::cout << "char: impossible" << std::endl;
        return (c_value);
    }
    c_value = static_cast<char>(ll_value);
    if (c_value < 32 || c_value > 126)
    {
        std::cout << "char: Non displayable" << std::endl;
        return (0);
    }
    std::cout << "char: '" << c_value << "'" <<std::endl;
    return (c_value);
}

Convert::operator int() {
    int i_value = 0;
    try {
        i_value = stoi(s_value);
        std::cout << "int: " << i_value << std::endl;
    } catch(std::exception &ex) {
        std::cout << "int: impossible" << std::endl;
        return (i_value);
    }
    return (i_value);
}

Convert::operator float() {
    float f_value = 0;
    try {
        f_value = stof(s_value);
        std::cout << "float: " << f_value << "f" << std::endl;
    } catch(std::exception &ex) {
        std::cout << "float: impossible" << std::endl;
        return (f_value);
    }
    return (f_value);
}

Convert::operator double() {
    double d_value = 0;
    try {
        d_value = stod(s_value);
        std::cout << "double: " << d_value << std::endl;
    } catch(const std::exception &e) {
        std::cout << "double: impossible" << std::endl;
        return (d_value);
    }
    return (d_value);
}






