#include "pch.h"

#include"../Collision/Collision.h"

Collision collision;
 
// �����p�^�[��
TEST(LeftCase, Test1) {
  EXPECT_EQ(LEFT,collision.VectorCalculation(130,150, DOWNRIGHT));
}
// ���s�p�^�[��
TEST(LeftCase, Test2) {
	EXPECT_EQ(LEFT, collision.VectorCalculation(180, 150, DOWNRIGHT));
}
// ���s�p�^�[��
TEST(UpCase, Test3) {
	EXPECT_EQ(TOP, collision.VectorCalculation(130, 150, DOWNRIGHT));
}
// �����p�^�[��
TEST(UpCase, Test4) {
	EXPECT_EQ(TOP, collision.VectorCalculation(180, 150, DOWNRIGHT));
}
// ������Ȃ��p�^�[��
TEST(NoHitCase, Test5) {
	EXPECT_EQ(NoHit, collision.VectorCalculation(120, 120, DOWNRIGHT));
}

// --------------------------------------------------------------------------------- //

// �����p�^�[��
TEST(LeftCase, Test6) {
	EXPECT_EQ(LEFT, collision.VectorCalculation(140, 100, UPRIGHT));
}

// ���s�p�^�[��
TEST(LeftCase, Test7) {
	EXPECT_EQ(LEFT, collision.VectorCalculation(170, 80, UPRIGHT));
}

// ���s�p�^�[��
TEST(UpCase, Test8) {
	EXPECT_EQ(BOTTOM, collision.VectorCalculation(140, 100, UPRIGHT));
}

// �����p�^�[��
TEST(UpCase, Test9) {
	EXPECT_EQ(BOTTOM, collision.VectorCalculation(170, 80, UPRIGHT));
}

// ������Ȃ��p�^�[��
TEST(NoHitCase, Test10) {
	EXPECT_EQ(NoHit, collision.VectorCalculation(120, 60, UPRIGHT));
}

