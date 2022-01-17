#ifndef BUTTON_H
#define BUTTON_H
#include "link.h"
using namespace std;

class Button{
	private:
		Event event;
		RectangleShape boton;
		Font font;
		Text text;
		float posX,posY;
		float width,height;
	public:
		Button(){}
		Button(float WIDTH,float HEIGHT,Font FONT);
		/////funcion Text////////////
		void setFont(Font FONT);
		void setCharactererSize(int SIZE);
		void setCharactererColor(Color COLOR);
		void setText(string TEXT);
		void setTextPosition(float X,float Y);
		//////////////////////////////////
		void setSize(float WIDTH,float HEIGHT);
		void setPosition(float X,float Y);
		void setColor(Color);
		void setOutlineColor(Color);
		void setOutlineThickness(float thickness);
		void getButton(RenderWindow &window);
		void ButtonOnClick(RenderWindow &window,void FUNCION());
		void ButtonOnClickSecond(RenderWindow &window,void FUNCION());
};
#endif
