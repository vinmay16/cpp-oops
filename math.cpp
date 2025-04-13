#include<iostream>

int main(){
//    int x = 10;
//    int y = 3;
//    int z = x + y;
//    std::cout << z; 
      int x = 10;
      int y = x++; // Post-increment: y = 10, x = 11
      int z = ++x; // Pre-increment: z = 11, x = 11
        std::cout << x; // Output: 11

   
}