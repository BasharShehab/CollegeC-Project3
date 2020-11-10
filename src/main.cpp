#include <iostream>
#include  <cmath>
using namespace std;
int l, su = 0;
float avg = 0;
//declaring matrices on construction (found method on stackoverflow). with () for float. without () for int. 

int *a = new int[l];
float* dev = new float[l]();
float newsum = 0;
float newavg = 0;
// reading a matrix' elements 
void read(int a[], int l) {
	for (int i = 0; i < l; i++)
		cin >> a[i];
}
// printing out matrix elements
void write(int a[], int l) {
	for (int i = 0; i < l; i++) {
		cout << a[i] << " ";
	}
	cout << endl;
}
// the sum of matrix elements
int sum(int a[], int l) {
	for (int i = 0; i < l; i++)
		su = su + a[i];
	return su;
}
// the smallest and largest element in the matrix 
void minmax(int a[], int l, int &min, int &max) {
	min = a[0];
	max = a[0];
	for (int i = 0; i < l; i++) {
		if (min > a[i])
			min = a[i];
		if (max < a[i])
			max = a[i];
	}

	cout << "the smallest element of this matrix is : " << min << endl;
	cout << "the largest element of this matrix is : " << max << endl;
}
// the average of this matrix' elements 
float avarg(){
	avg = (float)su / l;
	return avg;
}
// the standard deviation of this matrix' elements 
float STD(){
	for (int i = 0; i < l; i++) {
		dev[i]= avg - a[i];
	}

	for (int i = 0; i < l; i++) {
		dev[i] = dev[i] * dev[i];
	}
	for (int i = 0; i < l; i++) {
		newsum = newsum + dev[i];
	}
	newavg = newsum / l ;

	return sqrt(newavg);
}
int main() {
	int min, max;
	cout << " enter the length of the matrix : " << endl;
	cin >> l;
	cout << " enter the values of the matrix, one by one " << endl;
	read(a, l);
	write(a, l);
	minmax(a, l, min, max);

	cout << "The sum of all elements of this matrix is : " << sum(a, l) << endl;
	cout << "The average of this matrix is " << avarg() << endl;
	cout << "The standard deviation of this matrix is : " << STD() << l;
	return 0;
}