#include <iostream>
using namespace std;

int f(int n) { //n�� ���ڷ� ���� -> n*n*-1*n-2* �̷��� ��� ���ϴٰ� 1�� ������ ��Ż ���� ����
 
	int total=1;
	
	if(n==0) return 1;
	
	for(int i=n; i>=1; i--) {
		total *= i;
	}
	
	return total;
}
int main() {
	int n,r;
	
	cin >> n >> r;
	cout << f(n) / (f(r) * f(n-r)); //�̰� ��� ��ġ�Ѱ�..  
	
	return 0;
}

