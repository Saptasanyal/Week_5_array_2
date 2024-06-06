//Find the difference between the sum of elements at even indices to the 
//sum of elements at odd indices.


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
    int sum_even=0, sum_odd=0;
    for(int i=0;i<n;i++)
    {
        if(i%2==0)
        {
            sum_even+=v[i];
        }
        else{
            sum_odd+=v[i];
        }
    }
    cout<<sum_even-sum_odd<<endl;
    return 0;

}