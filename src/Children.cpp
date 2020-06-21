/*
 -----------------------------------------------------------------------------------
 Labo        : 
 File        : Children.cpp
 Author(s)   : Clarisse Fleurimont
 Date        : 21.06.2020
 Remark(s)   :
 -----------------------------------------------------------------------------------
*/

#include "Children.hpp"

Children::Children(const std::string &title) : Movie(title, REGULAR) {}

int Children::getPriceCode() const {
    return CHILDREN;
}

int Children::getAmount(int daysRented) const {
    int amount += 1.5;
    if (daysRented > 3)
        amount += (daysRented - 3) * 1.5;
    return amount;
}
