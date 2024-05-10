#pragma once
#include <filesystem>
#include <string>
#include <memory>
#include "Singleton.h"
#include "Sound.h"

namespace amu
{
	class Texture2D;
	class Font;
	class ResourceManager final : public Singleton<ResourceManager>
	{
	public:
		void Init(const std::filesystem::path& data);
		std::unique_ptr<Texture2D> LoadTexture(const std::string_view& file) const;
		std::unique_ptr<Font> LoadFont(const std::string_view& file, unsigned int size) const;
		std::unique_ptr<SoundEffect> LoadSoundEffect(const std::string_view& file) const;
	private:
		friend class Singleton<ResourceManager>;
		ResourceManager() = default;
		std::filesystem::path m_DataPath = "";
	};
}
