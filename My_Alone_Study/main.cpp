#include "Swrord.h"
#include "Ammor.h"

int main(void)
{
	Equipment* Sword_01 = new Sword("sword",10);
	Equipment* ammor_01 = new Ammor("ammo", 5);


	// 포션 만들고 포션 매니저 만들어서 포션 관리 하는거 
	// GameManager

	// 삭제 
	delete Sword_01;
	delete ammor_01;


	return 0;
}