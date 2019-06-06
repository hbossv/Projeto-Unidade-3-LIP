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
    Image muro("muro.png");
    Image caixablue("caixa_azul.png");
    Image heart("heart.png");
    Image folhas("folhas.png");


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

    int nivel = 1;

    float xcarro = 100, ycarro = 580;
    float speed = 5;
    float vtiro = 3;
    bool atirar = true;


    while (sfml.windowIsOpen()) {

        sfml.clear();

        //-------------------- Cenário(Grama - primavera): --------------------------------

        if(nivel == 1){
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

            //-------------------- Cenário(Grama - primavera) ---------------------------------

            //------------------------ Cenário(Árvore - primavera): -------------------------------------

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
        }

        //------------------------ Cenário(Árvore - primavera) -------------------------------------

        //------------------------ Cenário(Folhas - outono): -------------------------------

        else if(nivel == 2){

            sfml.image(folhas, 0, 0);
            sfml.image(folhas, 0, 60);
            sfml.image(folhas, 0, 120);
            sfml.image(folhas, 0, 180);
            sfml.image(folhas, 0, 240);
            sfml.image(folhas, 0, 300);
            sfml.image(folhas, 0, 360);
            sfml.image(folhas, 0, 420);
            sfml.image(folhas, 0, 480);
            sfml.image(folhas, 0, 540);
            sfml.image(folhas, 0, 600);
            sfml.image(folhas, 0, 660);

            sfml.image(folhas, 60, 0);
            sfml.image(folhas, 60, 60);
            sfml.image(folhas, 60, 120);
            sfml.image(folhas, 60, 180);
            sfml.image(folhas, 60, 240);
            sfml.image(folhas, 60, 300);
            sfml.image(folhas, 60, 360);
            sfml.image(folhas, 60, 420);
            sfml.image(folhas, 60, 480);
            sfml.image(folhas, 60, 540);
            sfml.image(folhas, 60, 600);
            sfml.image(folhas, 60, 660);

            sfml.image(folhas, 120, 0);
            sfml.image(folhas, 120, 60);
            sfml.image(folhas, 120, 120);
            sfml.image(folhas, 120, 180);
            sfml.image(folhas, 120, 240);
            sfml.image(folhas, 120, 300);
            sfml.image(folhas, 120, 360);
            sfml.image(folhas, 120, 420);
            sfml.image(folhas, 120, 480);
            sfml.image(folhas, 120, 540);
            sfml.image(folhas, 120, 600);
            sfml.image(folhas, 120, 660);

            sfml.image(folhas, 150, 0);
            sfml.image(folhas, 150, 60);
            sfml.image(folhas, 150, 120);
            sfml.image(folhas, 150, 180);
            sfml.image(folhas, 150, 240);
            sfml.image(folhas, 150, 300);
            sfml.image(folhas, 150, 360);
            sfml.image(folhas, 150, 420);
            sfml.image(folhas, 150, 480);
            sfml.image(folhas, 150, 540);
            sfml.image(folhas, 150, 600);
            sfml.image(folhas, 150, 660);

            sfml.image(folhas, 450, 0);
            sfml.image(folhas, 450, 60);
            sfml.image(folhas, 450, 120);
            sfml.image(folhas, 450, 180);
            sfml.image(folhas, 450, 240);
            sfml.image(folhas, 450, 300);
            sfml.image(folhas, 450, 360);
            sfml.image(folhas, 450, 420);
            sfml.image(folhas, 450, 480);
            sfml.image(folhas, 450, 540);
            sfml.image(folhas, 450, 600);
            sfml.image(folhas, 450, 660);
        }
        //------------------------ Cenário(Folhas - outono) -------------------------------

        //------------------------ Cenário(Asfalto) ------------------------------

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

        //------------------------ Cenário(Asfalto) ------------------------------


        //------------------------ Vidas descendo: -------------------------------

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
        //------------------------ Vidas descendo -------------------------------



        //---------------------------- Cenário(Placar): ---------------------------

        sfml.image(caixablue, 550, 52);
        sfml.image(caixablue, 550, 202);
        sfml.image(caixablue, 550, 352);


        //---------------------------- Cenário(Placar) ---------------------------

        //---------------------------- Movimentos do carro: ---------------------------

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

        //---------------------------- Movimentos do carro ---------------------------

        //---------------------------- Tiro: ------------------------------------------
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

        //---------------------------- Tiro ------------------------------------------

        //---------------------------- Texto: ----------------------------------------

        sprintf(frase, "Pontos: %d", contaPontos);
        sfml.text(frase, 562,50);

        sprintf(frase, "Vidas: %d", vidas);
        sfml.text(frase, 570,200);

        sprintf(frase, "Nivel : %d", nivel);
        sfml.text(frase, 570, 350);

        //---------------------------- Texto -----------------------------------------

        // --------------------------- Inimigo: --------------------------------------

        for(int i = 0; i < 10; i++){

            // ----------------------- Niveis: ---------------------------------------
            yobstaculo[i] += 2.5;
            nivel = 1;

                if(contaPontos >= 10){
                    yobstaculo[i] += 2.6;
                    nivel = 2;
                }
                if(contaPontos >= 50){
                    yobstaculo[i] += 2.7;
                    nivel = 3;
                }
                if(contaPontos >= 100){
                    yobstaculo[i] += 2.8;
                    nivel = 5;
                }
                if(contaPontos >= 150){
                    yobstaculo[i] += 2.9;
                    nivel = 5;
                }
        }

        // ----------------------- Niveis ----------------------------------------

        for(int i = 0; i < 10; i++){
            if(yobstaculo[i] > 680) {

                xobstaculo[i] = random(200,450);
                yobstaculo[i] = -random(0,7000);
                contaPontos++;
            }
        }

        // ------------------------------- Colisão(Carros): -----------------------------------

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

        // ------------------------------- Colisão(Carros) -----------------------------------

        // --------------------------- Inimigo -----------------------------------------------

        // ------------------------------- Colisão(Tiro): -----------------------------------

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

        // ------------------------------- Colisão(Tiro) ------------------------------------


        sfml.display();
    }

    return 0;
}
