#include "Engine.h"
#include <plog/Initializers/RollingFileInitializer.h>

void Init()
{
	plog::init(plog::verbose, "../Logs/supetorion_log.txt", 1000000, 5);
	PLOGI << "Initializing";
}

int main()
{
	return 0;
}