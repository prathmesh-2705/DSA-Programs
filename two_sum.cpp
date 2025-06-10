#include<iostream>
using namespace std;
class two
{
    public:
            int num(int arr[],int target,int n)
            {
                for(int i=0;i<n;i++)
                    {
                        for(int j=i+1;j<n;i++)
                        {
                            int sum=arr[i]+arr[j];
                            if(sum==target)
                            {
                                return[i,j];
                                break;
                            }
                        }
                    }
            }
};
int main()
{
    two t;
    int n=5;
    int arr[5]={4,1,8,1,3};
    t.num(arr,5,4);
}
