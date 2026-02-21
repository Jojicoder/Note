#include <stdio.h>
#include <ctype.h>

void encrypt_message(char message[],int shift){
    for(int i = 0; message[i] !='\0';i++){
        char ch = message[i];

        if(isupper(ch)){
            message[i] = (ch - 'A'+shift)%26+'A';
        }
        else if(islower(ch)){
            message[i] = (ch -'a'+shift)%26+'a';
        }
    }
}

int main(){
    char secret_text[] ="Hello, World!";
    int shift_key =3;

    printf("[Original] %s\n", secret_text);

    encrypt_message(secret_text,shift_key);
    printf("[Encypted] %s\n", secret_text);

    encrypt_message(secret_text, 26-shift_key);
    printf("[Decrypted] %s\n", secret_text);

    return 0;
}


