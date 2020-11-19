# include "../std_lib_facilities.h"

int main()
{
	cout << "Please enter a integer value: ";
	int n;
	double f;
	cin >> n;
	f = n;
	cout << "n == " << n
		 << "\nn+1 == " << n + 1
		 << "\nthree times n == " << n * 3
		 << "\ntwice n == " << n + n
		 << "\nn squared == " << n * n
		 << "\nhalf of n == " << n / 2
		 << "\nn modulo 2 == " << n % 2
		 << "\nsquare root of n == " << sqrt(f)
		 << '\n';
}
