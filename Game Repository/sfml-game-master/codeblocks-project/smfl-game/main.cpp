#include "sfml.h"
#include "util.h"
#include <cstring>

using namespace util;

int main() {

    SFML sfml(700,700,"Car Dibre");
    sfml.background(0,0,0);
    sfml.textSize(20);

    Image carro("carro_amarelo.png");
    Image inimigo1("inimigo1.png");
    Image arvore_verde("arvore_verde.png");
    Image asfalto("asfalto.png");
    Image grama("grama.png");
    Image arbusto("arbusto.png");
    Image caixablue("caixa_azul.png");
    Image heart("heart.png");


    char frase[100];

    int contaPontos = 0;

    int xobstaculo[10], yobstaculo[10];
        for(int i = 0; i < 10; i++){

            xobstaculo[i] = random(200,450);
            yobstaculo[i] = -random(0, 7000);
        }

    int xtiro = -50, ytiro = 630;
    int vidas = 3;
    int xvida = random(210, 390), yvida = 0;

    int nivel = 0;

    float xcarro = 100, ycarro = 580;
    float speed = 5;
    float vtiro = 3;
    bool atirar = true;


    while (sfml.windowIsOpen()) {

        sfml.clear();

        sfml.image(grama, 0, 0);
        sfml.image(grama, 0, 60);
        sfml.image(grama, 0, 120);
        sfml.image(grama, 0, 180);
        sfml.image(grama, 0, 240);
        sfml.image(grama, 0, 300);
        sfml.image(grama, 0, 360);
        sfml.image(grama, 0, 420);
        sfml.image(grama, 0, 480);
        sfml.image(grama, 0, 540);
        sfml.image(grama, 0, 600);
        sfml.image(grama, 0, 660);

        sfml.image(grama, 60, 0);
        sfml.image(grama, 60, 60);
        sfml.image(grama, 60, 120);
        sfml.image(grama, 60, 180);
        sfml.image(grama, 60, 240);
        sfml.image(grama, 60, 300);
        sfml.image(grama, 60, 360);
        sfml.image(grama, 60, 420);
        sfml.image(grama, 60, 480);
        sfml.image(grama, 60, 540);
        sfml.image(grama, 60, 600);
        sfml.image(grama, 60, 660);

        sfml.image(grama, 120, 0);
        sfml.image(grama, 120, 60);
        sfml.image(grama, 120, 120);
        sfml.image(grama, 120, 180);
        sfml.image(grama, 120, 240);
        sfml.image(grama, 120, 300);
        sfml.image(grama, 120, 360);
        sfml.image(grama, 120, 420);
        sfml.image(grama, 120, 480);
        sfml.image(grama, 120, 540);
        sfml.image(grama, 120, 600);
        sfml.image(grama, 120, 660);

        sfml.image(grama, 150, 0);
        sfml.image(grama, 150, 60);
        sfml.image(grama, 150, 120);
        sfml.image(grama, 150, 180);
        sfml.image(grama, 150, 240);
        sfml.image(grama, 150, 300);
        sfml.image(grama, 150, 360);
        sfml.image(grama, 150, 420);
        sfml.image(grama, 150, 480);
        sfml.image(grama, 150, 540);
        sfml.image(grama, 150, 600);
        sfml.image(grama, 150, 660);

        sfml.image(grama, 450, 0);
        sfml.image(grama, 450, 60);
        sfml.image(grama, 450, 120);
        sfml.image(grama, 450, 180);
        sfml.image(grama, 450, 240);
        sfml.image(grama, 450, 300);
        sfml.image(grama, 450, 360);
        sfml.image(grama, 450, 420);
        sfml.image(grama, 450, 480);
        sfml.image(grama, 450, 540);
        sfml.image(grama, 450, 600);
        sfml.image(grama, 450, 660);

        //Cenário(Grama)

        sfml.image(arvore_verde, 0, 5);
        sfml.image(arvore_verde, 0, 70);
        sfml.image(arvore_verde, 0, 150);
        sfml.image(arvore_verde, 0, 230);
        sfml.image(arvore_verde, 0, 310);
        sfml.image(arvore_verde, 0, 390);
        sfml.image(arvore_verde, 0, 470);
        sfml.image(arvore_verde, 0, 550);
        sfml.image(arvore_verde, 0, 630);

        sfml.image(arvore_verde, 80, 5);
        sfml.image(arvore_verde, 50, 70);
        sfml.image(arvore_verde, 30, 150);
        sfml.image(arvore_verde, 67, 230);
        sfml.image(arvore_verde, 24, 310);
        sfml.image(arvore_verde, 56, 390);
        sfml.image(arvore_verde, 76, 470);
        sfml.image(arvore_verde, 28, 550);

        sfml.image(asfalto, 200, 0);
        sfml.image(asfalto, 200, 140);
        sfml.image(asfalto, 200, 280);
        sfml.image(asfalto, 200, 420);
        sfml.image(asfalto, 200, 560);

        sfml.image(asfalto, 300, 0);
        sfml.image(asfalto, 300, 140);
        sfml.image(asfalto, 300, 280);
        sfml.image(asfalto, 300, 420);
        sfml.image(asfalto, 300, 560);

        sfml.image(asfalto, 400, 0);
        sfml.image(asfalto, 400, 140);
        sfml.image(asfalto, 400, 280);
        sfml.image(asfalto, 400, 420);
        sfml.image(asfalto, 400, 560);

        //Cenário(Asfalto)


        sfml.image(heart, xvida, yvida+=3);
        if(yvida > 690){

            yvida = 0;

        }

        if((xcarro > xvida) && (xcarro < xvida + 32)
        && (ycarro > yvida) && (ycarro < yvida + 32)){

                yvida = 0;
                vidas++;

        }

        if((xcarro + 30 > xvida) && (xcarro + 30 < xvida + 32)
        && (ycarro > yvida && ycarro < yvida + 32)){

                yvida = 0;
                vidas++;

        }

        if((xcarro > xvida) && (xcarro < xvida + 32)
        && (ycarro + 65 > yvida) && (ycarro + 65 < yvida + 32)){

                yvida = 0;
                vidas++;

        }

        if((xcarro + 30 > xvida) && (xcarro + 30 < xvida + 32)
        && (ycarro + 65 > yvida) && (ycarro + 65 < yvida + 32)){

                yvida = 0;
                vidas++;

        }

        sfml.image(arbusto, 175, 0);
        sfml.image(arbusto, 175, 30);
        sfml.image(arbusto, 175, 60);
        sfml.image(arbusto, 175, 90);
        sfml.image(arbusto, 175, 120);
        sfml.image(arbusto, 175, 150);
        sfml.image(arbusto, 175, 180);
        sfml.image(arbusto, 175, 210);
        sfml.image(arbusto, 175, 240);
        sfml.image(arbusto, 175, 270);
        sfml.image(arbusto, 175, 300);
        sfml.image(arbusto, 175, 330);
        sfml.image(arbusto, 175, 360);
        sfml.image(arbusto, 175, 390);
        sfml.image(arbusto, 175, 420);
        sfml.image(arbusto, 175, 450);
        sfml.image(arbusto, 175, 480);
        sfml.image(arbusto, 175, 510);
        sfml.image(arbusto, 175, 540);
        sfml.image(arbusto, 175, 570);
        sfml.image(arbusto, 175, 600);
        sfml.image(arbusto, 175, 630);
        sfml.image(arbusto, 175, 660);
        sfml.image(arbusto, 175, 690);

        //Cenário(Arbusto)

        sfml.image(caixablue, 550, 202);





        if (sfml.keyIsDown(SFML::Key::Left)) {

            xcarro -= speed;

        }else if(sfml.keyIsDown(SFML::Key::Right)){

            xcarro += speed;
        }

        if(xcarro > 450){

            xcarro = 450;

        }else if(xcarro < 200) {

            xcarro = 200;
        }

        sfml.image(carro, xcarro, ycarro);

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


        //Tiro

        sprintf(frase, "Pontos: %d", contaPontos);
        sfml.text(frase, 570,50);
        sprintf(frase, "Vidas: %d", vidas);
        sfml.text(frase, 570,200);

        //Texto

        for(int i = 0; i < 10; i++){

            yobstaculo[i] += 3;
            nivel = 1;

                if(contaPontos > 10){
                    yobstaculo[i] += 3.5;
                    nivel = 2;
                }
                if(contaPontos > 30){
                    yobstaculo[i] += 4;
                    nivel = 3;
                }
                if(contaPontos > 50){
                    yobstaculo[i] += 5;
                    nivel = 5;
                }
                if(contaPontos > 50){
                    yobstaculo[i] += 5.5;
                    nivel = 5;
                }
        }

        for(int i = 0; i < 10; i++){
            if(yobstaculo[i] > 680) {

                xobstaculo[i] = random(200,450);
                yobstaculo[i] = -random(0,7000);
                contaPontos++;
            }
        }

        for(int i = 0; i < 10; i++){

            if((xcarro > xobstaculo[i] && xcarro < xobstaculo[i] + 30)
            && (ycarro > yobstaculo[i] && ycarro < yobstaculo[i] + 70)){

                xobstaculo[i] = random(200,450);
                yobstaculo[i] = -random(0,7000);
                vidas--;

            }

            if((xcarro + 30 > xobstaculo[i] && xcarro + 30 < xobstaculo[i] + 30)
            && (ycarro > yobstaculo[i] && ycarro < yobstaculo[i] + 70)){

                xobstaculo[i] = random(200,450);
                yobstaculo[i] = -random(0,7000);
                vidas--;

            }

            if((xcarro > xobstaculo[i] && xcarro < xobstaculo[i] + 30)
            && (ycarro + 70 > yobstaculo[i] && ycarro + 70 < yobstaculo[i] + 70)){

                xobstaculo[i] = random(200,450);
                yobstaculo[i] = -random(0,7000);
                vidas--;

            }

            if((xcarro + 30 > xobstaculo[i] && xcarro + 30 < xobstaculo[i] + 30)
            && (ycarro + 70 > yobstaculo[i] && ycarro + 70 < yobstaculo[i] + 70)){

                xobstaculo[i] = random(200,450);
                yobstaculo[i] = -random(0,7000);
                vidas--;

            }

        }

        // Colisão(carros)

        for(int i = 0; i < 10; i++){

            bool colidirTiro = (dist(xtiro+2.5, ytiro+5, xobstaculo[i]+20, yobstaculo[i]+20) < 19) ? true : false;
            if(colidirTiro){

                xtiro = -50;
                ytiro = ycarro;
                atirar = true;
                contaPontos++;
                xobstaculo[i] = random(200,450);
                yobstaculo[i] = -random(0,7000);
            }
        }

        for(int i = 0; i < 10; i++){

            sfml.image(inimigo1, xobstaculo[i], yobstaculo[i]);
        }

        // Colisão


        sfml.display();
    }

    return 0;
}
