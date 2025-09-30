
#include <iostream>
/*
#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            answer += i;
        }

    }
    return answer;
}
int main()
{
    int n;
    cout << " [숫자 입력]:";
    cin >> n;

    cout << " [약수의 합]:" << solution(n);

    return 0;
}
*/

#include <string>
#include <vector>

using namespace std;

int solution(int n)
{
    int answer = 0;
    for (int x = 2; x < n; ++x)
    {

        if (n % x == 1)
        {
            answer = x;
            break;
        }


    }

    return answer;
}
int main() {
    int n;

    cout << " [숫자 입력]:";
    cin >> n;

    cout << " [나머지가 1이 되는 수]:" << solution(n);
    return 0;
}