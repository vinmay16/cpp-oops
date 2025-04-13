#include <iostream>
using namespace std;

int main(){
  
    int start, end;

    cout<<"Enter the starting point "<<endl;
    cin>>start;

    cout << "Enter the ending point "<<endl;
    cin>>end;

    if(start>end){
        cout<<"invalid range "<<endl;
 
    }
       else{
        cout <<"NO. from "<< start << " to "<< end << " are "<< endl;
        for(int i= start;i <= end; i++){
            cout << i << endl;
        }
       }

return 0;






    
}