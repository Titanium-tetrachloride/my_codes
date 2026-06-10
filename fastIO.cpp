#include <bits/stdc++.h>

#pragma GCC optimize("O3,unroll-loops")
#pragma GCC target("avx2,bmi,bmi2,lzcnt,popcnt")

using namespace std;

namespace fst {
    const int BUF_SIZE = 1 << 18; 
    char in_buf[BUF_SIZE], out_buf[BUF_SIZE];
    int in_ptr = 0, in_len = 0, out_ptr = 0;

    inline char getChar() {
        if (in_ptr == in_len) {
            in_ptr = 0;
            in_len = fread(in_buf, 1, BUF_SIZE, stdin);
            if (in_len == 0) return EOF;
        }
        return in_buf[in_ptr++];
    }

    inline void putChar(char ch) {
        if (out_ptr == BUF_SIZE) {
            fwrite(out_buf, 1, BUF_SIZE, stdout);
            out_ptr = 0;
        }
        out_buf[out_ptr++] = ch;
    }

    inline void read(char &ch) {
        ch = getChar();
        while (ch <= ' ') { 
            if (ch == EOF) return;
            ch = getChar();
        }
    }

    inline void read(string &s) {
        s.clear();
        char ch = getChar();
        while (ch <= ' ') {
            if (ch == EOF) return;
            ch = getChar();
        }
        while (ch > ' ') {
            s.push_back(ch);
            ch = getChar();
        }
    }

    template <typename T>
    inline void read(T &x) {
        x = 0; T f = 1; char ch = getChar();
        while (ch < '0' || ch > '9') { if (ch == '-') f = -1; ch = getChar(); }
        while (ch >= '0' && ch <= '9') { x = (x << 3) + (x << 1) + ch - '0'; ch = getChar(); } 
        x *= f;
    }

    template <typename T>
    inline void readFloat(T &x) {
        x = 0; T f = 1, diff = 1; char ch = getChar();
        while (ch < '0' || ch > '9') { if (ch == '-') f = -1; ch = getChar(); }
        while (ch >= '0' && ch <= '9') { x = x * 10 + ch - '0'; ch = getChar(); }
        if (ch == '.') {
            ch = getChar();
            while (ch >= '0' && ch <= '9') { diff /= 10; x += (ch - '0') * diff; ch = getChar(); }
        }
        x *= f;
    }
    inline void read(float &x) { readFloat(x); }
    inline void read(double &x) { readFloat(x); }

    inline void write(char ch) { putChar(ch); }
    inline void write(const char *s) { while (*s) putChar(*s++); }
    inline void write(const string &s) { for (char ch : s) putChar(ch); }

    template <typename T>
    inline void write(T x) {
        if (x < 0) { putChar('-'); x = -x; }
        if (x == 0) { putChar('0'); return; }
        char buf[32];
        int len = 0;
        while (x > 0) {
            buf[len++] = (x % 10) + '0';
            x /= 10;
        }
        while (len--) putChar(buf[len]);
    }

    inline void write(double x, int precision = 6) {
        if (x < 0) { putChar('-'); x = -x; }
        long long integer_part = (long long)x;
        write(integer_part);
        putChar('.');
        x -= integer_part;
        for (int i = 0; i < precision; ++i) {
            x *= 10;
            int digit = (int)x;
            putChar(digit + '0');
            x -= digit;
        }
    }
    inline void write(float x, int precision = 6) { write((double)x, precision); }

    inline void flush() {
        if (out_ptr > 0) {
            fwrite(out_buf, 1, out_ptr, stdout);
            out_ptr = 0;
        }
    }
}

inline void sol(){
	//solution here
}

int32_t main(){
     #ifndef ONLINE_JUDGE
            freopen("in.txt","r",stdin);
            freopen("out.txt","w",stdout);
        #endif
	sol();
	flush();
    return 0;
}
