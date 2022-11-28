#include<bits/stdc++.h>
#define up(l, r, i) for(int i = l, END##i = r;i <= END##i;++ i)
#define dn(r, l, i) for(int i = r, END##i = l;i >= END##i;-- i)
using namespace std;
typedef long long i64;
const int INF = 2147483647;
int qread() {
    int w = 1, c, ret;
    while ((c = getchar()) > '9' || c < '0') w = (c == '-' ? -1 : 1); ret = c - '0';
    while ((c = getchar()) >= '0' && c <= '9') ret = ret * 10 + c - '0';
    return ret * w;
}
const int MAXN = 2e5 + 3;
int A[MAXN], B[MAXN];
int main() {
    int n = qread(), m = qread(), l = max(n, m);
    dn(n, 1, i) A[i] = qread();
    dn(m, 1, i) B[i] = qread();
    up(1, l, i) A[i] += B[i], A[i + 1] += A[i] / (i + 1), A[i] %= i + 1;
    if (A[l + 1]) ++l;
    dn(l, 1, i) printf("%d%c", A[i], " \n"[i == 1]);
    return 0;
}