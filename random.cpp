#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int a = 0;//��ʼֵ
const int n = 100;//��Χ

int main(){
    //��ʼ�������������void srand(unsigned int seed)
    srand((unsigned)time(NULL));
    for(int i = 0; i < 10;i++ ){
        //�����������int rand(void)
         cout << rand() << '\t';
    }
    cout<<"\n";
    //��ӷ�Χ
    for(int i = 0; i < 10;i++ ){
        //�����������int rand(void)
         cout << a + rand() % n << '\t';
    }

    cout << endl;
    return 0;
}

/*link:https://www.cnblogs.com/VVingerfly/p/5990714.html
����һ����Χ�������ͨ�ñ�ʾ��ʽ
Ҫȡ��[a,b)�����������ʹ��(rand() % (b-a))+ a;
Ҫȡ��[a,b]�����������ʹ��(rand() % (b-a+1))+ a;
Ҫȡ��(a,b]�����������ʹ��(rand() % (b-a))+ a + 1;
ͨ�ù�ʽ:a + rand() % n�����е�a����ʼֵ��n�������ķ�Χ��
Ҫȡ��a��b֮��������������һ�ֱ�ʾ��a + (int)b * rand() / (RAND_MAX + 1)��
Ҫȡ��0��1֮��ĸ�����������ʹ��rand() / double(RAND_MAX)
*/
