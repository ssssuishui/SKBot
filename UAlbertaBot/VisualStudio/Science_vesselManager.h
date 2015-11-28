#pragma once;

#include <Common.h>
#include "MicroManager.h"

namespace UAlbertaBot
{
	class Science_vesselManager : public MicroManager
	{
	public:

		Science_vesselManager();
		void executeMicro(const BWAPI::Unitset & targets);
	};
}