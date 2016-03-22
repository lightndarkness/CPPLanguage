// Fill out your copyright notice in the Description page of Project Settings.

#include "GoldenEgg.h"
#include "MyHUD.h"
#include "Avatar.h"


void AMyHUD::DrawHUD()
{
	// call superclass DrawHUD() function first
	Super::DrawHUD();

	DrawMessages();
	DrawHealthbar();
}

void AMyHUD::AddMessage(Message msg)
{
	messages.Add(msg);
}

void AMyHUD::DrawMessages()
{
	// iterate from back to front thru the list, so if we remove
	// an item while iterating, there won't be any problems
	for (int c = messages.Num() - 1; c >= 0; --c)
	{
		// draw the background box the right size for the message
		float outputWidth, outputHeight, pad = 10.f;
		GetTextSize(messages[c].message, outputWidth, outputHeight, hudFont, 1.f);

		float messageH = outputHeight + 2.f * pad;
		float x = 0.f, y = c*messageH;

		if (messages[c].tex)
		{
			DrawTexture(messages[c].tex, x, y, messageH, messageH, 0, 0, 1, 1);
		}
		else
		{
			DrawRect(FLinearColor::Red, x, y, messageH, messageH);
		}
		x += messageH;

		// black backing
		DrawRect(FLinearColor::Black, x, y, Canvas->SizeX, messageH);
		// draw our message using hudFont
		DrawText(messages[c].message, messages[c].color, x + pad, y + pad, hudFont);
		// draw an image for the charaacter

		// reduce lifetime by the time that passed since the last frame
		messages[c].time -= GetWorld()->GetDeltaSeconds();

		if (messages[c].time <= 0)
		{
			messages.RemoveAt(c);
		}
	}
}

void AMyHUD::DrawHealthbar()
{
	AAvatar *avatar = Cast<AAvatar>(UGameplayStatics::GetPlayerPawn(GetWorld(), 0));
	float barWidth = 200, barHeight = 50, barPad = 12, barMargin = 50;
	float percHp = avatar->Hp / avatar->MaxHp;
	DrawRect(FLinearColor(0, 0, 0, 1), Canvas->SizeX - barWidth - barPad - barMargin, Canvas->SizeY - barHeight - barPad - barMargin, barWidth + 2 * barPad, barHeight + 2 * barPad);
	DrawRect(FLinearColor(1 - percHp, percHp, 0, 1), Canvas->SizeX - barWidth - barMargin, Canvas->SizeY - barHeight - barMargin, barWidth*percHp, barHeight);
}
