#include <iostream>
using namespace std;
int main (){
  char pattern_a, pattern_b,pattern_c,pattern_d,pattern_e;

    cout<< "pattern_a\n";  
   for (int i = 1; i <= 8; i++) {
    for (int j = 1; j <= 4; j++) {
        cout << "#* ";
    }
   cout << endl;
	
   }
    cout<< "pattern_b\n";
   for (int i = 8; i >= 1;i--){   //row
	   for ( int j = 1; j <=i;j++){// column
	   cout<<"# ";	
	   }
           cout<< endl;
        }
		
	cout<< "pattern_c\n";
	for (int i = 8; i >= 1; i--) {
        for (int j = 1; j <= 8 - i; j++) {
            cout << "  ";  
        }

        
        for (int j = 1; j <= i; j++) {
            cout << "# ";  
        }
        
        cout << endl;  
    }
	cout<< "pattern_d\n";
	for (int i=1;i<=8;i++){
	for (int j = i; j>=1; j--){
	cout << j ;

}
	cout<< endl;
}
   cout<< "pattern_e\n";
   for (int i = 1; i <=8; i++) {
        cout << string(8 - i, ' '); 
        for (int j = 1; j <= i; j++) {
            cout << j  ; 
	
        }
        cout << endl; 
    }
   
	return 0;
	
   }