#include"j1Collision.h"
#include"j1App.h"
#include"j1Player.h"
#include"j1Render.h"
#include"Color.h"
j1Collision::j1Collision()
{
	//for (uint i = 0; i < colliders.size(); ++i)
		//colliders[i] = nullptr;
	for (int i = 0; i < MAX_COLLIDERS; i++) {
		for (int n = 0; n < MAX_COLLIDERS; n++) {
			matrix[i][n] = false;
		}
	}
	
	//LINK
	matrix[collider_link][collider_zelda] = true;
	matrix[collider_link][collider_button] = true;
	matrix[collider_link][collider_change_height] = true;
	matrix[collider_link][collider_enemy] = true;
	matrix[collider_link][collider_double_button] = true;
	matrix[collider_link][collider_warp] = true;
	matrix[collider_link][collider_fall] = true;
	matrix[collider_link][coolider_bomb_explosion] = true;
	matrix[collider_link][collider_colour_block] = true;
	//matrix[collider_link][collider_boss_foot] = true;
	matrix[collider_link][collider_heart] = true;
	matrix[collider_link][collider_boss_hit] = true;
	matrix[collider_link][collider_boss_explosion] = true;
	matrix[collider_link][collider_container_heart] = true;
	matrix[collider_link][collider_npc] = true;


	//FRONT LINK
	matrix[front_link][collider_jump] = true;
	matrix[front_link][collider_zelda] = true;
	matrix[front_link][collider_movable_object] = true;
	matrix[front_link][collider_npc] = true;
	//ZELDA
	matrix[collider_zelda][collider_link] = true;
	matrix[collider_zelda][collider_button] = true;
	matrix[collider_zelda][collider_change_height] = true;
	matrix[collider_zelda][front_link] = true;
	matrix[collider_zelda][collider_enemy] = true;
	matrix[collider_zelda][collider_warp] = true;
	matrix[collider_zelda][collider_double_button] = true;
	matrix[collider_zelda][collider_fall] = true;
	matrix[collider_zelda][coolider_bomb_explosion] = true;
	matrix[collider_zelda][collider_colour_block] = true;
	//matrix[collider_zelda][collider_boss_foot] = true;
	matrix[collider_zelda][collider_heart] = true;
	matrix[collider_zelda][collider_boss_hit] = true;
	matrix[collider_zelda][collider_boss_explosion] = true;
	matrix[collider_zelda][collider_boss_recover] = true;
	matrix[collider_zelda][collider_container_heart] = true;
	matrix[collider_zelda][collider_npc] = true;
	matrix[collider_zelda][collider_electric_ball] = true;

	//FRONT ZELDA
	matrix[front_zelda][collider_jump] = true;
	matrix[front_zelda][collider_movable_object] = true;
	matrix[front_zelda][collider_npc] = true;
	//ARROW
	matrix[collider_arrow][collider_enemy] = true;
	matrix[collider_arrow][collider_diana] = true;
	matrix[collider_arrow][collider_boss_eye] = true;
	matrix[collider_arrow][collider_boss_little_eye] = true;
	matrix[collider_arrow][collider_electric_ball] = true;

	//sword
	matrix[collider_link_sword][collider_enemy] = true;
	matrix[collider_link_sword][collider_enemy_sword] = true;
	matrix[collider_link_sword][collider_boss_foot] = true;
	matrix[collider_link_sword][collider_bush] = true;
	matrix[collider_enemy_sword][collider_link_sword] = true;

	matrix[collider_enemy_sword][collider_zelda] = true;
	//in vertical slice all modules will have on collision and this will be not needeed two times 
	matrix[collider_zelda][collider_enemy_sword] = true;
	matrix[collider_enemy_sword][collider_link] = true;
	matrix[collider_link][collider_enemy_sword] = true;
	//ENEMY
	matrix[collider_enemy][collider_link] = true;
	matrix[collider_enemy][collider_link_sword] = true;
	matrix[collider_enemy][collider_zelda] = true;
	matrix[collider_enemy][collider_arrow] = true;

	//BUTTON
	matrix[collider_button][collider_link] = true;
	matrix[collider_button][collider_zelda] = true;

	//DIANA
	matrix[collider_diana][collider_arrow] = true;

	//CHANGE HEIGHT
	matrix[collider_change_height][collider_link] = true;
	matrix[collider_change_height][collider_zelda] = true;
	//JUMP
	matrix[collider_jump][front_link] = true;
	matrix[collider_jump][front_zelda] = true;
	
	//DOUBLE BUTTON
	matrix[collider_double_button][collider_link] = true;
	matrix[collider_double_button][collider_zelda] = true;
	//WARP
	matrix[collider_warp][collider_link] = true;
	matrix[collider_warp][collider_zelda] = true;

	//FALL
	matrix[collider_fall][collider_link] = true;
	matrix[collider_fall][collider_zelda] = true;

	//BOMB EXPLOSION
	matrix[coolider_bomb_explosion][collider_link] = true;
	matrix[coolider_bomb_explosion][collider_zelda] = true;
	
	//MOVABLE OBJECT
	matrix[collider_movable_object][front_link] = true;
	matrix[collider_movable_object][front_zelda] = true;

	//COLOUR BLOCK
	matrix[collider_colour_block][collider_link] = true;
	matrix[collider_colour_block][collider_zelda] = true;

	//BUSH
	matrix[collider_bush][collider_link_sword] = true;
	//HEART
	matrix[collider_heart][collider_link] = true;
	matrix[collider_heart][collider_zelda] = true;
	matrix[collider_container_heart][collider_link] = true;
	matrix[collider_container_heart][collider_zelda] = true;
	
	//BOSS FOOT & EYE
	//matrix[collider_boss_foot][collider_link] = true;
	//matrix[collider_boss_foot][collider_zelda] = true;
	matrix[collider_boss_foot][collider_link_sword] = true;
	matrix[collider_boss_eye][collider_arrow] = true;
	matrix[collider_boss_hit][collider_link] = true;
	matrix[collider_boss_hit][collider_link] = true;
	matrix[collider_boss_explosion][collider_zelda] = true;
	matrix[collider_boss_explosion][collider_link] = true;
	matrix[collider_boss_recover][collider_zelda] = true;
	matrix[collider_boss_little_eye][collider_arrow] = true;

	//NPC COLLIDER
	matrix[collider_npc][collider_link] = true;
	matrix[collider_npc][collider_zelda] = true;

	matrix[collider_electric_ball][collider_zelda] = true;
	matrix[collider_electric_ball][collider_arrow] = true;


	matrix[collider_npc][front_link] = true;
	matrix[collider_npc][front_zelda] = true;


}

// Destructor
j1Collision::~j1Collision()
{}

bool j1Collision::Start()
{

	
	return true;
}

bool j1Collision::PreUpdate()
{
	if (!paused) {
		// Remove all colliders scheduled for deletion
		/*for (uint i = 0; i < colliders.size(); ++i)
		{
			if (colliders[i] != nullptr && colliders[i]->to_delete == true)
			{
				delete colliders[i];
				colliders[i] = nullptr;
			}
		}*/


		for (std::vector<Collider*>::const_iterator it = colliders.cbegin(); it != colliders.cend(); ++it) {
			if ((*it) != nullptr && (*it)->to_delete == true)
			{
				colliders.erase(it);
				--it;
			}
		}


	}
	return true;
	}




// Called before render is available
bool j1Collision::Update(float dt)
{
	
	if (!paused) {
		Collider* c1;
		Collider* c2;
		
		for (uint i = 0; i < colliders.size(); ++i)
		{

			// skip empty colliders
			if (colliders[i] == nullptr)
				continue;

			c1 = colliders[i];
			if (c1->type == COLLIDER_TYPE::collider_colour_block )
				continue;
			for (uint n = colliders.size(); n < MAX_COLLIDERS; n++) {
				c1->state_collider[n] = not_colliding;
			}

			
			// avoid checking collisions already checked
			for (uint k = i + 1; k < colliders.size(); ++k)
			{

				// skip empty colliders
				if (colliders[k] == nullptr)
					continue;

				c2 = colliders[k];

				
				if (c1->CheckCollision(c2->rect, k) == true)
				{
					if (matrix[c1->type][c2->type] && c1->callback)
					{
						if (c2->type == collider_warp) {
							int a = 0;
						}
						if (c1->logic_height == c2->logic_height){							
								if (c1->state_collider[k] == im_colliding)
									c1->callback->OnCollision(c1, c2);
								else if (c1->state_collider[k] == start_collision)
									c1->callback->StartCollision(c1, c2);
								
							}
						//App->render->Blit(App->player->graphics, App->player->PreviousPos.x, App->player->PreviousPos.y-1, &(App->player->current_animation->GetCurrentFrame()));

					}


					if (matrix[c2->type][c1->type] && c2->callback)
					{
						if (c1->logic_height == c2->logic_height) {
							if(c1->state_collider[k] == im_colliding)
								c2->callback->OnCollision(c2, c1);
							else if(c1->state_collider[k] == start_collision)
								c2->callback->StartCollision(c2, c1);
							
						}
							
					}


				}

				if (colliders.size() > 0) {
					if (matrix[c1->type][c2->type] && c1->callback)
					{
						if (c1->parent->logic_height == c2->parent->logic_height) {
							if (c1->state_collider[k] == end_collision)
								c1->callback->EndCollision(c1, c2);
						}
					}
				}
			}
		}
		
		DebugDraw();
	}
	return true;
}

void j1Collision::DebugDraw()
{

	if (App->input->GetKey(SDL_SCANCODE_F1) == KEY_DOWN)
		debug = !debug;

	if (debug == false)
		return;

	Uint8 alpha = 80;
	for (uint i = 0; i < colliders.size(); ++i)
	{
		if (colliders[i] == nullptr)
			continue;

		switch (colliders[i]->type)
		{
		case collider_link: // green
			App->render->DrawQuad(colliders[i]->rect, 12, 198, 0, alpha);
			break;
		case front_link: // pink
			App->render->DrawQuad(colliders[i]->rect, 245, 25, 219, alpha);
			break;
		case collider_zelda: // pink
			App->render->DrawQuad(colliders[i]->rect, 245, 25, 219, alpha);
			break;
		case front_zelda: // pink
			App->render->DrawQuad(colliders[i]->rect, 245, 25, 219, alpha);
			break;
		case collider_arrow:
			App->render->DrawQuad(colliders[i]->rect, 245, 25, 219, 255);
			break;

		case collider_chest: 
			App->render->DrawQuad(colliders[i]->rect, 255, 255, 255, 255);
			break;
		case collider_button:
			App->render->DrawQuad(colliders[i]->rect, 150, 65, 255, 255);
			break;
		case collider_double_button:
			App->render->DrawQuad(colliders[i]->rect, 150, 65, 255, 255);
			break;
		case collider_diana:
			App->render->DrawQuad(colliders[i]->rect, 0, 255, 0, 255);
			break;
		case collider_change_height:
			App->render->DrawQuad(colliders[i]->rect, 255, 255, 255, 255);
			break;
		case collider_movable_object:
			App->render->DrawQuad(colliders[i]->rect, 255, 255, 255, 255);
			break;
		case collider_colour_block: {


			Object* temp = (Object*)colliders[i]->parent;
			if (temp->active)
				App->render->DrawQuad(colliders[i]->rect, 255, 255, 255, 255);
			break;
		}

		case collider_boss_hit:
			App->render->DrawQuad(colliders[i]->rect, 255, 255, 255, 255);
			break;
		case collider_boss_explosion:
			App->render->DrawQuad(colliders[i]->rect, 255, 255, 255, 255);
			break;
		case collider_jump:
			App->render->DrawQuad(colliders[i]->rect, 255, 0, 255, 255);
			break;
		case collider_boss_foot:
			//App->render->DrawQuad(colliders[i]->rect, 255, 0, 255, 255);
			break;
		case collider_boss_eye:
			App->render->DrawQuad(colliders[i]->rect, 255, 0, 0, 255);
			break;
		case collider_boss_little_eye:
			App->render->DrawQuad(colliders[i]->rect, 255, 0, 0, 255);
			break;
		case collider_enemy:
			App->render->DrawQuad(colliders[i]->rect, 0, 255, 255, alpha);
			break;
		case collider_link_sword:
			App->render->DrawQuad(colliders[i]->rect, Black(1), Black(2), Black(3), alpha);
			break;
		case collider_enemy_sword:
			App->render->DrawQuad(colliders[i]->rect, 255, 0, 0, alpha);
			break;
		case collider_heart:
			App->render->DrawQuad(colliders[i]->rect, Violet(1), Violet(2), Violet(3), alpha);
			break;
		case coolider_bomb_explosion:
			App->render->DrawQuad(colliders[i]->rect, White(1), White(2), White(3), alpha);
			break;
		case collider_npc:
			App->render->DrawQuad(colliders[i]->rect, Red(1), Red(2), Red(3), alpha);
			break;
		case collider_door:
			Object* temp = (Object*)colliders[i]->parent;
			if (temp->active) {
				App->render->DrawQuad(colliders[i]->rect, 0, 0, 0, 255);
			}
			break;
		
		}
	}
}

// Called before quitting
bool j1Collision::CleanUp()
{
	LOG("Freeing all colliders");
	for (std::vector<Collider*>::iterator item = colliders.begin(); item != colliders.cend(); ++item)
		RELEASE(*item);
	colliders.clear();

	return true;
}

Collider* j1Collision::AddCollider(SDL_Rect rect, COLLIDER_TYPE type,Entity* parent, j1Module* callback)
{
	Collider* ret = nullptr;
	
			ret = new Collider(rect, type, parent, callback);
			colliders.push_back(ret);

	return ret;
}

bool j1Collision::EraseCollider(Collider* collider)
{
	if (collider != nullptr)
	{
		// we still search for it in case we received a dangling pointer
		for (uint i = 0; i < colliders.size(); ++i)
		{
			if (colliders[i] == collider)
			{
				collider->to_delete = true;
				break;
			}
		}
	}


	return false;
}

// -----------------------------------------------------

bool Collider::CheckCollision(const SDL_Rect& r, int k) 
{
	if (this->type == collider_link && k == 10)
		int x = 0;
	if ((rect.x < r.x + r.w &&	rect.x + rect.w > r.x && rect.y < r.y + r.h && rect.h + rect.y > r.y)) {
		if (this->type == front_link)
			int x = 0;
		if (this->state_collider[k] == not_colliding) {
			this->state_collider[k] = start_collision;
		}
		else if (this->state_collider[k] == start_collision) {
			this->state_collider[k] = im_colliding;
		}
	}
	else {
		if (this->state_collider[k] == im_colliding || this->state_collider[k] == start_collision) {
			this->state_collider[k] = end_collision;
		}
		else if (this->state_collider[k] == end_collision)
			this->state_collider[k] = not_colliding;
	}
	return (rect.x < r.x + r.w &&
		rect.x + rect.w > r.x &&
		rect.y < r.y + r.h &&
		rect.h + rect.y > r.y);
}