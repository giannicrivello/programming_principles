#include "std_lib_facilities.h"
int main(){
	int A[] = {1,2,3,4,5,6,'|'};
	vector<int> nums;
        int size = sizeof(A) / sizeof(A[0]);
	for (int j=0; j<size; j++) {
		while(A[j] != '|') {
			nums.push_back(A[j]);
			cout << nums[j];
			j++;
		}
	}
}
