#include "std_lib_facilities.h" 

int main(){

	vector<double> temps;

	for(double temp; cin >> temp;)
		temps.push_back(temp);

	double sum = 0;
	double high_temp = 0;
	double low_temp = 0;

	for (int x: temps){

		if(x > high_temp) high_temp = x; //find high
		if(x< low_temp) low_temp = x; // find low
		sum += x;
	}

	cout << "HIgh Temp: " << high_temp << "\n";
	cout << "Low Temp: " << low_temp << "\n";
	cout << "Average Temp: " << sum/temps.size() << "\n";

}
