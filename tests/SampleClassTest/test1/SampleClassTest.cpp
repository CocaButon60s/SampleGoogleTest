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

TEST_F(SampleClassTest, クラスの初期化)
{
    ASSERT_EQ(mObj->mName, "Tester");
}
TEST_F(SampleClassTest, PublicMethod1の動作確認)
{
    mObj->PublicMethod1();
    ASSERT_EQ(mObj->mName, "public1");
}
TEST_F(SampleClassTest, PublicMethod2の動作確認)
{
    mObj->PublicMethod2();
    ASSERT_EQ(mObj->mName, "internal");
}

int main(int argc, char **argv)
{
    ::testing::InitGoogleMock(&argc, argv);
    return RUN_ALL_TESTS();
}