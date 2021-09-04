#pragma once

#include <SFML/Graphics.hpp>
#include <fstream>

const int MAX_NUM_OF_ITEMS = 4;

const int PIC_SIZE = 30;
const int HEIGHT = 360;
const int WIDTH = 360;
//---------------------------

class Menu
{

public:
	Menu();
	void run();
	void input(sf::RenderWindow &, int);
	void drawMenu(sf::RenderWindow &) const;
	void drawHighScore(sf::RenderWindow &) const;
	void handleHighScore(sf::RenderWindow &, sf::Event &, int);

private:
	sf::Texture m_background;
	sf::Sprite m_sprite;
	sf::Font m_fontSnakeMix;
	sf::Font m_fontEarth2073;
	sf::Text m_text[MAX_NUM_OF_ITEMS];
	sf::Text m_textHighScore, m_textClose;
};