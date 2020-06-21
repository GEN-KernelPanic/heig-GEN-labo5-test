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
