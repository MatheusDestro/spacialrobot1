#pragma once
#include <iostream>
#include <SFML\Graphics.hpp>
#include <SFML\Audio.hpp>
#include <ctime>
#include <string>


#define SCREEN_HEIGHT 600
#define SCREEN_WIDTH 1000

#define Items 3
#define choose 4

#define MENU 0
#define JOGO 1
#define GAMEOVER 2

	class Manager
{
private: //AQUI VOCÊ CRIA AS VARIÁVEIS
	sf::RenderWindow *app = nullptr;
	sf::Vector2i posicaoMouse;
	sf::Event eventos;
	std::string dicionario[101];
	short estadoTela = MENU;
	bool quit = false;

	int life = 3;

	int Menu = 0;

	int userInput = 0;

	int x = 50, y = 550;
	float dx = 0, dy = 0;

	bool countkey = false;
	int jumps = 0;

	sf::Time timing, minuslife = sf::seconds(0.5);
	sf::Clock clock;

	sf::Texture textureEnemy, textureStar, texturepersonagem, textureCenario, texturePlat;
	sf::Sprite spriteEnemy, spriteStar1, spriteStar2, spriteStar3, spritepersonagem, spriteCenario, spritePlat, spritePlat1;

	float enemy_posX = 220;
	float enemy_posY = 515;
	float step;
	float star_posX = 20;
	float star_posY = 20;
	float crono, tempo;
	std::string cronometro;

	sf::RectangleShape rect3;

	sf::Font font;
	sf::Text menu[Items];
	sf::Text Difi[choose];
	sf::Text Tecla[3];
	sf::Text Cronometro;

	bool options = true;

	int getpresseditem;

	int p[3];
public:
	Manager();
	~Manager();

	void Programa();

	void Inputs();
	void Update();
	void Render();

	void UpdateMenu();
	void Difficulty();
	void UpdateJogo();
	void UpdateGameOver();

	void Easy();
	void Normal();
	void Hard();
	void Extreme();

	void RenderMenu();
	void RenderDifficulty();
	void RenderJogo();
	void RenderGameOver();

	void InputTeclado();
	void MouseClicado();
	void MouseMovido();

	void PrintarTeclas();
	void CriarDicionario();
};