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
