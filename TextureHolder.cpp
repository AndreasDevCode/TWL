#include "TextureHolder.h"
#include <assert.h>



TextureHolder* TextureHolder::m_s_Instance = nullptr;
TextureHolder::TextureHolder()
{
	// assures ther is not already are any instance initiated
	assert(m_s_Instance == nullptr);	
	m_s_Instance = this;
}


sf::Texture& TextureHolder::GetTexture(const std::string& filename)
{
	auto& m = m_s_Instance->m_Textures;
	auto keyValuePair = m.find(filename);

	if (keyValuePair != m.end())
	{
		return keyValuePair->second;
	}
	else {

		auto& texture = m[filename];
		texture.loadFromFile(filename);
		return texture;
	}


	
}
