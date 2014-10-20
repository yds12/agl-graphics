#include <stdlib.h>
#include "agl/game.h"
#include "agl/drawer.h"

// ------------ Includes here ---------------
#include <iostream>
#include "agl/sound.h"
#include "agl/music.h"
#include "agl/joystick.h"
#include "agl/vector2.h"
#include "agl/intvector2.h"
#include "agl/gameobject.h"
#include "agl/support.h"
#include "agl/color.h"
#include "graphics.h"
// ------------------------------------------

// ------------ Defines here ----------------
// ------------------------------------------

//const string fontPath = "/usr/share/fonts/dejavu/DejaVuSans.ttf";
const string contentPath = "/home/USER/aleva/test/";
//const string fontPath = "/usr/share/fonts/truetype/freefont/FreeMono.ttf";
//const string contentPath = "/home/USER/test/";

AGL::Game* game = NULL;
AGL::Drawer* drawer = NULL;

// ------------ Declare variables here ------
AGL::Image *imagem = NULL, *imagem2 = NULL, *bg = NULL, *blurred = NULL;
AGL::Image *r1, *r2, *im1, *im2, *im3, *im4, *im5, *im6, *im7, *im8;
AGL::IntVector2* position;
AGL::Keyboard* kb = NULL;
AGL::Mouse* ms = NULL;
AGL::GameObject* go = NULL;
// ------------------------------------------
//float rotation = 0;
float amount = 1; //0;
//int inclination = 0, top = 0;
//short radius;

void initialize()
{
	// ------------ Initialize variables here ---

	game = new AGL::Game;
	drawer = new AGL::Drawer;

	game->showMouse(true);
	kb = new AGL::Keyboard(false, false, true, true, false, false);
	ms = new AGL::Mouse;

//	position = new AGL::IntVector2(10, 10);
	// ------------------------------------------
}

void loadContent()
{
	// ------------ Load content here -----------

	//im1 = AGL::Graphics::getRectangle(106, 106, AGL_COLOR_BLACK);
	//im2 = AGL::Graphics::blur(im1, 10); delete im1; im1 = im2;
	//im2 = AGL::Graphics::getGradientRectangle(100, 100, AGL_COLOR_BLUE, {153, 153, 255}, 204, 204, true);
	//AGL::IntVector2 v(13, 13);
	//im3 = AGL::Graphics::overlapImages(im1, im2, v, false); delete im1; delete im2; im1 = im3;
	//im2 = AGL::Graphics::getGradientRectangle(84, 84, {153, 153, 255}, AGL_COLOR_BLUE, 204, 204, true);
	//v.x = v.y = 21;
	//im3 = AGL::Graphics::overlapImages(im1, im2, v, false); delete im1; delete im2; im1 = im3;
	//im2 = AGL::Graphics::getRectangle(100, 100, AGL_COLOR_BLACK);
	//im3 = AGL::Graphics::getRectangle(82, 82, AGL_COLOR_BLACK, 0);
	//v.x = v.y = 9;
	//im4 = AGL::Graphics::overlapImages(im2, im3, v, false); delete im2; delete im3; im2 = im4;
	//im5 = AGL::Graphics::blur(im2, 10); delete im2; im2 = im5;
	//im3 = AGL::Graphics::crop(im2, 18, 18, 84, 84); delete im2; im2 = im3;
	//v.x = v.y = 21;
	//im3 = AGL::Graphics::overlapImages(im1, im2, v); delete im1; delete im2; im1 = im3;

	imagem = new AGL::Image(AGL::Format::stringToChar(&(contentPath + "face.png")));
	imagem2 = AGL::Graphics::saturation(imagem, amount);
	//imagem2 = AGL::Graphics::lightness(imagem, amount);
	//imagem = AGL::Graphics::getRectangle(100, 100, AGL_COLOR_BLACK);
	//im5 = AGL::Graphics::blur(imagem, 1);
	//imagem2 = new AGL::Image(AGL::Format::stringToChar(&(contentPath + "beach.jpg")));
	//imagem2 = new AGL::Image(AGL::Format::stringToChar(&(contentPath + "l2.png"))); // b1 f1 l2 f3
	//bg = new AGL::Image(AGL::Format::stringToChar(&(contentPath + "bg.png")));

//	im1 = new AGL::Image("/home/USER/aleva/test/castelo.png");

//	im1 = AGL::Graphics::getPolygonOutline(3, 80, AGL_COLOR_BLACK);
//	im2 = AGL::Graphics::getPolygonOutline(5, 70, AGL_COLOR_RED);
//	im3 = AGL::Graphics::getPolygonOutline(6, 60, AGL_COLOR_BLUE);
//	im4 = AGL::Graphics::getPolygonOutline(7, 50, AGL_COLOR_GREEN);
//	im5 = AGL::Graphics::getPolygonOutline(10, 40, AGL_COLOR_OLIVE);
//	im6 = AGL::Graphics::getPolygonOutline(12, 30, AGL_COLOR_GRAY);
//	im7 = AGL::Graphics::getPolygonOutline(15, 20, AGL_COLOR_PINK);

	/* ------------------- */

//	AGL::Graphics::rotate(im1, 30);
//	im1 = new AGL::Image(AGL::Format::stringToChar(&(contentPath + "bg.png")));
//	im2 = new AGL::Image(AGL::Format::stringToChar(&(contentPath + "f1.png")));
//	im3 = new AGL::Image(AGL::Format::stringToChar(&(contentPath + "f1.png")));
//	im4 = new AGL::Image(AGL::Format::stringToChar(&(contentPath + "f1.png")));
//	im5 = new AGL::Image(AGL::Format::stringToChar(&(contentPath + "f1.png")));
//	im6 = new AGL::Image(AGL::Format::stringToChar(&(contentPath + "f1.png")));
//	im7 = new AGL::Image(AGL::Format::stringToChar(&(contentPath + "f1.png")));

	//cout << "imagem2 mask:" << (int)imagem2->sdlSurface->format->BitsPerPixel << "," << imagem2->sdlSurface->format->Rmask << "," <<
	//	imagem2->sdlSurface->format->Gmask << "," <<	imagem2->sdlSurface->format->Bmask << "," << imagem2->sdlSurface->format->Amask << endl;

//	AGL::Graphics gph;
//
//	gph.replaceGradient(im2, AGL_COLOR_RED, AGL_COLOR_BLUE);
//	gph.replaceGradient(im3, AGL_COLOR_RED, AGL_COLOR_GREEN);
//	gph.replaceGradient(im4, AGL_COLOR_RED, AGL_COLOR_PINK);
//	gph.replaceGradient(im5, AGL_COLOR_BLACK, AGL_COLOR_RED, AGL_COLOR_BLACK, AGL_COLOR_BLACK, 20);
//	gph.replaceGradient(im6, AGL_COLOR_BLACK, AGL_COLOR_RED, AGL_COLOR_BLACK, AGL_COLOR_WHITE, 20);
//	gph.replaceGradient(im7, AGL_COLOR_BLACK, AGL_COLOR_RED, AGL_COLOR_BLACK, AGL_COLOR_GAINSBORO, 20);
	//im1 = gph.crop(im1, 200, 200, 100, 100);
//	gph.resize(im1, 1600, 300);

//	//r1 = gph.getRectangle(50, 50, AGL_COLOR_YELLOW, 100);
//	r1 = gph.getGradientRectangle(400, 100, AGL_COLOR_CRIMSON, AGL_COLOR_BEIGE, 255, 255, false);
//	gph.replaceGradient(r1, AGL_COLOR_CRIMSON, AGL_COLOR_BEIGE, AGL_COLOR_PINK, AGL_COLOR_WHITE, 20);
//	r2 = gph.getRectangle(100, 30, AGL_COLOR_RED, 155);
//	//imagem2 = gph.getDiagonalLine(100, AGL_COLOR_RED, 70, false);
//	imagem2 = gph.getRoundedRectangle(280, 160, 50, AGL_COLOR_BLACK);


//	AGL::IntVector2 v1(30, 30);
//	im8 = gph.crop(im1, 100, 100, 30, 30);
//	gph.flip(im8, false);
	//im8 = gph.overlapImages(im8, im8, v1);
	//imagem2 = gph.crop(imagem, 30, 10, imagem->size->x - 50, imagem->size->y - 20);

	//imagem2 = gph.overlapImages(imagem2, imagem2, new AGL::IntVector2(imagem2->size->x, 0));
	//imagem2 = gph.overlapImages(imagem2, imagem2, new AGL::IntVector2(imagem2->size->x, 0));
	//imagem2 = gph.overlapImages(imagem2, r2, new AGL::IntVector2(0, 0));

	//cout << (int)imagem->sdlSurface->format->BitsPerPixel << "-" << (int)r1->sdlSurface->format->BitsPerPixel << endl;

	//imagem2 = gph.overlapImages(r1, r2, new AGL::IntVector2(0, 0));

	//AGL::Image* r3 = gph.getRectangle(imagem2->size->x + 2, imagem2->size->y + 2, AGL_COLOR_WHITE, 0);

	//imagem2 = gph.overlapImages(r3, imagem2, new AGL::IntVector2(1, 1));

	//imagem2 = gph.getVerticalLine(100, AGL_COLOR_GREEN, 100);

	//cout << "imagem2 mask:" << (int)imagem2->sdlSurface->format->BitsPerPixel << "," << imagem2->sdlSurface->format->Rmask << "," <<
	//	imagem2->sdlSurface->format->Gmask << "," <<	imagem2->sdlSurface->format->Bmask << "," << imagem2->sdlSurface->format->Amask << endl;

	//gph.invertColors(bg);
	//gph.applyColorFilter(bg, AGL_COLOR_WHITE, 255);
	//gph.applyColorFilter(imagem2, AGL_COLOR_GOLDENROD, 100);
	//gph.applyColorFilter(imagem2, AGL_COLOR_TURQUOISE);
	//gph.invertColors(imagem2);
	//AGL::Vector2 v1;

	//go = new AGL::GameObject(imagem, drawer);
	//go = new AGL::GameObject(game, drawer, imagem, new AGL::Vector2, {12, 12});
	//cout << go->texture->w << " " << go->texture->h << endl;
	// ------------------------------------------
}

void update()
{
	game->update(kb, ms, true);

//	inclination++;
//	im2 = new AGL::Image(im1);
//	if (inclination < 100)
//		AGL::Graphics::incline(im2, true, top % 2 == 0 ? -inclination : inclination);
//	else if (inclination < 200)
//		AGL::Graphics::incline(im2, true, top % 2 == 0 ? -(200 - inclination) : 200 - inclination);
//	else {top++; inclination = 0;}
//	if(game->gameCounter == 60) cout << game->getFps(1) << endl;
	// ------------ Update the game here --------
	bool changed = false;
	if (kb->isKeyPressed(kb->getIndex(AGL::KEY_UP)))
	{
		amount += 0.05f;
		if (amount > 1.000001f) amount = 1.0f;
		else changed = true;
		cout << amount << endl;
	}
	if (kb->isKeyPressed(kb->getIndex(AGL::KEY_DOWN)))
	{
		amount -= 0.05f;
		//if (amount < -1) amount = -1;
		if (amount < 0) amount = 0;
		else changed = true;
	}
	if (changed)
		imagem2 = AGL::Graphics::saturation(imagem, amount);
		//imagem2 = AGL::Graphics::lightness(imagem, amount);
//	if(kb->isKeyPressed(kb->getIndex(AGL::KEY_LEFT))) position->x -= 30;
//	if(kb->isKeyPressed(kb->getIndex(AGL::KEY_RIGHT))) position->x += 30;
//	if(kb->isKeyHeld(kb->getIndex(AGL::KEY_UP))) position->y--;
//	if(kb->isKeyHeld(kb->getIndex(AGL::KEY_DOWN))) position->y++;
//	if(kb->isKeyHeld(kb->getIndex(AGL::KEY_LEFT))) position->x--;
//	if(kb->isKeyHeld(kb->getIndex(AGL::KEY_RIGHT))) position->x++;
//	if(kb->isKeyDown(kb->getIndex(AGL::KEY_ESC))) game->setQuit(true);
//	AGL::IntVector2 sc(1024, 768);
//	if(kb->isKeyPressed(kb->getIndex(AGL::KEY_SPACE))) drawer->setScreen(sc, !drawer->fullScreen);
	// ------------------------------------------
	//if (game->gameCounter == 0) cout << game->getFps(1) << endl;
}

void draw()
{
	drawer->clearScreen(AGL_COLOR_WHITE);

	AGL::IntVector2 v(100, 100);
	drawer->draw(imagem2, v);
	//AGL::Graphics::drawRotated(drawer, im1, v, rotation);
//	drawer->draw(im1, v); v.x += 100;
//	drawer->draw(im2, v); v.x += 100;
//	drawer->draw(im3, v); v.x += 100;
//	drawer->draw(im4, v); v.x += 100;
//	drawer->draw(im5, v); v.x += 100;
//	drawer->draw(im6, v); v.x += 100;
//	drawer->draw(im7, v);
//
//	AGL::IntVector2 p1(350, 450), p2(100, 100);
//	AGL::Graphics::drawLine(drawer, p1, p2, AGL_COLOR_BLUE);
//	AGL::Graphics gph;
//	AGL::Image* img = gph.getGradientRectangle(400 + game->gameCounter, 100 + game->gameCounter, AGL_COLOR_CRIMSON, AGL_COLOR_BEIGE, 255, 255, false);
//	AGL::IntVector2 v45(10, 10);
//	drawer->draw(img, v45);
//
//	AGL::Image* img1 = gph.getGradientRectangle(35 + game->gameCounter, 100 + game->gameCounter, AGL_COLOR_GREEN, AGL_COLOR_RED, 255, 255, false);
//	AGL::IntVector2 v451(10, 300);
//	drawer->draw(img1, v451);
//
//	AGL::Image* img2 = gph.getGradientRectangle(300 + game->gameCounter, 74 + game->gameCounter, AGL_COLOR_CRIMSON, AGL_COLOR_TURQUOISE, 255, 255, false);
//	AGL::IntVector2 v452(10, 400);
//	drawer->draw(img2, v452);
//
//	AGL::Image* img3 = gph.getGradientRectangle(90 + game->gameCounter, 200 + game->gameCounter, AGL_COLOR_YELLOW, AGL_COLOR_ORANGE, 255, 255, false);
//	AGL::IntVector2 v453(300, 10);
//	drawer->draw(img3, v453);

	//drawer->draw(bg, new AGL::IntVector2(0, 0));
	/*cout << SDL_MapRGB(drawer->screen->format, 255, 0, 0) << endl;
	((Uint16*)imagem2->sdlSurface->pixels)[0] = SDL_MapRGB(drawer->screen->format, 0, 0, 0);
	((Uint16*)imagem2->sdlSurface->pixels)[1] = SDL_MapRGB(drawer->screen->format, 255, 0, 0);
	((Uint16*)imagem2->sdlSurface->pixels)[2] = SDL_MapRGB(drawer->screen->format, 0, 255, 0);
	((Uint16*)imagem2->sdlSurface->pixels)[3] = SDL_MapRGB(drawer->screen->format, 0, 0, 255);
	((Uint16*)imagem2->sdlSurface->pixels)[4] = SDL_MapRGB(drawer->screen->format, 255, 255, 255);*/

/*if(SDL_MUSTLOCK(imagem2->sdlSurface)) SDL_LockSurface(imagem2->sdlSurface);
cout << "## inicio imagem " << imagem2->sdlSurface->h << "x" << imagem2->sdlSurface->w <<endl;
cout << (int)imagem2->sdlSurface->format->BytesPerPixel << "," << (int)drawer->screen->format->BytesPerPixel <<endl;

	for(int i = 0; i < imagem2->sdlSurface->h; i++){
		for(int j = 0; j < imagem2->sdlSurface->w; j++){
			int offset = i * imagem2->sdlSurface->w + j;
			//cout << getPixel(imagem2->sdlSurface, j, i) << "\t";
			//cout << (int)((Uint16*)imagem2->sdlSurface->pixels)[offset] << "\t";
			Uint8 r,g,b,a;
			SDL_GetRGBA(getPixel(imagem2->sdlSurface, j, i), imagem2->sdlSurface->format, &r, &g, &b, &a);
			//SDL_GetRGBA(*(((Uint32*)imagem2->sdlSurface->pixels) + offset), drawer->screen->format, &r, &g, &b, &a);
			cout << (int)r << "," << (int)g << "," << (int)b << "," << (int)a << "\t";
		}
		cout << endl;
	}

if(SDL_MUSTLOCK(imagem2->sdlSurface)) SDL_UnlockSurface(imagem2->sdlSurface);
cout << "## fim imagem" <<endl;*/

	//int offset = 0 * imagem2->sdlSurface->w + 0;
	//Uint32 color = SDL_MapRGB(imagem2->sdlSurface->format, 255, 0, 0);
	//*( ((Uint16*)imagem2->sdlSurface->pixels) + offset) = (Uint16)color;

/*if(SDL_MUSTLOCK(imagem2->sdlSurface)) SDL_LockSurface(imagem2->sdlSurface);
	setPixel(imagem2->sdlSurface, 0, 0, 255, 0, 0, 255);
	setPixel(imagem2->sdlSurface, 0, 1, 255, 0, 0, 255);
	setPixel(imagem2->sdlSurface, 0, 2, 255, 0, 0, 255);
	setPixel(imagem2->sdlSurface, 0, 3, 255, 0, 0, 255);
if(SDL_MUSTLOCK(imagem2->sdlSurface)) SDL_UnlockSurface(imagem2->sdlSurface);*/

	// ------------ Draw objects here -----------
	//game->drawPixel(AGL_COLOR_BLACK, position);
//	AGL::IntVector2 v8(150, 300);
//	drawer->draw(imagem2, v8);
//	AGL::IntVector2 z;
//	drawer->draw(im1, z);
//	AGL::IntVector2 v1(100, 300);
//	drawer->draw(im2, v1);
//	AGL::IntVector2 v2(150, 300);
//	drawer->draw(im3, v2);
//	AGL::IntVector2 v3(200, 300);
//	drawer->draw(im4, v3);
//	AGL::IntVector2 v4(250, 300);
//	drawer->draw(im5, v4);
//	AGL::IntVector2 v5(300, 300);
//	drawer->draw(im6, v5);
//	AGL::IntVector2 v6(350, 300);
//	drawer->draw(im7, v6);
//	AGL::IntVector2 v7(400, 300);
//	drawer->draw(r1, v7);
//
//	drawer->draw(im8, v2);
	//go->draw();
	//drawer->drawText(font, "Teste de Fontes", position, AGL_COLOR_DARKBLUE);

	/*char val = 22;
	AGL::Color c = {47,54,72};

	AGL::Color c2 = {255,0,0};

	AGL::Graphics gph(drawer);
	drawer->draw(gph.getRectangle(30, 30, c, 255), new AGL::IntVector2(10, 10));
	drawer->draw(gph.getRectangle(30, 30, {c.red - val, c.green - val, c.blue - val}, 255), new AGL::IntVector2(50, 10));
	drawer->draw(gph.getRectangle(30, 30, {c.red + val, c.green + val, c.blue + val}, 255), new AGL::IntVector2(90, 10));
	drawer->draw(gph.getRectangle(30, 30, c2, 255), new AGL::IntVector2(10, 50));
	drawer->draw(gph.getRectangle(30, 30, {c2.red - val, c2.green - val, c2.blue - val}, 255), new AGL::IntVector2(50, 50));
	drawer->draw(gph.getRectangle(30, 30, {c2.red + val, c2.green + val, c2.blue + val}, 255), new AGL::IntVector2(90, 50));*/

	/*drawer->draw(gph.getHorizontalLine(100, AGL_COLOR_BLACK, 200), new AGL::IntVector2(300, 300));
	drawer->draw(gph.getHorizontalLine(100, AGL_COLOR_BLACK, 200), new AGL::IntVector2(300, 301));
	drawer->draw(gph.getHorizontalLine(100, AGL_COLOR_BLACK, 200), new AGL::IntVector2(300, 302));
	drawer->draw(gph.getHorizontalLine(100, AGL_COLOR_BLACK, 100), new AGL::IntVector2(300, 303));
	drawer->draw(gph.getHorizontalLine(100, AGL_COLOR_BLACK, 100), new AGL::IntVector2(300, 304));
	drawer->draw(gph.getHorizontalLine(100, AGL_COLOR_BLACK, 100), new AGL::IntVector2(300, 305));*/

	//AGL::Image* r1 = gph.getRectangle(1000, 1000, AGL_COLOR_TURQUOISE, 155);
	//AGL::Image* r2 = gph.getRectangle(30, 30, AGL_COLOR_CRIMSON);

	//drawer->draw(r1, new AGL::IntVector2(0, 300));
	//drawer->draw(r2, new AGL::IntVector2(10, 10));

	// Essas duas linhas fazem toda diferença (sem elas memória estoura, com elas fica em 8,3MB)
	//delete(r1);
	//delete(r2);

	// Difícil concatenação de strings...
	//char mousepos[50];
	//sprintf(mousepos, "%d,%d", ms->position.x, ms->position.y);
//	AGL::Vector2 vec(*(ms->position));
	//drawer->drawText(font, AGL::Format::stringToChar(&vec.toString()), ms->position, AGL_COLOR_BLACK);
	// ------------------------------------------

	drawer->updateScreen();
}

void unloadContent()
{
	// ------------ Unload objects here ---------
	//delete(joy);
	// ------------------------------------------
	delete imagem;
	delete imagem2;
	game->end();
}

/// Main method, initializes the program
int main(int argc, char *argv[])
{
	initialize();
	loadContent();

	game->runFixedFps(update, draw, 1000);

	unloadContent();

	return 0;
}
