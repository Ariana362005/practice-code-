#include <iostream>
using namespace std;
int main (){
	
	char symbol1, symbol2, symbol3;

	cout<< "symbol1[@,#,$,%,^]:";
	cin>> symbol1;
	cout<< "symbol2[@,#,$,%,^]:";
	cin>>symbol2;
	cout<<"symbol3[@,#,$,%,^]:";
	cin>>symbol3;
	
	cout<< "you picked: "<<symbol1<<symbol2<<symbol3<<endl;
	
	cout<< "f\n";
	 for (int i = 1; i <= 9; ++i) { 
        for (int j = 1; j <= 9; ++j) { 
		cout<<symbol1;
        
        } 
        cout << endl; 
    }
     cout<< "g\n";
		for (int i = 1; i <= 5; ++i) {
	    for (int j = 1; j <= 10; ++j){
		cout<<symbol1;
	 }
	 cout<<endl;
	 if (i<9){
		cout<<endl;
	 }
	 }	
	 cout<<"h\n";
	 for (int i = 1; i <= 7; ++i) {
        for (int j = 1; j <= i; ++j) {
        cout << symbol3;
        }
        cout << "^";
        cout << endl; //
    }
    for (int i = 6; i >= 1; --i) {
        
        for (int j = 1; j <= i; ++j) {
        cout << symbol3;
        }
       
        cout << "^";
        cout << endl; 
    }
	cout<< "I\n";
    for (int i=1;i<=5;i++){
	for (int j = i; j>=1; j--){
	cout << "^" ;
	}
       cout << "*\n";
}
    for (int i=1;i<=2;i++){
	for (int j =1;j<=2;j++){
		cout<<"#####";
	}
	cout<< "^^^^^*\n";
}
   for (int i = 5; i >= 1;i--){   //row
	   for ( int j = 1; j <=i;j++){// column
	   cout<<"^";	
	   }
           cout<< "*"<<endl;
        }
      return 0;

}