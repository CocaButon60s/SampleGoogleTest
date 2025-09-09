#include <SampleClass.h>
#include <SampleClass2.h>

int main(void)
{
    SampleClass obj1("Object1");
    SampleClass2 obj2("Object2");

    obj1.PublicMethod1();
    obj2.PublicMethod1();

    return 0;
}