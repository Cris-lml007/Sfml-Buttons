#include "Button.h"

Button::Button(float WIDTH,float HEIGHT,Font FONT){
	width=WIDTH;
	height=HEIGHT;
	boton.setSize(Vector2f(width,height));
	font=FONT;
	setFont(font);
	text.setCharacterSize(10);
	text.setString("Text");
}

void Button::setFont(Font FONT){
	font=FONT;
	text.setFont(font);
}

void Button::setCharactererSize(int SIZE){
	text.setCharacterSize(SIZE);
}

void Button::setCharactererColor(Color COLOR){
	text.setFillColor(COLOR);
}

void Button::setText(string TEXT){
	text.setString(TEXT);
}

void Button::setTextPosition(float X,float Y){
	text.setPosition(X,Y);
}

void Button::setSize(float WIDTH,float HEIGHT){
	width=WIDTH;
	height=HEIGHT;
	boton.setSize(Vector2f(width,height));
}

void Button::setPosition(float X,float Y){
	posX=X;
	posY=Y;
	boton.setPosition(posX,posY);
	text.setPosition(posX+(width/2)/2,posY+(height/2));
}

void Button::setColor(Color COLOR){
	boton.setFillColor(COLOR);
}

void Button::setOutlineColor(Color COLOR){
	boton.setOutlineColor(COLOR);
}

void Button::setOutlineThickness(float thickness){
	boton.setOutlineThickness(thickness);
}

void Button::getButton(RenderWindow &window){
	window.draw(boton);
	window.draw(text);
}

void Button::ButtonOnClick(RenderWindow &window,void FUNCION()){
	Vector2i Mouse_pos=Mouse::getPosition(window);
	if(Mouse_pos.x>=posX && Mouse_pos.x<=posX+width && Mouse_pos.y>=posY && Mouse_pos.y<=posY+height){
		while(window.pollEvent(event)){
			if(event.type==Event::MouseButtonPressed){
				if(event.mouseButton.button==Mouse::Left){
					FUNCION();
				}
			}
		}
	}
}

void Button::ButtonOnClickSecond(RenderWindow &window,void FUNCION()){
	Vector2i Mouse_pos=Mouse::getPosition(window);
	if(Mouse_pos.x>=posX && Mouse_pos.x<=posX+width && Mouse_pos.y>=posY && Mouse_pos.y<=posY+height){
		if(event.type==Event::MouseButtonPressed){
			if(event.mouseButton.button==Mouse::Right){
				FUNCION();
			}
		}
	}
}


