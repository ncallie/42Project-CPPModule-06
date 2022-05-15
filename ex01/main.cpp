/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:54:29 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/30 17:54:30 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "data.h"

uintptr_t serialize(Data* ptr){
    return reinterpret_cast<uintptr_t>(ptr);
}
Data* deserialize(uintptr_t raw) {
    return reinterpret_cast<Data *>(raw);
}

int main() {
    Data *data = new Data;
    uintptr_t a = 0;
    data->data = "string value";

    std::cout << "==========Before serialization=========="  << std::endl;
    std::cout << "Address: " << data << "\t" << "Data->string: "<<data->data << std::endl << std::endl ;

    std::cout << "==========After serialization=========="  << std::endl;
    a = serialize(data);
    std::cout << "uintptr_t in DEC = " << a << std::endl;
    std::cout << "uintptr_t in HEX = " << std::hex << a << std::endl << std::endl;


    std::cout << "==========After deserialization=========="  << std::endl;
    data = deserialize(a);
    std::cout << "Address: " << data << "\t" << "Data->string: " << data->data << std::endl;

    delete data;
    return 0;
}
