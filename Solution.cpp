
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
    cout << " [���� �Է�]:";
    cin >> n;

    cout << " [����� ��]:" << solution(n);

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

    cout << " [���� �Է�]:";
    cin >> n;

    cout << " [�������� 1�� �Ǵ� ��]:" << solution(n);
    return 0;
}