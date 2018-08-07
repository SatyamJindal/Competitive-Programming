#include <bits/stdc++.h>

using namespace std;

int a[256], b[256], c[256], n, ma, mb, mc;
string p, q, r;

int main() {
      cin >> n >> p >> q >> r;
      for (char x: p) ma = max(ma, ++a[x]);
      for (char x: q) mb = max(mb, ++b[x]);
      for (char x: r) mc = max(mc, ++c[x]);
      if (n == 1 && ma == (int)p.length()) p.pop_back();
      if (n == 1 && mb == (int)q.length()) q.pop_back();
      if (n == 1 && mc == (int)r.length()) r.pop_back();
      ma = min(ma + n, (int)p.length());
      mb = min(mb + n, (int)q.length());
      mc = min(mc + n, (int)r.length());
      //cout<<"ma "<<ma<<" mb "<<mb<<" mc "<<mc<<"\n";
      if (ma > mb && ma > mc) {
            puts("Kuro");
            return 0;
      }
      if (mb > ma && mb > mc) {
            puts("Shiro");
            return 0;
      }
      if (mc > ma && mc > mb) {
            puts("Katie");
            return 0;
      }
      puts("Draw");
      return 0;
}
