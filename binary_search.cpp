#include<iostream.h>
using namespace std;

bool binary search(vector<int<> vec,int k){	
	int low=0,high=vec.size()-1;
	while(low<=high){
		int mid=(low+high)/2;
		if(vec[mid]==k)		return true;
		else if(a[mid] >k )		high=mid-1;
		else	low=mid+1;
	}
  return false;
}
