#include <iostream>
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