#include "pch.h"

#include"../Collision/Collision.h"

Collision collision;
 
// 成功パターン
TEST(LeftCase, Test1) {
  EXPECT_EQ(LEFT,collision.VectorCalculation(130,150, DOWNRIGHT));
}
// 失敗パターン
TEST(LeftCase, Test2) {
	EXPECT_EQ(LEFT, collision.VectorCalculation(180, 150, DOWNRIGHT));
}
// 失敗パターン
TEST(UpCase, Test3) {
	EXPECT_EQ(TOP, collision.VectorCalculation(130, 150, DOWNRIGHT));
}
// 成功パターン
TEST(UpCase, Test4) {
	EXPECT_EQ(TOP, collision.VectorCalculation(180, 150, DOWNRIGHT));
}
// 当たらないパターン
TEST(NoHitCase, Test5) {
	EXPECT_EQ(NoHit, collision.VectorCalculation(120, 120, DOWNRIGHT));
}

// --------------------------------------------------------------------------------- //

// 成功パターン
TEST(LeftCase, Test6) {
	EXPECT_EQ(LEFT, collision.VectorCalculation(140, 100, UPRIGHT));
}

// 失敗パターン
TEST(LeftCase, Test7) {
	EXPECT_EQ(LEFT, collision.VectorCalculation(170, 80, UPRIGHT));
}

// 失敗パターン
TEST(UpCase, Test8) {
	EXPECT_EQ(BOTTOM, collision.VectorCalculation(140, 100, UPRIGHT));
}

// 成功パターン
TEST(UpCase, Test9) {
	EXPECT_EQ(BOTTOM, collision.VectorCalculation(170, 80, UPRIGHT));
}

// 当たらないパターン
TEST(NoHitCase, Test10) {
	EXPECT_EQ(NoHit, collision.VectorCalculation(120, 60, UPRIGHT));
}

// --------------------------------------------------------------------------------- //


// 成功パターン
TEST(LeftCase, UpLeft1) {
	EXPECT_EQ(RIGHT, collision.VectorCalculation(160, 100, UPLEFT));
}

// 失敗パターン
TEST(LeftCase, UpLeft2) {
	EXPECT_EQ(RIGHT, collision.VectorCalculation(130, 80, UPLEFT));
}

// 失敗パターン
TEST(UpCase, UpLeft3) {
	EXPECT_EQ(BOTTOM, collision.VectorCalculation(160, 100, UPLEFT));
}

// 成功パターン
TEST(UpCase, UpLeft4) {
	EXPECT_EQ(BOTTOM, collision.VectorCalculation(130, 80, UPLEFT));
}

// 当たらないパターン
TEST(NoHitCase, UpLeft5) {
	EXPECT_EQ(NoHit, collision.VectorCalculation(200, 60, UPLEFT));
}