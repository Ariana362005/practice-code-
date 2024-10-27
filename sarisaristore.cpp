#include <iostream>
using namespace std;
int main () 
{
	string name;
	double cofeeinpound=1,milkindollar=1,riceinpound=1,sardinesdollar=1;
	double cofeephp,milkphp,ricephp,sardinesphp;
	double cofeeqty,milkqty,riceqty,sardinesqty;
	double usdtophp=56;
	double poundtophp=75;
	int totalpriceinphp;
	int total;
	
	cout<< "hi pls enter ur name\n";
	cin>> name;
	cout<< "how much is the coffeinpound?\n";
	cin>> cofeeinpound;
	cout<< "how much milkindollar?\n";
	cin>> milkindollar;
	cout<< "how much riceinpound?\n";
	cin>> riceinpound;
	cout<< "how much sardinesindollar?\n";
	cin>> sardinesdollar;
	cout<<"***********************\n";
	cout<< "cofeeqty\n";
	cin>> cofeeqty;
	cout<< "milkqty\n";
	cin>> milkqty;
	cout<< "riceqty\n";
	cin>> riceqty;
	cout<< "sardinesqty\n";
	cin>> sardinesqty;
	
   cofeephp=(cofeeinpound*poundtophp*riceqty);
   cout<<"cofeephp"<<cofeephp<<endl;
   milkphp=(milkindollar*usdtophp*milkqty);
   cout<<"milkphp"<<milkphp<<endl;
   ricephp=(riceinpound*poundtophp*riceqty);
   cout<< "ricephp"<<ricephp<<endl;
   sardinesphp=(sardinesdollar*usdtophp*sardinesqty);
   cout<<"sardinespphp"<<sardinesphp<<endl;
   
   cout<<"cofeeqty"<<cofeeqty<<"milkqty"<<milkqty<<"riceqty"<<riceqty<<"sardinesqty"<<sardinesqty<<endl;
   
   total=(cofeephp+milkphp+ricephp+sardinesphp);
   cout<<"total"<<total<<endl;
  	return 0;
} 