#include <cstdio>
#include <Windows.h>
using namespace std;
using namespace System;
int main(int argc, char *argv[]) {
    if (argc == 3) {
        int freq = atoi(argv[1]);
        int len = atoi(argv[2]);
        Beep(freq, len);
    } else {
        Console::WriteLine("Usage: frequency (HZ), length (MS).");
    }
    return 0;
}