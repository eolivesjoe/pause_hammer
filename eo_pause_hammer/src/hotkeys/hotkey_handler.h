#pragma once

#include "../process/thread_manager.h"

namespace hotkeys 
{
	class Handler
	{
	public:
		Handler(process::ThreadManager& manager);

		void listener();

	private:
		process::ThreadManager& m_manager;
	};
} // namespace hotkeys