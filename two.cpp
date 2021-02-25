#include <bits/stdc++.h>
using namespace std;

        int zeros(int k)
        {
            int temp=k;
            int p=5;
            int count=0;
            while(p<=temp)
            {
             count=count+ (temp/p);
             p=p*5;
            }
            return count;
        }
        
        int findNum(int n)
        {
            if(n==1)
            return 5;
            
            int low =0;
            int high=5*n;
            
            while(low<=high)
            {
                int mid=(low+high)/2;
                int c=zeros(mid);
                
                if(c>=n)
                {
                    high=mid-1;
                }
                else
                low=mid+1;
            }
            return low;
        }
int main()
{
    int n;
    cin>>n;

    cout<<findNum(n);
}       