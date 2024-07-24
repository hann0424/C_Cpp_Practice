#ifndef COMPLEX_H
#define COMPLEX_H

class Complex {
private:
	// implementation
	double re;
	double im;
	
public:
	// interface
	Complex();					// functuon overlodaing --> one-interface-multi-method
	Complex(double re);
	Complex(double re, double im);
	~Complex();
	
	void assign(Complex c);
	void assign2(const Complex *pc);
	void assign3(const Complex &rc);
	
	bool equals(const Complex &rc);
	
	double real();
	double imag();
	
	void real(double re);
	void imag(double im);
};

#endif
