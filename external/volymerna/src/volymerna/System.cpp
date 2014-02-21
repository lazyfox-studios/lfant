
#include <volymerna/System.h>

// internal
#include <volymerna/Sound.h>

// external

namespace volymerna {

System* System::instance;

System::System()
{
	instance = this;
}

System::~System()
{
}

System* System::Get()
{
	return instance;
}

void System::Init()
{

}

float System::GetDeltaTime()
{
	return deltaTime;
}

}
