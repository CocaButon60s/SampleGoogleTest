#include <gmock/gmock.h>
#include <gtest/gtest.h>
#define private public
#include <SampleClass.h>
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

int main(int argc, char **argv)
{
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}