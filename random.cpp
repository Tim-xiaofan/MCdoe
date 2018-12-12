#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

const int a = 0;//起始值
const int n = 100;//范围

int main(){
    //初始化随机数发生器void srand(unsigned int seed)
    srand((unsigned)time(NULL));
    for(int i = 0; i < 10;i++ ){
        //随机数发生器int rand(void)
         cout << rand() << '\t';
    }
    cout<<"\n";
    //添加范围
    for(int i = 0; i < 10;i++ ){
        //随机数发生器int rand(void)
         cout << a + rand() % n << '\t';
    }

    cout << endl;
    return 0;
}

/*link:https://www.cnblogs.com/VVingerfly/p/5990714.html
产生一定范围随机数的通用表示公式
要取得[a,b)的随机整数，使用(rand() % (b-a))+ a;
要取得[a,b]的随机整数，使用(rand() % (b-a+1))+ a;
要取得(a,b]的随机整数，使用(rand() % (b-a))+ a + 1;
通用公式:a + rand() % n；其中的a是起始值，n是整数的范围。
要取得a到b之间的随机整数，另一种表示：a + (int)b * rand() / (RAND_MAX + 1)。
要取得0～1之间的浮点数，可以使用rand() / double(RAND_MAX)
*/
