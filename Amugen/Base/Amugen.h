#pragma once
#include <string>
#include <functional>
#include <filesystem>

namespace amu
{
	class Amugen final
	{
	public:
		explicit Amugen(const std::filesystem::path& dataPath, int width, int height);
		~Amugen();
		void Run();
		void RunOneFrame();

		Amugen(const Amugen& other) = delete;
		Amugen(Amugen&& other) = delete;
		Amugen& operator=(const Amugen& other) = delete;
		Amugen& operator=(Amugen&& other) = delete;
	private:
		SDL_Window* m_WindowPtr{};
		bool m_Quit{};
	};
}