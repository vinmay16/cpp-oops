#include <iostream>
using namespace std;

int peri(int len, int br){
return 2 * (len + br);
   
}

int area(int len, int br){
    return len * br;
}

int main(){
  int le, br;

 cout << "enter length "<< endl;
 cin >> le;

cout << "enter breadth "<< endl;
cin >> br;

 int perimeter = peri (le,br)  ;

cout << "perimeter " << perimeter << endl;

cout << "area calculated " << area(le,br) <<endl;

return 0;

}



