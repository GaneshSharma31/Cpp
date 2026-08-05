#include <iostream>
using namespace std;

int bintodec(int bin)
{
    int ans = 0, multiple = 1;
    while (bin > 0)
    {
        int rem = bin % 10;
        ans += rem * multiple;
        bin = bin / 10;
        multiple *= 2;
    }
    return ans;
}
int main()
{
    int bin, answer;
    cout << "enter binary number to convert it into decimal :";
    cin >> bin;
    answer = bintodec(bin);
    cout << "solution is :" << answer << endl;
    return 0;
}