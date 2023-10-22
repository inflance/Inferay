#pragma once

#include "Macro.hpp"

#include <chrono>

namespace Inferay
{
	class INFERAY_API Timer
	{
	public:
		Timer() : m_start_time(), m_end_time(), m_is_running(false)
		{
		}

		void Start()
		{
			m_start_time = std::chrono::high_resolution_clock::now();
			m_is_running = true;
		}

		void Stop()
		{
			m_end_time = std::chrono::high_resolution_clock::now();
			m_is_running = false;
		}

		INFERAY_NODISCARD double ElapsedSeconds() const
		{
			const std::chrono::duration<double> duration = m_end_time - m_start_time;
			return duration.count();
		}

		INFERAY_NODISCARD double ElapsedMilliseconds() const
		{
			const std::chrono::duration<double, std::milli> duration = m_end_time - m_start_time;
			return duration.count();
		}

	private:
		std::chrono::time_point<std::chrono::high_resolution_clock> m_start_time;
		std::chrono::time_point<std::chrono::high_resolution_clock> m_end_time;
		bool m_is_running;
	};
}
