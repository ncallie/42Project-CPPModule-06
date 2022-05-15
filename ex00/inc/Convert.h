/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Convert.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:53:25 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/30 17:53:27 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>
#include <ostream>

class Convert {
private:
    Convert();
    std::string s_value;
public:
    Convert(std::string s_value);
    Convert(const Convert &other);
    Convert &operator = (const Convert &other);
    virtual ~Convert();

    operator char();
    operator int();
    operator float();
    operator double();
};

