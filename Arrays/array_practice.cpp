#include <iostream>
using namespace std;
int main()
{
    float num[5] = {10,15,20,25,30};
    cout<<"Enter price"<<endl;
    for(int i = 0; i < 5; i++){
        cin>>num[i];
    }
    for(int i = 0; i < 5; i++){
        cout<<num[i]<<endl;
    }
    return 0;
}
