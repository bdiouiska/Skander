#include "Vector.h"

Vector::Vector(size_t rows, double initValue) {
    //FIXME
}

Vector::Vector(size_t rows) {
    //FIXME
}

Vector::Vector(std::initializer_list<double> l) {
    //FIXME
}

// destructor
Vector::~Vector() {
    //FIXME
}

// Copy constructor
Vector::Vector(const Vector& other) {
    //FIXME
}

// Move constructor
Vector::Vector(Vector&& other) noexcept {
    //FIXME
}

// Copy assignment operator
Vector& Vector::operator=(const Vector& other) {
    //FIXME
    return *this;
}

// Move assignment operator
Vector& Vector::operator=(Vector&& other) noexcept {
    //FIXME
    return *this;
}

void swap(Vector& a, Vector& b) {
    //FIXME
}

bool Vector::operator ==(const Vector& b) const {
    //FIXME
    return true;
}

bool Vector::operator !=(const Vector& b) const {
    //FIXME
    return false;
}

Vector& Vector::operator +=(const Vector& b) {
    //FIXME
    return *this;
}

Vector Vector::operator +(const Vector& b) const {
    //FIXME
    return *this;
}

Vector& Vector::operator -=(const Vector& b) {
    //FIXME
    return *this;
}

Vector Vector::operator -(const Vector& b) const {
    //FIXME
    return *this;
}

Vector Vector::operator *(const Vector& b) const {
    //FIXME
    return *this;
}

Vector& Vector::operator *=(const Vector& b) {
    //FIXME
    return *this;
}

// print matrixelements to stream
std::ostream& operator <<(std::ostream &outputStream, const Vector& m) {
    //FIXME
    return outputStream;
}

// read matrixelements from stream
std::istream& operator >>(std::istream &inputStream, Vector& m) {
    //FIXME
    return inputStream;
}

double* Vector::begin() {
    //FIXME
    return nullptr;
}
double* Vector::end() {
    //FIXME
    return nullptr;
}
const double* Vector::begin() const {
    //FIXME
    return nullptr;
}
const double* Vector::end() const {
    //FIXME
    return nullptr;
}

size_t Vector::size() const {
    //FIXME
    return 0;
}

double Vector::dot(const Vector& b) const {
    //FIXME
    return 0;
}