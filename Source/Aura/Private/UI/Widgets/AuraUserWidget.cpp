// Fill out your copyright notice in the Description page of Project Settings.


#include "UI/Widgets/AuraUserWidget.h"

void UAuraUserWidget::SetWidgetController(UObject* InWidgetController)
{
	WidgetController = InWidgetController;
	// When we implement WidgetControllerSet() in blueprint, we know our widgetcontroller will be set! 
	WidgetControllerSet();
}

