#include <iostream>
using namespace std;
int max(int a, int b)
{
    return (a > b)? a : b;

}
int max(int a, int b, int c) {
    return max(a, max(b, c));

}
int maxProd(int n)
{
    if (n == 0 || n == 1)
    return 0;
    int max_val = 0;
    for (int i = 1; i < n; i++)
      max_val = max(max_val, i*(n-i), maxProd(n-i)*i);
    return max_val;
}

int main()
{
    int n,p;
    cin>>p;
    while(p-->0){
    cin>>n;
    cout<< maxProd(n);
    }
    return 0;
}
