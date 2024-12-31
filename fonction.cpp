
int longueur(const char *chaine){
    int i = 0;
    while (chaine[i] != '\0'){
        i++;
    }
    return i;
}
void copy(char *dest, const char *source){
    int i;
    int n = longueur(source);

    for(i=0; i<n; i++){
        dest[i]= source[i];
    }
    
}
void concat(char *dest, const char *source) {
   int d = longueur(dest);
   int j;
   int s = longueur(source);
   for(int i = d,j=0; i<(d+s); i++,j++){
    dest[d] = source[0];
   }

}
int compare(const char *chaine1, const char *chaine2){

    while((*chaine1 != '\0') && (*chaine2 != '\0')){
        if(*chaine1 != *chaine2){

            return (unsigned char)(*chaine1) - (unsigned char)(*chaine2);
        }
        chaine1 ++;
        chaine2 ++;
    }
    return (unsigned char)(*chaine1) - (unsigned char)(*chaine2);
}
char *cherche_char(const char *chaine, char caractere){
    int i;
    int c = longueur(chaine);
    for (i=0; i<c; i++){
        if(chaine[i] == caractere){
            break;
        }else{
            return NULL;
        }
    }
    return &chaine[i];

}
void inverse(char *chaine)
{
    int n = longueur(chaine);
    char arr[100];

    int i,j;
    for(i=n,j=0;i>=0;j++,i--)
    {
        arr[j]=chaine[i];
    }

    for(i=0;i<n;i++)
    {
        chaine[i]=arr[i];
    }
}
void to_upper(char *chaine){
    while(*chaine != '\0'){
        if(*chaine >= 'a' && *chaine <= 'z'){
            *chaine = *chaine - 'a' + 'A';
        }
        chaine++;
    }
}
void to_lower(char *chaine){
     while(*chaine != '\0'){
        if(*chaine >= 'A' && *chaine <= 'Z'){
            *chaine = *chaine - 'A' + 'a';
        }
        chaine++;
    }
}
char *cherche_mot(const char *phrase, const char *mot){
    int longueur_mot = 0;
    while (mot[longueur_mot] != '\0'){
        longueur_mot++;
    }
    char *debut_phrase = (char *)phrase;
    while (*debut_phrase != '\0'){
        bool mot_trouve = true;
        for(int i = 0; i < longueur_mot; i++){
            if(debut_phrase[i] != mot[i]){
                mot_trouve = false;
                break;
            }
        }
        if (mot_trouve){
            return debut_phrase;
        }
        debut_phrase++;
    }
    return NULL;
}