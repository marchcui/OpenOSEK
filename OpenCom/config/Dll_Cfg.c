#include "Dll.h"
#include "Can.h"

EXPORT void BusInit(NetIdType NetId)
{
	if(0u == NetId)
	{
		(void)Can_SetControllerMode(CAN_CTRL_0,CAN_T_START);
	}
}

EXPORT void BusSleep(NetIdType NetId)
{
	if(0u == NetId)
	{
		(void)Can_SetControllerMode(CAN_CTRL_0,CAN_T_SLEEP);
		printf("Sleep ~_~\n");
	}
}

