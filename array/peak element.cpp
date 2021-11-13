//top 50 array coding problems ( https://www.geeksforgeeks.org/top-50-array-coding-problems-for-interviews/ )

class Solution
{
    public:
    int peakElement(int arr[], int n)
    { int pos=0,maxi=arr[0];
       for(int i=0;i<n;i++){
           if(arr[i]>maxi){
               maxi=arr[i];
               pos=i;
           }
           
       }
      return pos;
    }
};
