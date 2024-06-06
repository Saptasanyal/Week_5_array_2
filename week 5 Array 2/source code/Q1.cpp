//Count the number of elements strictly greater than x.
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    int n;
    
    cout<<"Enter the number of elements: ";
    cin>>n;
    for(int i=0;i<n;i++){
        int t;
        cin>>t;
        v.push_back(t);

    }
    
    int x;
    cout<<"Enter the number of element that you are trying to find: ";
    cin>>x;
    int count=0;
    for(int j=0;j<n;j++)
    {
        if(v[j]>x){
            count++;
        }

    }
    if(count==0){
        cout<<"No element greater than the given element."<<endl;

    }
    else{
        cout<<"The number of elements greater than "<<x<<" is: "<<count<<endl;
    }
    return 0;

}