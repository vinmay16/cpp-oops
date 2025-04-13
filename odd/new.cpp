#include<iostream>
using namespace std;

int findlargestNum(int a,int b,int c){
    if (a > b  && a > c){ 
        return a;
    } else if(b > c ){
        return b;
    }else{
        return c;
    }
}
 
int findSmallestNum(int a, int b, int c){
    if (a < b && a< c){
        return a;
    }else if (b < c){
        return b;
    }else{
        return c;
    }

}

void printInReverseOrder(int largest, int smallest){
    if(largest > smallest){
        for(int i=largest; i >= smallest; i--){
            cout<< i << endl;
        }
    }else{
        cout<< "ivalid input smallest: "<< smallest<< " largest: " << largest <<endl;
    }



}

int main(){
        int num1,num2,num3;   // memory allocation

        cout << "Enter first number "<< endl;
        cin>> num1;

        cout << "Enter second number"<< endl;
        cin >> num2;

        cout << "Enter third number"<< endl;
        cin >> num3;

        int largnum = findlargestNum(num1,num2,num3);

        cout<< "The largest num is :"<< largnum << endl;
        
        int smallnum = findSmallestNum(num1,num2,num3);

        cout << " The Smallest num is : "<< smallnum << endl;

        printInReverseOrder(largnum,smallnum);
        printInReverseOrder(smallnum,largnum);

    return 0;

}