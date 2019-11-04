#include "pch.h"

#include"../Collision/Collision.h"

Collision collision;
 
TEST(LeftCase, Test1) {
  EXPECT_EQ(LEFT,collision.VectorCalculation(130,150));
}

TEST(LeftCase, Test2) {
	EXPECT_EQ(LEFT, collision.VectorCalculation(150, 180));
}

TEST(UpCase, Test3) {
	EXPECT_EQ(UP, collision.VectorCalculation(150, 140));
}

TEST(UpCase, Test4) {
	EXPECT_EQ(UP, collision.VectorCalculation(180, 150));
}

TEST(NoHitCase, Test5) {
	EXPECT_EQ(NoHit, collision.VectorCalculation(120, 120));
}
