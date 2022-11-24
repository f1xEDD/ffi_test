#ifdef WIN32
#define EXPORT __declspec(dllexport)
#else
#define EXPORT extern "C" __attribute__((visibility("default"))) __attribute__((used))
#endif

#include <cstring>
#include <ctype.h>
#include <iostream>

#include "../headers/fptr10.h"

using namespace std;
using namespace Atol::Fptr;

EXPORT
char* init(){
    static char buffer1[1024];
    Fptr fptr_common;

    std::string version = fptr_common.version();

    strcpy(buffer1, version.c_str());

    //asdasdas
    return buffer1;
}



static char buffer[1024];

EXPORT
int add(int a, int b)
{
   return a + b;
}


EXPORT
char* capitalize(char *str) {
    strcpy(buffer, str);
    buffer[0] = toupper(buffer[0]);
    return buffer;
}