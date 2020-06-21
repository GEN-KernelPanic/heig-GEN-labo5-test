#include "Movie.hpp"

Movie::Movie(const std::string& title, int priceCode)
        : _title(title), _priceCode(priceCode) {}

std::string Movie::getTitle() const {
    return _title;
}