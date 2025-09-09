#include <iostream>
#include <SampleClass2.h>
using namespace std;

SampleClass2::SampleClass2(const string &name) : mName(name) {}
void SampleClass2::PublicMethod1()
{
    mName = "public1";
    cout << "SampleClass2::PublicMethod1(): " << mName << endl;
}
void SampleClass2::PublicMethod2()
{
    mName = "public2";
    cout << "SampleClass2::PublicMethod2(): " << mName << endl;
    InternalMethod();
}
void SampleClass2::InternalMethod()
{
    mName = "internal";
    cout << "SampleClass2::InternalMethod(): " << mName << endl;
}
