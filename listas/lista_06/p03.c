#include <stdio.h>
 
int main() {
 
    int i, ok = 0;
    char entrada[14];    
 
    char **paises = NULL;
    paises = (char**)malloc(24 * sizeof(char*));
 
    paises[0] = (char*)malloc(6 * sizeof(char)); strcpy(paises[0], "brasil");
    paises[1] = (char*)malloc(9 * sizeof(char)); strcpy(paises[1], "alemanha");
    paises[2] = (char*)malloc(8 * sizeof(char)); strcpy(paises[2], "austria");
    paises[3] = (char*)malloc(7 * sizeof(char)); strcpy(paises[3], "coreia");
    paises[4] = (char*)malloc(8 * sizeof(char)); strcpy(paises[4], "espanha");
    paises[5] = (char*)malloc(7 * sizeof(char)); strcpy(paises[5], "grecia");
    paises[6] = (char*)malloc(15 * sizeof(char)); strcpy(paises[6], "estados-unidos");
    paises[7] = (char*)malloc(10 * sizeof(char)); strcpy(paises[7], "inglaterra");
    paises[8] = (char*)malloc(11 * sizeof(char)); strcpy(paises[8], "australia");
    paises[9] = (char*)malloc(9 * sizeof(char)); strcpy(paises[9], "portugal");
    paises[10] = (char*)malloc(7 * sizeof(char)); strcpy(paises[10], "suecia");
    paises[11] = (char*)malloc(8 * sizeof(char)); strcpy(paises[11], "turquia");
    paises[12] = (char*)malloc(10 * sizeof(char)); strcpy(paises[12], "argentina");
    paises[13] = (char*)malloc(6 * sizeof(char)); strcpy(paises[13], "chile");
    paises[14] = (char*)malloc(7 * sizeof(char)); strcpy(paises[14], "mexico");
    paises[15] = (char*)malloc(10 * sizeof(char)); strcpy(paises[15], "antartida");
    paises[16] = (char*)malloc(7 * sizeof(char)); strcpy(paises[16], "canada");
    paises[17] = (char*)malloc(8 * sizeof(char)); strcpy(paises[17], "irlanda");
    paises[18] = (char*)malloc(8 * sizeof(char)); strcpy(paises[18], "belgica");
    paises[19] = (char*)malloc(7 * sizeof(char)); strcpy(paises[19], "italia");
    paises[20] = (char*)malloc(6 * sizeof(char)); strcpy(paises[20], "libia");
    paises[21] = (char*)malloc(6 * sizeof(char)); strcpy(paises[21], "siria");
    paises[22] = (char*)malloc(9 * sizeof(char)); strcpy(paises[22], "marrocos");
    paises[23] = (char*)malloc(6 * sizeof(char)); strcpy(paises[23], "japao");
 
    char **frases = NULL;
    frases = (char**)malloc(sizeof(char*) * 24);
 
    frases[0] = (char*)malloc(23 * sizeof(char)); strcpy(frases[0], "Feliz Natal!");
    frases[1] = (char*)malloc(23 * sizeof(char)); strcpy(frases[1], "Frohliche Weihnachten!");
    frases[2] = (char*)malloc(23 * sizeof(char)); strcpy(frases[2], "Frohe Weihnacht!");
    frases[3] = (char*)malloc(23 * sizeof(char)); strcpy(frases[3], "Chuk Sung Tan!");
    frases[4] = (char*)malloc(23 * sizeof(char)); strcpy(frases[4], "Feliz Navidad!");
    frases[5] = (char*)malloc(23 * sizeof(char)); strcpy(frases[5], "Kala Christougena!");
    frases[6] = (char*)malloc(23 * sizeof(char)); strcpy(frases[6], "Merry Christmas!");
    frases[7] = (char*)malloc(23 * sizeof(char)); strcpy(frases[7], "Merry Christmas!");
    frases[8] = (char*)malloc(23 * sizeof(char)); strcpy(frases[8], "Merry Christmas!");
    frases[9] = (char*)malloc(23 * sizeof(char)); strcpy(frases[9], "Feliz Natal!");
    frases[10] = (char*)malloc(23 * sizeof(char)); strcpy(frases[10], "God Jul!");
    frases[11] = (char*)malloc(23 * sizeof(char)); strcpy(frases[11], "Mutlu Noeller");
    frases[12] = (char*)malloc(23 * sizeof(char)); strcpy(frases[12], "Feliz Navidad!");
    frases[13] = (char*)malloc(23 * sizeof(char)); strcpy(frases[13], "Feliz Navidad!");
    frases[14] = (char*)malloc(23 * sizeof(char)); strcpy(frases[14], "Feliz Navidad!");
    frases[15] = (char*)malloc(23 * sizeof(char)); strcpy(frases[15], "Merry Christmas!");
    frases[16] = (char*)malloc(23 * sizeof(char)); strcpy(frases[16], "Merry Christmas!");
    frases[17] = (char*)malloc(23 * sizeof(char)); strcpy(frases[17], "Nollaig Shona Dhuit!");
    frases[18] = (char*)malloc(23 * sizeof(char)); strcpy(frases[18], "Zalig Kerstfeest!");
    frases[19] = (char*)malloc(23 * sizeof(char)); strcpy(frases[19], "Buon Natale!");
    frases[20] = (char*)malloc(23 * sizeof(char)); strcpy(frases[20], "Buon Natale!");
    frases[21] = (char*)malloc(23 * sizeof(char)); strcpy(frases[21], "Milad Mubarak!");
    frases[22] = (char*)malloc(23 * sizeof(char)); strcpy(frases[22], "Milad Mubarak!");
    frases[23] = (char*)malloc(23 * sizeof(char)); strcpy(frases[23], "Merii Kurisumasu!");
 
    while(scanf("%s", entrada) != EOF){
        for(i = 0; i < 24; i++){
            if(strcmp(entrada, paises[i]) == 0){
                printf("%s\n", frases[i]);
                ok = 1;
            }
        }
        if(ok == 0){
            printf("-- NOT FOUND --\n");
        }
        ok = 0;
 
        for(i = 0; i < 24; i++){
            entrada[i] = '\0';
        }
    }
    
    for(i = 0; i < 24; i++){
        free(paises[i]);
        free(frases[i]);
    }
    free(paises);
    free(frases);
 
    return 0;
}