#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
	double re;
	double im;
	
public:
	Complex();							// default constructor
	Complex(double re);					// convert. const.
	Complex(double re, double im);
	~Complex();							// destructor

	//operator=(Complex c) 		// Overhead
	//void operator=(const Complex& rc);
	Complex& operator=(const Complex& rc);
	
	bool operator==(const Complex& rc);

	const Complex operator+(const Complex& rc);
	const Complex operator-(const Complex& rc);
	const Complex operator*(const Complex& rc);
	const Complex operator/(const Complex& rc);
	
	double real();
	double imag();
	
	void real(double re);
	void imag(double im);
};

#endif
