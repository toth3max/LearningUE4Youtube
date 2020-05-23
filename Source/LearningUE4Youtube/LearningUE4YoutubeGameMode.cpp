// Copyright Epic Games, Inc. All Rights Reserved.

#include "LearningUE4YoutubeGameMode.h"
#include "LearningUE4YoutubeCharacter.h"
#include "UObject/ConstructorHelpers.h"

ALearningUE4YoutubeGameMode::ALearningUE4YoutubeGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
