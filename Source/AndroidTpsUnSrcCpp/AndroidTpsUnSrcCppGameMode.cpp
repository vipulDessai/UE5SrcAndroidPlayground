// Copyright Epic Games, Inc. All Rights Reserved.

#include "AndroidTpsUnSrcCppGameMode.h"
#include "AndroidTpsUnSrcCppCharacter.h"
#include "UObject/ConstructorHelpers.h"

AAndroidTpsUnSrcCppGameMode::AAndroidTpsUnSrcCppGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
