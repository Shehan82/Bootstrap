#include<iostream>
using namespace std;
class date
{
	private:
		int month;
		int year;
		int day;
	public:
		date(int =10, int=2018, int=23);
};
date::date(int mm, int yy, int dd)
{
	month=mm;
	year=yy;
	day=dd;
	cout<<"the date you entered"<<month<<"\t"<<day<<"\t"<<month<<endl;
	
}
int main()
{
	date a;
	date b;
	date c(9,1997,20);
	return 0;
}
