#include "sfml.h"
#include "util.h"
#include <cstring>

using namespace util;

int main() {

    SFML sfml(700,700,"Car Dibre");
    sfml.background(0,0,0);
    sfml.textSize(20);

    char frase[100];
    int contaPontos = 0;

    int xobstaculo = random(20,450), yobstaculo = -random(0,680);
    int xtiro = -50, ytiro = 630;
    int vidas = 3;

    float xcarro = 100, ycarro = 630;
    float speed = 5;
    float vtiro = 3;
    bool atirar = true;


    while (sfml.windowIsOpen()) {

        sfml.clear();

        if (sfml.keyIsDown(SFML::Key::Left)) {

            xcarro -= speed;

        }else if(sfml.keyIsDown(SFML::Key::Right)){

            xcarro += speed;
        }

        if(xcarro > 450){

            xcarro = 450;

        }else if(xcarro < 5) {

            xcarro = 5;
        }

        sfml.ellipse(xcarro, ycarro, 50, 50);

        //Movimentos do carro

        if(!atirar){

            ytiro -= vtiro;
            sfml.rect(xtiro,ytiro,5,10);
        }

        if(ytiro < 0){

            xtiro = -50;
            ytiro = ycarro;
            atirar = true;

        }if(sfml.keyIsDown(SFML::Key::Space) && atirar){

            xtiro = xcarro+22.5;
            atirar = false;
        }

         yobstaculo += 3;

        // Tiro

        sprintf(frase, "Pontos: %d", contaPontos);
        sfml.text(frase, 570,50);
        sprintf(frase, "Vidas: %d", vidas);
        sfml.text(frase, 570,200);

        // Texto

        if(yobstaculo > 680) {

            xobstaculo = random(30,450);
            yobstaculo = -random(0,650);
            contaPontos++;
        }

        bool colidirCarro = (dist(xcarro+25, ycarro+25, xobstaculo+20, yobstaculo+20) < 38) ? true : false;
        bool colidirTiro = (dist(xtiro+2.5, ytiro+5, xobstaculo+20, yobstaculo+20) < 19) ? true : false;

        if(colidirCarro){

            xobstaculo = random(20,450);
            yobstaculo = -random(0,650);
            sfml.text("Colidiu!", 10, 10);
            vidas--;

        }if(colidirTiro){

            xobstaculo = random(20,450);
            yobstaculo = -random(0,650);
            sfml.text("tiro!", 10, 30);
            xtiro = -50;
            ytiro = ycarro;
            atirar = true;
            contaPontos++;
        }

        sfml.rect(xobstaculo,yobstaculo,40,40);

        // Colisão

        sfml.display();
    }

    return 0;
}
