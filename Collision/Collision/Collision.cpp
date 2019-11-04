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

	float x, y;

	switch (move_deflection)
	{
	case UPRIGHT:

		block_in_distance_x = X - map_x;
		block_in_distance_y = Y - (map_y - 64);

		x = (block_in_distance_x / X) * 100;
		y = (block_in_distance_y / Y) * 100;

		if (x < y)
		{
			return LEFT;
		}
		if (x > y)
		{
			return BOTTOM;
		}

		return NoHit;

	case UPLEFT:

		block_in_distance_x = (map_x + 64) - X;
		block_in_distance_y = Y - (map_y - 64);

		x = (block_in_distance_x / X) * 100;
		y = (block_in_distance_y / Y) * 100;

		if (x < y)
		{
			return RIGHT;
		}
		if (x > y)
		{
			return BOTTOM;
		}

		return NoHit;


	case DOWNRIGHT:

		block_in_distance_x = X - map_x;
		block_in_distance_y = Y - map_y;

		x = (block_in_distance_x / X) * 100;
		y = (block_in_distance_y / Y) * 100;

		if (x < y)
		{
			return LEFT;
		}
		if (x > y)
		{
			return TOP;
		}

		return NoHit;

	case DOWNLEFT:

		break;
	}

}
 