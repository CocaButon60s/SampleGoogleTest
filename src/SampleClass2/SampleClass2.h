#include <iostream>
using namespace std;

class SampleClass2
{
private:
    string mName;

public:
    SampleClass2(const string &name);
    void PublicMethod1();
    void PublicMethod2();
    void InternalMethod();
};
