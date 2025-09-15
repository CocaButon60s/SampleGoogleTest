#include <gmock/gmock.h>
#include <gtest/gtest.h>
#define private public
#include <SampleClass.h>
#include <Mock.h>
using namespace std;

class SampleClassTest : public ::testing::Test
{
protected:
    SampleClass *mObj;
    void SetUp() override
    {
        mObj = new SampleClass("Tester");
    }
    void TearDown() override
    {
        delete mObj;
    }
};

TEST_F(SampleClassTest, Mockの動作確認)
{
    mObj->PublicMethod2();
    ASSERT_EQ(mObj->mName, "public2");
}
TEST_F(SampleClassTest, unique_ptr動作)
{
    conf.config["key1"] = "value1";
    auto json = func();
    cout << (*json)["key1"] << endl;
    json = func();
    cout << (*json)["key1"] << endl;
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}