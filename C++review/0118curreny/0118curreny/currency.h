#ifndef CURRENCY_H;
#define CURRENCY_H;


enum signType
{
	plus,minus
};

class currency
{
	public:
		currency(signType theSign = plus,
			unsigned long theDollars = 0,
			unsigned int theCents = 0);
		
		~currency();

		void setValue(signType theSign, unsigned long theDollars, unsigned int theCents);

		void setValue(double theAmount);

		//·µ»ØÕý¸ººÅ£»
		signType getSign()const
		{
			return sign;
		}

		unsigned long getDollars()const
		{
			return dollars;
		}

		unsigned int getCents()const
		{
			return cents;
		}

		currency add(const currency& x) const;

		currency increment(const currency& y);

		void output() const;

	private:
		signType sign;
		unsigned long dollars;
		unsigned int cents;

	};

currency::currency(signType theSign = plus,
	unsigned long theDollars = 0,
	unsigned int theCents = 0)
	{
	setValue(theSign, theDollars, theCents);
	}

void currency::setValue(signType theSign, unsigned long theDollars, unsigned int theCents)
{
	sign = theSign;
	dollars = theDollars;
	cents = theCents;
}

currency currency::add(const currency& x) const
{
	long a1, a2, a3;
	currency result;
	a1 = dollars * 100 + cents;
	a2 = x.dollars * 100 + x.cents;
	a3 = a1 + a2;
	result.dollars = a3 / 100;
	result.cents = a3 - result.dollars * 100;

	return result;
}

currency::~currency()
{

}



#endif