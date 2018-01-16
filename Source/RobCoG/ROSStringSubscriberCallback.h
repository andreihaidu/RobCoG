// Copyright 2018, Institute for Artificial Intelligence - University of Bremen
// Author: Andrei Haidu (http://haidu.eu)

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "ROSBridgeHandler.h"
#include "ROSBridgeSubscriber.h"
#include "std_msgs/String.h"

/**
 * 
 */
class ROBCOG_API FROSStringSubscriberCallback : public FROSBridgeSubscriber 
{
public:
	FROSStringSubscriberCallback(FString InTopic);
	~FROSStringSubscriberCallback() override;
	TSharedPtr<FROSBridgeMsg> ParseMessage(TSharedPtr<FJsonObject> JsonObject) const override;
	void CallBack(TSharedPtr<FROSBridgeMsg> Msg) override;
};