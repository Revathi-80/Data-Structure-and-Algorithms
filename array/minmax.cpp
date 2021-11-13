//SIMPLE CODE
pair<long long, long long> getMinMax(long long a[], int n) {
    long long mini=INT_MAX,maxi=INT_MIN;
    pair<long long,long long>p;
    for(int i= 0;i<n ;i++){
        maxi=max(maxi,a[i]);
        mini=min(mini,a[i]);
    }
    p.first=mini;
    p.second=maxi;
    return p;
}

//METHOD 1
//finding minimum and maximum in the array
#include<bits/stdc++.h>
using namespace std;
struct Pair{
	int min;
	int max;
};
struct Pair getMinMax(int arr[],int n){
struct Pair minmax;
	if(n==1){
		minmax.min=arr[0];
		minmax.max=arr[0];
		return minmax;
	}
	if(arr[0]>arr[1]){
		minmax.min=arr[1];
		minmax.max=arr[0];
	}
	else{
		minmax.max=arr[1];
		minmax.min=arr[0];
	}
	for(int i=2;i<n;i++){
		if(arr[i]>minmax.max){
			minmax.max=arr[i];
		}
		else if(arr[i]<minmax.min){
			minmax.min=arr[i];
		}
	}
	return minmax;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
struct Pair minmax=getMinMax(arr,n);
cout<<minmax.min<<endl;
cout<<minmax.max<<endl;
return 0;
}

// METHOD 2 (TOURNAMENT method)

//finding minimum and maximum in the array
//In this method we will divide the array into two parts and then compare the min and max of the left and right part 
#include<bits/stdc++.h>
using namespace std;
struct Pair{
	int min;
	int max;
};
struct Pair getMinMax(int arr[],int low, int high){
struct Pair minmax,mml,mmr;
	if(low==high){
		minmax.min=arr[low];
		minmax.max=arr[high];
		return minmax;
	}
	if(high==low+1){
		if(arr[low]>arr[high]){
		minmax.min=arr[high];
		minmax.max=arr[low];
	}
	else{
		minmax.max=arr[high];
		minmax.min=arr[low];
	}
	
	return minmax;
}
int mid= (high+low)/2;
mml=getMinMax(arr,low,mid);
mmr=getMinMax(arr,mid+1,high);
if(mml.max>mmr.max){
	minmax.max=mml.max;
}
else
minmax.max=mmr.max;
if(mml.min<mmr.min)
minmax.min=mml.min;
else
minmax.min=mmr.min;
return minmax;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
struct Pair minmax=getMinMax(arr,0,n-1);
cout<<minmax.min<<endl;
cout<<minmax.max<<endl;
return 0;
}

// METHOD 3 (COMPARE IN PAIRS)
//finding minimum and maximum in the array
//In this method if n is odd then set min and max to the first element 
//if n is even then  compare the first two element ,and then compare in pairs
#include<bits/stdc++.h>
using namespace std;
struct Pair{
	int min;
	int max;
};
struct Pair getMinMax(int arr[],int n){
struct Pair minmax;
int i;
	if(n %2==0){
		if(arr[0]>arr[1]){
		minmax.min=arr[1];
		minmax.max=arr[0];
	}
	else{
		minmax.min=arr[0];
		minmax.max=arr[1];
	}
	i=2;
}
	else{
		minmax.max=arr[0];
		minmax.min=arr[1];
		i=1;
	}
while(i<n-1){
	if(arr[i]>arr[i+1]){
		if(arr[i]>minmax.max)
			minmax.max=arr[i];
		if(arr[i+1]<minmax.min)
			minmax.min=arr[i+1];
	}
	else{
		if(arr[i+1]>minmax.max)
			minmax.max=arr[i+1];
		if(arr[i]<minmax.min)
			minmax.min=arr[i];
	}
	i+=2;
}
return minmax;
}
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++)
cin>>arr[i];
struct Pair minmax=getMinMax(arr,n);
cout<<minmax.min<<endl;
cout<<minmax.max<<endl;
return 0;
}
