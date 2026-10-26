#include <iostream>
#include <cmath>

using namespace std;

int main() {

	int i, N, k;
	float S;
	cout << "k = "; cin >> k;
	cout << "N = "; cin >> N;

	i = k;
	S = 0;
	while (i <= N) {
		S += sin(cos(i)) / (1 + cos(i) * cos(i));
		i++;
	}


	cout << "S = " << S << " while" << endl;

	i = k;
	S = 0;
	do {
		S += sin(cos(i)) / (1 + cos(i) * cos(i));
		i++;
	} while (i <= N);

	cout << "S = " << S << " do while" << endl;

	S = 0;
	for (i = k; i <= N; i++) {
		S += sin(cos(i)) / (1 + cos(i) * cos(i));
	}


	cout << "S = " << S << " for(...; i++)" << endl;
	
	S = 0;
	for (i = N; i >= k; i--) {
		S += sin(cos(i)) / (1 + cos(i) * cos(i));
	}

	cout << "S = " << S << " for(...;i--)" << endl;

	cin.get();
	return 0;
}