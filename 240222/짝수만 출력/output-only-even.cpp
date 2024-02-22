#include <iostream>

using namespace std;

int main() {
    // 변수 선언
    int a, b;
	int i;

	// 입력
	cin >> a >> b;
    i = a;
    
    // 출력
	while(i <= b) {
		cout << i << " ";
		i += 2;
	}

    return 0;
}