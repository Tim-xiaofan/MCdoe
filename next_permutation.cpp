#include <iostream>
#include <algorithm>
using namespace std;

const int N = 5;

const int len = 3;

int main()
{
	int a[3]={7,8,9};
	for(int i = 0; i < N; i++){
        next_permutation(a, a+3);   //��һ��ȫ���У���û����һ��ȫ����ʱ����������ֵΪ0��
        for(int i = 0; i < len; i++){ //����Ϊ�ֵ�����С�����У�����������ֵΪ1
           cout << a[i];
        }
        cout <<" ";
	}
	return 0;
}
