class BigNumber {

private:

	char Number[256];

	int  CharactersCount;

public:

	BigNumber(); 

	BigNumber(int value);

	BigNumber(const char * number);

	BigNumber(const BigNumber & number);

	void printBigNumber();

	bool Set(int value);

	bool Set(const char * number);

	//void printNumber();

	//BigNumber operator+ (const BigNumber & number);

	//BigNumber operator* (const BigNumber & number);

	//BigNumber operator- (const BigNumber & number);

	//BigNumber operator/ (const BigNumber & number);

	//friend bool operator == (const BigNumber & n1, const BigNumber & n2);

	//friend bool operator != (const BigNumber & n1, const BigNumber & n2);

	//friend bool operator <  (const BigNumber & n1, const BigNumber & n2);

	//friend bool operator >  (const BigNumber & n1, const BigNumber & n2);

	//friend bool operator >= (const BigNumber & n1, const BigNumber & n2);

	//friend bool operator <= (const BigNumber & n1, const BigNumber & n2);

	//operator int();

	//char operator[] (int index); // returneaza caracterul de pe pozitia index sau \0 in rest

	//BigNumber operator() (int start, int end); // returneaza numarul de la caracterul dat de pozitia "start" pana la caracterul dat de pozitia "end" sau "0" daca start/end nu sunt valide.
	//~BigNumber();
};