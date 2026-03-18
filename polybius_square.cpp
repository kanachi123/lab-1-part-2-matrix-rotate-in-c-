#include<iostream>
#include <ctype.h>
#include <cstring>
#define size 5
#define text_size 200

using namespace std;

#include<iostream>
#include <ctype.h>
#include <cstring>
#define size 5
#define text_size 200

using namespace std;

void createSquare(char square[][size],char key[]) {
    char c = 'A';
    char tmpSquare[size][size];

    int n = 0;
    while(key[n]!='\0')
    {
        n++;
    }
    for(int i = 0;i<n;i++){
        for(int j = 0;j<n;j++){
            if(key[i] == key[j] && i!=j){
                for(int k = j;k<n;k++){
                    key[k] = key[k+1];
                    n--;
                }
            }
        }
    }
    
    for (int i = 0; i < size; i++) {

        for (int j = 0; j < size; j++) {

            square[i][j] = c;
            if (square[i][j] == 'J') {
                c++;
                square[i][j] = c;
            }
            printf("%c ", square[i][j]);
            c++;
        }
        printf("\n");
    }
    
    int iter = 0,last_i,last_j;
    
    for(int i = 0;i<size;i++)
    {
        for(int j = 0;j<size;j++){
            
            key[iter] = toupper(key[iter]);
            
            if(key[iter] == 'J'){
                iter++;
            }
            else{
                tmpSquare[i][j] = key[iter];
                iter++;
            }
            if(key[iter] == '\0'){
                last_i = i;
                last_j = j;
                break;
            }
        }
        if(key[iter] == '\0'){
            break;
        }
        
    }
    
    int flag = 0;
    for(int i = 0;i<size;i++){
        
        for(int j = 0;j<size;j++){
            
            if(tmpSquare[last_i][last_j] !=square[i][j]){
                
                tmpSquare[last_i][last_j] = square[i][j];
                last_j++;
                if(last_j > size - 1 && last_i>size-1){
                    
                    flag = 1;
                    break;
                }
                else if(last_j > size - 1){
                    last_j = 0;
                    last_i++;
                }
            }
            
        }
        if(flag == 1){
            break;
        }
    }
    printf("Key Square\n");
    for(int i = 0;i<size;i++){
        for(int j = 0;j<size;j++){
            square[i][j] = tmpSquare[i][j];
            printf("%c ",square[i][j]);
        }
        printf("\n");
    }
    
}

void encryptText(char square[][size], char text[text_size]) {

    int flag,n = 0, k = 0, newCoord[2][text_size] = {};
    

    while (text[n] != '\0') {
        
        if (isalpha(text[n])) {

            text[n] = toupper(text[n]);
            flag = 0;
            
            for (int i = 0; i < size; i++) {
            
                for (int j = 0; j < size; j++) {
                    
                    if (text[n] == square[i][j]) {
                    
                        newCoord[0][k] = i;
                        newCoord[1][k] = j;
                        k++;
                        n++;
                        flag = 1;
                        break;
                    }
                
                }
                if(flag==1){
                    break;
                }
            
            }
        }
        else{
            n++;
        }
    }
    
    const int tmpSize = 2*k;
    int tmp[tmpSize] = {};
    int iter = 0, i, j;
    
    printf("i\n");
    for (int m = 0; m < k; m++) {
        tmp[m] = newCoord[0][m];
        printf("%d ",tmp[m]);
        
    }
    printf("\nj\n");
    for (int m = k; m < tmpSize; m++) {
        tmp[m] = newCoord[1][iter];
        iter++;
        printf("%d ",tmp[m]);
    }
    printf("\n");
    
    n = 0;
    iter = 0;
    while (text[n] != '\0') {
    
        if (isalpha(text[n])) {
            
            i = tmp[iter];
            j = tmp[iter + 1];
            text[n] = square[i][j];
            iter += 2;
        }
        n++;
    
    }
    
}

int main(){

    char PolybiusSquare[size][size];
    char text[text_size];
    char key[size*size];
    
    cout<<"enter the key"<<endl;
    cin.getline(key, size*size);
    
    createSquare(PolybiusSquare,key);

    printf("\noriginal text\n");
    cin.getline(text, text_size);
    
    encryptText(PolybiusSquare, text);
    cout << "encrypted text" << endl;
    cout << text << endl;

    return 0;
}


void encryptText(char square[][size], char text[text_size]) {

    int flag,n = 0, k = 0, newCoord[2][text_size] = {};
    

    while (text[n] != '\0') {
        
        if (isalpha(text[n])) {

            text[n] = toupper(text[n]);
            flag = 0;
            
            for (int i = 0; i < size; i++) {
            
                for (int j = 0; j < size; j++) {
                    
                    if (text[n] == square[i][j]) {
                    
                        newCoord[0][k] = i;
                        newCoord[1][k] = j;
                        k++;
                        n++;
                        flag = 1;
                        break;
                    }
                
                }
                if(flag==1){
                    break;
                }
            
            }
        }
        else{
            n++;
        }
    }
    
    const int tmpSize = 2*k;
    int tmp[tmpSize] = {};
    int iter = 0, i, j;
    
    printf("i\n");
    for (int m = 0; m < k; m++) {
        tmp[m] = newCoord[0][m];
        printf("%d ",tmp[m]);
        
    }
    printf("\nj\n");
    for (int m = k; m < tmpSize; m++) {
        tmp[m] = newCoord[1][iter];
        iter++;
        printf("%d ",tmp[m]);
    }
    printf("\n");
    
    n = 0;
    iter = 0;
    while (text[n] != '\0') {
    
        if (isalpha(text[n])) {
            
            i = tmp[iter];
            j = tmp[iter + 1];
            text[n] = square[i][j];
            iter += 2;
        }
        n++;
    
    }
    
}

int main(){

    char PolybiusSquare[size][size];
    char text[text_size];
    char key[size*size];
    
    cout<<"enter the key"<<endl;
    cin.getline(key, size*size);
    
    createSquare(PolybiusSquare,key);

    printf("\noriginal text\n");
    cin.getline(text, text_size);
    
    encryptText(PolybiusSquare, text);
    cout << "encrypted text" << endl;
    cout << text << endl;

    return 0;
}

