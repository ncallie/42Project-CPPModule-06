/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ncallie <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/30 17:58:00 by ncallie           #+#    #+#             */
/*   Updated: 2022/03/30 17:58:04 by ncallie          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "./inc/A.h"
#include "./inc/B.h"
#include "./inc/C.h"
#include "./inc/Base.h"

Base * generate(void) {
    Base * base;
    srand(time(NULL));
    int rand = (std::rand() % 3);
    switch (rand) {
        case 0:
            base = new A();
            std::cout << "Class A was created" << std::endl;
            break;
        case 1:
            base = new B();
            std::cout << "Class B was created" << std::endl;
            break;
        case 2:
            base = new C();
            std::cout << "Class C was created" << std::endl;
            break;
    }
    return base;
}

void identify(Base* p) {
    if (dynamic_cast<A *>(p)) {
        std::cout << "The class A is written to the pointer" << std::endl;
    } else if (dynamic_cast<B *>(p)) {
        std::cout << "The class B is written to the pointer" << std::endl;
    } else if (dynamic_cast<C *>(p)) {
        std::cout << "The class C is written to the pointer" << std::endl;
    } else {
        std::cout << "Unidentified class" << std::endl;
    }
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A &>(p);
        std::cout << "By reference, class A is stored" << std::endl;
    } catch (std::bad_cast a) {;}
    try {
        (void)dynamic_cast<B &>(p);
        std::cout << "By reference, class B is stored" << std::endl;
    } catch (std::bad_cast b) {;}
    try {
        (void)dynamic_cast<C &>(p);
        std::cout << "By reference, class C is stored" << std::endl;
    } catch (std::bad_cast c) {;}
}


int main() {
    Base *base = generate();
    identify(base);
    identify(*base);
}
