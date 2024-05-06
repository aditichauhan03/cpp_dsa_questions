#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    cout<<"Enter number of rows and columns: ";
    cin>>n;
    for (int row = n; row>=0; row--){
        for (int col = row-1; col>=0; col--){
            if (row == n || col == row-1 || col%row == 0 ){
                cout<<abs(col-5); 
                cout<<" ";
 
            }
            else {
                cout<<" ";
                cout<<" ";
            }
        }
        cout<<endl;
    }
}