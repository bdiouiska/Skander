#pragma once

#include <iostream>
#include <stdexcept>
#include <string>
#include <cassert>
#include <numeric>
#include <initializer_list>

#ifdef VECTOR_DEBUG
#define Debug(x) x
#else
#define Debug(x)
#endif
using std::size_t;

class Vector {
public:
	explicit Vector(size_t rows);
	Vector(size_t rows, double initValue);
	Vector(std::initializer_list<double> l);

	// rule of three
	// destructor
	~Vector();
	// copy constructor
	Vector(const Vector&);
	// copy assignment operator
	Vector& operator=(const Vector&);

	// rule of five
	// move constructor
	Vector(Vector&&) noexcept ;
	// move assignment operator
	Vector& operator=(Vector&&) noexcept ;

	friend void swap(Vector&, Vector&);


	inline double& operator()(size_t i) {
		return data[i];
	}

	inline const double& operator()(size_t i) const {
		return data[i];
	}

	bool operator ==(const Vector& b) const;
	bool operator !=(const Vector& b) const;

	Vector& operator +=(const Vector& b);
	Vector operator +(const Vector& b) const;
	Vector& operator -=(const Vector& b);
	Vector operator -(const Vector& b) const;
	Vector& operator *=(const Vector& b);
	Vector operator *(const Vector& b) const;

	double dot(const Vector& b) const;

	double* begin();
	double* end();
	const double* begin() const;
	const double* end() const;

	size_t size() const;

	// print the elements to a ostream object (i.e. standard output stream (cout), an ofstream file object, ...)
	friend std::ostream& operator <<(std::ostream&, const Vector&);

	// read the elements from a istream object
	friend std::istream& operator >>(std::istream&, Vector&);

private:
	size_t rows_;
	double* data;
};
