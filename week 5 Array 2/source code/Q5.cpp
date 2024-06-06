//Given an array of integers, change the value of all odd indexed elements 
//to its second multiple and increment all even indexed values by 10.
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
   
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            v[i]+=10;
        }
        else{
            v[i]*=2;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;

}