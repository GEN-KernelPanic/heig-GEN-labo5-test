/*
 -----------------------------------------------------------------------------------
 Labo        : 
 File        : Regular.cpp
 Author(s)   : Clarisse Fleurimont
 Date        : 21.06.2020
 Remark(s)   :
 -----------------------------------------------------------------------------------
*/

#include "Regular.hpp"

Regular::Regular(const std::string &title) : Movie(title, REGULAR) {}

int Regular::getPriceCode() const {
    return REGULAR;
}

int Regular::getAmount(int daysRented) const {
    int amount += 2;
    if (daysRented > 2)
        amount += (daysRented - 2) * 1.5;
    return amount;
}
