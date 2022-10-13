#include <gtest/gtest.h>
#include <iostream>
#include "crt_debug.h"
#include "MyArray.h"

using namespace std;

TEST(TestMain, SpecifySize) {
    MyArray inst1(3);
    MyArray inst2(7);
    cout << "ins1: " << inst1 << endl;
    cout << "ins2: " << inst2 << endl;
    ASSERT_EQ(3, inst1.size());
    ASSERT_EQ(7, inst2.size());
    ASSERT_EQ("{0, 0, 0}", inst1.toString());
    ASSERT_EQ("{0, 0, 0, 0, 0, 0, 0}", inst2.toString());
}
TEST(TestMain, addName) {
    MyArray inst10(3, "inst10");
    MyArray inst20(7, "inst20");
    ASSERT_EQ("inst10", inst10.name());
    inst20.setName("inst21");
    ASSERT_EQ("inst21", inst20.name());
    ASSERT_EQ(3, inst10.size());
    ASSERT_EQ(7, inst20.size());
    ASSERT_EQ("{0, 0, 0}", inst10.toString());
    ASSERT_EQ("{0, 0, 0, 0, 0, 0, 0}", inst20.toString());
    
}

TEST(TestMain, BracedInitializer) {
    MyArray inst0{ 0, 3, 5, 7, 9 };
    inst0.setName("BracedInitializer");
    ASSERT_EQ(5, inst0.size());
    constexpr string_view strExp{ "{0, 3, 5, 7, 9}" };
    ASSERT_EQ(strExp, inst0.toString());
}
int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
#if _DEBUG
    _CrtMemState memoryState = { 0 };
    _CrtMemCheckpoint(&memoryState);
#endif
    auto res = RUN_ALL_TESTS();
#if _DEBUG
    _CrtMemDumpAllObjectsSince(&memoryState);
#endif
    return res;
}
