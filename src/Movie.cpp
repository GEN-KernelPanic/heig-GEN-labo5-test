#include "Movie.h"

const int Movie::CHILDREN;
const int Movie::REGULAR;
const int Movie::NEW_RELEASE;

Movie::Movie(const std::string& title, int priceCode)
        : _title(title), _priceCode(priceCode) {}

int Movie::getPriceCode() const {
    return _priceCode;
}

void Movie::setPriceCode(int arg) {
    _priceCode = arg;
}

std::string Movie::getTitle() const {
    return _title;
}