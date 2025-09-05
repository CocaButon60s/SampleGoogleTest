#include <iostream>
#include <SampleClass.h>
using namespace std;

SampleClass::SampleClass(const string &name) : mName(name) {}
void SampleClass::PublicMethod1()
{
    mName = "public1";
}
void SampleClass::PublicMethod2()
{
    mName = "public2";
    InternalMethod();
}
void SampleClass::InternalMethod()
{
    mName = "internal";
}
