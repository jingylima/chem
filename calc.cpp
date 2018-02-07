#include <iostream>
using namespace std;

#include <cmath>

int main(){
	int n;
	double total = 0;
	double avg;
	double sumval;
	double sum = 0;
	double sd;
	double pru;
	
	cout << "how many results?";
	cin >> n; 
	cin.ignore(1000,10);
	
	double result[n];
	
	for(int i = 0; i < n; i++){
		cout << "result #" << i + 1 << ": ";
		cin >> result[i];
		cin.ignore(1000,10);
		
		total += result[i];
	}
	
	avg = total / n;
	
	for(int i = 0; i < n; i++){
		sumval = result[i] - avg;
		sumval *= sumval;
		sum += sumval;
	}
	
	sum /= n - 1;
	sd = sqrt(sum);
	pru = sd / avg * 100;
	
	cout << "\nstandard deviation is " << sd;
	cout << "\npercent relative uncertainty is " << pru << "%";
}
