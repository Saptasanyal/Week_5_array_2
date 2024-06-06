//If an array arr contains n elements, then check if the given array is a palindrome or not .
#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> v;
    int n;
    cin >> n; // Read the number of elements
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x; // Read each element
        v.push_back(x); // Add element to the vector
    }

    vector<int> v2;
    for (int i = v.size() - 1; i >= 0; i--) {
        v2.push_back(v[i]); // Push elements in reverse order
    }

    // Printing the reversed vector
    for (int i = 0; i < v2.size(); i++) {
        cout << v2[i] << " ";
    }
    cout<<endl;
    bool flag=false;
    for(int i=0;i<n;i++)
    {
        if(v[i]!=v2[i])
        {
            flag=true;
            break;
        }
    }
    if(flag==false)
    {
        cout<<"palindrome"<<endl;
    }
    else{
        cout<<"not palindrome"<<endl;
    }
    return 0;
}
