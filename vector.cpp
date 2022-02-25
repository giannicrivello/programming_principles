#include<iostream>
#include<vector>

int main(){
	std::vector<int> vec; //must initilize the size by declaring the elements or declaring an empty set
        vec.push_back(20);
	for (int i=0; i< vec.size(); i++){

		std::cout << vec[i] << std::endl;
	}
}
