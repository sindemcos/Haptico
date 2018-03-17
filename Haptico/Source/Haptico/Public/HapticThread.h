/* Copyright (C) 2018 Sinan Demirtas
*
* This software may be distributed under the terms
* of the MIT license. See the LICENSE file for details.
*/
#pragma once
#include "AsyncWork.h"
#include "IHaptico.h"

class AHapticsManager;

class HAPTICO_API FHapticThread : public FNonAbandonableTask
{
	friend class FAutoDeleteAsyncTask<FHapticThread>;

public:
	FHapticThread(IHaptico& hapticoModule, AHapticsManager* hManager) :
		haptico(hapticoModule),
		hapticsManager(hManager)
	{}

protected:
	IHaptico& haptico;
	AHapticsManager* hapticsManager;

	/**
	* this is the haptic thread that retrieves the data from the device and sets forces and torques
	*/
	void DoWork();

	FORCEINLINE TStatId GetStatId() const
	{
		RETURN_QUICK_DECLARE_CYCLE_STAT(FHapticThread, STATGROUP_ThreadPoolAsyncTasks);
	}
};