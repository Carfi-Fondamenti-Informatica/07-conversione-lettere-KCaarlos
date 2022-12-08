#include "lib.h"

bool lettera (char&a) {
    bool risultato=false;

    if ((a>64) && (a<91)){ //tutte lettere maiuscole
        a=a+32;
        risultato=true;
    }
    else if((a>96) && (a<123)) { //tutte lettere minuscole
        a = a - 32;
        risultato = true;
    }

    else{
        risultato=false;


    }
    return risultato;
}

