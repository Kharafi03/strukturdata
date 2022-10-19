#include <iostream>
#define MAX 24
using namespace std;

char pesan[MAX]{'H','A','*','*','*','L','*','O','A','P','*','*','*','A','*','K','A','B','*','A','*','*','*','R'};
char hasil[MAX]{};
int top = -1;
char isi;
void olahpesan();
void push();
void cetak();

int main()
{
    cout << "Pesan = ";
    for(int i=0; i<MAX; i++){
        cout << pesan[i];
    }
    cout << endl;
    olahpesan();
    cetak();
    return 0;
}

void olahpesan(){
    for(int i=0; i<MAX; i++){
        if(pesan[i] != '*'){
            isi = pesan[i];
            push();
        }
    }
}

void push(){
    top++;
    hasil[top] = isi;
}

void cetak(){
    cout << "Hasil = " ;
    for(int i=0; i<MAX; i++){
        cout << hasil[i];
    }
}
