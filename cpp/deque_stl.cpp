#include <iostream>
#include <deque> 
using namespace std;

// solution
void printKMax(int arr[], int n, int k)
{
  std::deque<int> dq;

  for(int i = 0; i < n; ++i) {
    if(dq.empty()) {
      dq.push_back(i);
    }
    if(dq.front() <= i - k) {
      dq.pop_front();  
    }

    while(!dq.empty() && arr[i] >= arr[dq.back()]) {
      dq.pop_back();
    }
    dq.push_back(i);

    if(i >= k - 1) {
      std::cout << arr[dq.front()] << " ";
    }
  }
  std::cout << std::endl;
}

int main(){
  
	int t;
	cin >> t;
	while(t>0) {
		int n,k;
      cin >> n >> k;
    	int i;
    	int arr[n];
    	for(i=0;i<n;i++)
        cin >> arr[i];
    	printKMax(arr, n, k);
    	t--;
  	}
  	return 0;
}
