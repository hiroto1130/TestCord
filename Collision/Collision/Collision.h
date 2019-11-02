#ifndef COLLISION_H
#define COLLISION_H

enum
{
	UP,
	LEFT,
	NoHit

};


class Collision
{
private:
	float map_x = 128;
	float map_y = 128;

	float before_x = 100;
	float before_y = 100;
	
	float block_in_distance_x = 0;
	float block_in_distance_y = 0;
	
	float move_distance_x = 0;
	float move_distance_y = 0;

public:
	int Subtraction(int var1,int var2);

	int VectorCalculation(int X,int Y);

};


#endif // !1