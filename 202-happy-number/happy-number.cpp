class Solution {
public:
    bool isHappy(int n) {
        int slow=n;
        int fast=n;
        while(true)
        {
            int k=0;
            while(slow>0)
            {
                k+=(slow%10)*(slow%10);
                slow=slow/10;
            }
            slow=k;
            for(int i=0;i<2;i++)
            {
                k=0;
                while(fast>0)
                {
                    k+=(fast%10)*(fast%10);
                    fast=fast/10;
                }
                fast=k;
            }
            if(slow==fast)
            {
                if(slow==1)
                {
                    return true;
                }
                else
                {
                    return false;
                }
            }
        }
    }
};