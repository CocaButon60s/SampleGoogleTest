#include <iostream>
using namespace std;

class SampleClass
{
private:
    string mName;

public:
    SampleClass(const string &name);
    void PublicMethod1();
    void PublicMethod2();
    void InternalMethod();
};
