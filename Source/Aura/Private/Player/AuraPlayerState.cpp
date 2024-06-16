// Copyright mumu


#include "Player/AuraPlayerState.h"

AAuraPlayerState::AAuraPlayerState()
{
	// How often the server attempts to update the clientHow often the server attempts to update the client
	// normally net update frequency is about 0.5sec, it's too slow to update ability system in rpg 
	NetUpdateFrequency = 100.f;
}
