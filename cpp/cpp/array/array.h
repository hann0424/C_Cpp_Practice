#ifndef ARRAY_H
#define ARRAY_H
//#define ARRAYSIZE 100

//static const in ARRAYSIZE;

class Array {
private:
	static const int ARRAYSIZE;

	int *pArr_;
	int size_;
	
public:
	explicit Array(int size = ARRAYSIZE);
	Array (const int *pArr, int size);
	Array (const Array& rhs);
	~Array();
	//Array(const Array& rhs) { memberwise copy }
	//=====
	Array& operator=(const Array& rhs);
	//Array& operator=(const Array& rhs) { memberwise copy return *this; }
	//Array *operator&() { return this; }
	//const Array *operator&() const { return this; }
	
	bool operator==(const Array& rhs) const;
	
	int& operator[](int index);
	const int& operator[](int index) const;
	
	int size() const;
};

#endif
