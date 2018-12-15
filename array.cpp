#include <iostream>

using namespace std;

int main()
{
    int a[100] ={10};
    for(int i = 0; i < 100; i++)
        cout << a[i] << endl;
}
/*输出：
0073F7C8
int指针加1：0073F7CC
0073F7B8
char指针加1：0073F7B9*/
