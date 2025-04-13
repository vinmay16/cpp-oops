#include<iostream>

int main(){
    const int a = 1;
    const int b = 2;
    const int temp = a;
    a = b; // Error: cannot assign to variable 'a' with const-qualified type 'const int'
    b = temp; // Error: cannot assign to variable 'b' with const-qualified type 'const int'
    std::cout << a ;
    std::cout << b ;

}
