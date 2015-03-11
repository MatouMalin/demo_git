#ifndef TEST
#define TEST

class A
{
public:
	A(void);

	/**
	 *	Destructor
	 */
	~A(void);

	int getValue(void) const {return mValue;}

private:
int mValue;
	
};


#endif 
