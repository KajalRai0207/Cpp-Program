// #include<iostream>
// using namespace std;
// template <typename T>
// T myMax(T x,T y)
// {
//     return (x>y)?x:y;
// }
// int main()
// {
//     cout<<myMax<int>(3,4)<<endl;
//     cout<<myMax<char>('g','e')<<endl;
//     cout << myMax<string>("egi", "eha") << endl;
//     return 0;
// }
#include <iostream>
#include <vector>
#include <string>

using namespace std;
template< typename T>
/**
*    Name: printArray
*    Print each element of the generic vector on a new line. Do not return anything.
*    @param A generic vector
**/
void printArray(vector<T> arr)
{
    for(int i=0;i<arr.size();i++)
	{
		cout<<arr[i]<<endl;
	}
}

int main() {
	int n;
	
	cin >> n;
	vector<int> int_vector(n);
	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		int_vector[i] = value;
	}
	
	cin >> n;
	vector<string> string_vector(n);
	for (int i = 0; i < n; i++) {
		string value;
		cin >> value;
		string_vector[i] = value;
	}

	printArray<int>(int_vector);
	printArray<string>(string_vector);

	return 0;
}