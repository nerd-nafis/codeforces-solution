#include<bits/stdc++.h>
using namespace std;
int main()
{
 
    long long int t,n; 
    long long int a[10] = { 0, 1, 11, 111, 1111, 11111, 111111, 1111111, 11111111, 111111111 };
    
    cin>>t;
    while(t--)
    {
        cin>>n;
        long long int tempn = n; int dig = 0; 
        while (tempn>0)
        {
            tempn = tempn/10; 
            dig++; 
        }

        if (n<10) cout<<n<<endl;
        else {
            cout<< ( n%10=='0'? (n/a[dig-1])  + (dig-2)*9 : (n/a[dig]) + (dig-1)*9 )<<endl;
        }
    }
 
}
