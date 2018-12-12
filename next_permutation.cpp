#include <iostream>
#include <algorithm>
using namespace std;

const int N = 5;

const int len = 3;

int main()
{
	int a[3]={7,8,9};
	for(int i = 0; i < N; i++){
        next_permutation(a, a+3);   //下一个全排列，当没有下一个全排列时，函数返回值为0，
        for(int i = 0; i < len; i++){ //并变为字典序最小的排列，否则函数返回值为1
           cout << a[i];
        }
        cout <<" ";
	}
	return 0;
}
