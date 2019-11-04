// Collision.cpp : スタティック ライブラリ用の関数を定義します。
//

#include "pch.h"
#include "framework.h"


#include "Collision.h"

int Collision::Subtraction(int var1, int var2)
{
	int a;
	a = var1 - var2;
	return a;
}

int Collision::VectorCalculation(int X, int Y, int move_deflection)
{

	float a, b;

	switch (move_deflection)
	{
	case UPRIGHT:

		block_in_distance_x = X - map_x;
		block_in_distance_y = Y - (map_y - 64);

		a = (block_in_distance_x / X) * 100;
		b = (block_in_distance_y / Y) * 100;

		if (a < b)
		{
			return LEFT;
		}
		if (a > b)
		{
			return BOTTOM;
		}

		return NoHit;

		break;
	case UPLEFT:
		break;

	case DOWNRIGHT:

		block_in_distance_x = X - map_x;
		block_in_distance_y = Y - map_y;

		a = (block_in_distance_x / X) * 100;
		b = (block_in_distance_y / Y) * 100;

		if (a < b)
		{
			return LEFT;
		}
		if (a > b)
		{
			return TOP;
		}

		return NoHit;

	case DOWNLEFT:

		break;
	}

}
 