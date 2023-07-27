#include<iostream>
using namespace std;
int main()
{
	int amount;
	int n1,n2,n5,n10,n20,n50,n100,n500;
	n1 = n2 = n5 = n10 = n20 = n50 = n100 = n500 =0;
	cout<<"Please Enter Your total Amount to find the notes : ";
	cin>>amount;
	switch(amount>=500)
	{
		case 1:
			n500 = amount/500; //n500=1300/500;--->2
        	amount -= n500 * 500;  // amount= amount-(n500*500);-->1300-1000=300;
            
        break;
	}
	switch(amount >=100)
	{
		case 1:
			n100 = amount/100;//n100=300/100--->3
        	amount -= n100 * 100;//--->amount=300-300=0;
        break;
	}
	switch(amount >=50)
	{
		case 1:
			n50 = amount/50;
        	amount -= n50 * 50; 
	}
	switch(amount >=20)
	{
		case 1:
			n20 = amount/20;
        	amount -= n20 * 20;
        break;
	}
	switch(amount >=10)
	{
		case 1:
			n10 = amount/10;
        	amount -= n10 * 10;
        break;
	}
	cout << "500 = " << n500 <<endl;
    cout << "100 = " << n100 <<endl;
    cout << "50 = " << n50 <<endl;
    cout << "20 = " << n20 <<endl;
    cout << "10 = " << n10 <<endl;
}