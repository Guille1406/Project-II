#include "ChampionSoldier_Enemy.h"
#include"j1Enemy.h"
#include<math.h>
#include"j1Map.h"
#include"j1Pathfinding.h"
#include"j1Player.h"
#include"j1Audio.h"
Championsoldier_Enemy::Championsoldier_Enemy() :Enemy(enemyType::championsoldier_enemy)
{
	this->sprites_vector = App->enemy->enemy_shield_perf->sprites_vector;
	this->entity_texture = App->enemy->enemy_shield_perf->entity_texture;
	this->ChangeAnimation(1);
}

Championsoldier_Enemy::Championsoldier_Enemy(const Championsoldier_Enemy& chs_enemy) :Enemy(enemyType::championsoldier_enemy)
{
	this->collider = chs_enemy.collider;
	this->logic_height = chs_enemy.logic_height;
	this->sprites_vector = App->enemy->enemy_shield_perf->sprites_vector;
}

Championsoldier_Enemy::~Championsoldier_Enemy()
{
}

void Championsoldier_Enemy::Action()
{
	tile_pos.x = pos.x / 16;
	tile_pos.y = pos.y / 16;
	if (player_in_range == nullptr) {
		iPoint actual_tile = pos;
		if (passedtile == true) {
			temp_point = array_pos;
			array_pos = App->enemy->CalculatePath(this);
			if (array_pos == temp_point) {
				Path_Enemy.clear();
			}

		}

		int x = ((array_pos.x) - temp_point.x);


		int y = ((array_pos.y) - temp_point.y);


		pos.x += x;
		pos.y += y;

		if (x == 1) {
			Enemy_Orientation = OrientationEnemy::right_enemy;
		}
		else if (x == -1) {
			Enemy_Orientation = OrientationEnemy::left_enemy;
		}
		else if (y == 1) {
			Enemy_Orientation = OrientationEnemy::down_enemy;
		}
		else if (y == -1) {
			Enemy_Orientation = OrientationEnemy::up_enemy;
		}


		if ((actual_tile.x / 16) == array_pos.x && (actual_tile.y / 16) == array_pos.y) {
			passedtile = true;
		}
		else {
			passedtile = false;
		}
	}
	else {


	}
}


