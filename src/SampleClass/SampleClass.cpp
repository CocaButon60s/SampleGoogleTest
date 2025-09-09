#include <iostream>
#include <SampleClass.h>
using namespace std;

SampleClass::SampleClass(const string &name) : mName(name) {}
void SampleClass::PublicMethod1()
{
    mName = "public1";
    cout << "SampleClass::PublicMethod1(): " << mName << endl;
}
void SampleClass::PublicMethod2()
{
    mName = "public2";
    cout << "SampleClass::PublicMethod2(): " << mName << endl;
    InternalMethod();
}
void SampleClass::InternalMethod()
{
    mName = "internal";
    cout << "SampleClass::InternalMethod(): " << mName << endl;
}
