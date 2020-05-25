#pragma once


#ifndef TEXTURE_HOLDER_H
#define	TEXTURE_HOLDER_H


#include <SFML/Graphics.hpp>
#include <map>

class TextureHolder
{
public:
	TextureHolder();
	static sf::Texture& GetTexture(const std::string& filename );
private:
	std::map<std::string, sf::Texture> m_Textures;
	static TextureHolder* m_s_Instance;


};
#endif // !TEXTURE_HOLDER_H
