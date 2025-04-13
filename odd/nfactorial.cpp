#include <iostream>
using namespace std;

int main(){
int num;
unsigned long long factorial = 1;

cout <<"enter a no. "<<endl;
cin >> num;

if(num < 1){
    cout << "not defined "<< endl;
}else{
    for(int i = 1;i <= num; i++){
        factorial *= i;
    }
    cout<< "factorial of "<< num << " is "<< factorial <<endl;

}


return 0;
}