#include<iostream>
using namespace std;
int main(){
	
	for(int i = 0; i <= 100; i++){ 

		
    if(i % 3 == 0 && i % 5 == 0){ 
        cout << i << " fizzbuzz" << endl;
        cout<<"\n";
        
    }else if(i % 3 == 0){ 
        cout << i << " fizz" << endl;
        cout<<"\n";
        
    }else if(i % 5 == 0){
        cout << i << " buzz" << endl; 
        cout<<"\n";
    }
}


}

