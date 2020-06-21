/*
 -----------------------------------------------------------------------------------
 Labo        : 
 File        : NewRelease.cpp
 Author(s)   : Clarisse Fleurimont
 Date        : 21.06.2020
 Remark(s)   :
 -----------------------------------------------------------------------------------
*/

#include "NewRelease.hpp"

NewRelease::NewRelease(const std::string &title) : Movie(title, NEW_RELEASE) {}

int NewRelease::getPriceCode() const {
    return NEW_RELEASE;
}
