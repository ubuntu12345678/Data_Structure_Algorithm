
	#include <bits\stdc++.h>
	using namespace std;

	template<typename T>
	void ShellSort(T Arr[], int n)
	{
		// We'll start  with big gap and start reduce it 
		for (int gap = n / 2; gap >= 1; gap /= 2) {
			
			for (int i = gap; i < n; i++) {
				T temp = Arr[i];
				int j;
				
				for (j = i; j >= gap && Arr[j - gap] > temp; j -= gap) {
					Arr[j] = Arr[j - gap];
				}
				// put temp (the original a[i]) in its correct location ..
				Arr[j] = temp;
			}
		}
	}

	template<typename T>
	void Print(T Arr[], int n) {
		for (int i = 0; i < n; i++) {
			cout << Arr[i] << " ";
		}
		cout << endl;
	}


	int main()
	{
		int n;
		cin >> n;
		int* Arr = new int[n];

		for (int i = 0; i < n; i++)
			cin >> Arr[i];
		
		cout << "Before Sorting" << endl;
		Print(Arr, n);
		
		ShellSort(Arr, n);
		
		cout << "After Sorting" << endl;
		Print(Arr, n);
	}
