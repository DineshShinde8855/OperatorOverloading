#include <iostream>
using namespace std;

class Calculus
{
	
  int value;

  public:
	Calculus()
	{

	}
	Calculus(int value)
	{
		this->value = value;
	}

	int operator+(const Calculus& calc) //This operator will resoolve calc.add(cal1), Member function type ooperator overloading
	{
		cout<<"int operator+(const Calculus& calc)"<<endl;
		return this->value + calc.value;			
	}


	// this function will be called when sum=10+obj,Why friend function need to check ??
	friend int operator+(int val, const Calculus& calc) //This operator will resoolve add(val,cal1)
	{
		cout<<"int operator+(int val,const Calculus& calc)"<<endl;
		return val + calc.value;
	}

	// this function will be called when sum=obj+10
	friend int operator+(const Calculus& calc,int val) //This operator will resoolve add(cal1,this)
	{
		cout<<"int operator+(const Calculus& calc,int val)"<<endl;
		return val + calc.value;
	}

	// this function will be called when substract = 10-obj,Why friend function need to check ??
	int operator-(const Calculus& calc) //This operator will resoolve calc.sub(cal1)
	{
		cout<<"int operator-(const Calculus& calc)"<<endl;
		return this->value - calc.value;
	}

	friend int operator-(int val, const Calculus& calc) //This operator will resoolve sub(int,cal1)
 	{
		cout<<"int operator-(int val, const Calculus& calc)"<<endl;
		return val - calc.value;
 	}

	friend int operator-(const Calculus& calc,int val) //This operator will resoolve sub(cal1,int)
 	{
		cout<<"int operator+(const Calculus& calc,val)"<<endl;
		return val - calc.value;
 	}

	~Calculus()
	{
		cout<<"Destructor called"<<endl;
	}
};


int main()
{
	Calculus s(10);
	Calculus s1(20);
	int sum=s+s1;
	int sum1=2+s;
	int sum2=s1+66;

	Calculus ob1(50);
	Calculus ob2(30);
	
	int sub=ob1-ob2;
	sub=70- ob1;
	sub=ob2- 15;


}
