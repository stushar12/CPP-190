int zeros(int temp)
        {
            int count=0;
            while(temp)
            {
             count=count+ (temp/5);
             temp=temp/5;
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
