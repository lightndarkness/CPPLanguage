// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/HUD.h"
#include "MyHUD.generated.h"

/**
 * 
 */

struct Message
{
	FString message;
	float time;
	FColor color;
	UTexture2D* tex;
	Message()
	{
		// Set the default time.
		time = 5.f;
		color = FColor::White;
	}

	Message(FString iMessage, float iTime, FColor iColor, UTexture2D* iTexture)
	{
		message = iMessage;
		time = iTime;
		color = iColor;
		tex = iTexture;
	}
};

UCLASS()
class GOLDENEGG_API AMyHUD : public AHUD
{
	GENERATED_BODY()
	
public:
	/** The font used to render the text in the HUD. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HUDFont")
	UFont* hudFont;

	/** An array of messages for display */
	TArray<Message> messages;

	/** Add this function to be able to draw to the HUD. */
	virtual void DrawHUD() override;

	/** A function to be able to add a message to display. */
	void AddMessage(Message msg);

	/** Function that Draw the message to the screen. */
	void DrawMessages();

	void DrawHealthbar();
	
	
};
