// Copyright 2017 Isaac Hsu.

#pragma once

#include "Factories/Factory.h"
#include "ActionBlueprintFactory.generated.h"

/**
 * 
 */
UCLASS()
class ACTIONGRAPHEDITOR_API UActionBlueprintFactory : public UFactory
{
	GENERATED_UCLASS_BODY()

	//~ Begin UFactory Interface
	virtual UObject* FactoryCreateNew(UClass* Class,UObject* InParent,FName Name,EObjectFlags Flags,UObject* Context,FFeedbackContext* Warn) override;
	//~ Begin UFactory Interface	
};
