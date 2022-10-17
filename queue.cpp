#include<iostream>
using namespace std;
#define MAX 8

typedef struct Antrian {
    int data[MAX];
    int head;
    int tail;
}Antrian;

Antrian antre;
void create();
int isEmpty();
int isFull();
void enqueue(int);
int dequeue();
void tampil();

int main()
{
    int pilihan, data;
    cout << "1. Enqueue " << endl;
    cout << "2. Dequeue " << endl;
    cout << "3. Tampil " << endl;
    cout << "4. Keluar " << endl;
    do {
        cout << "Masukkan pilihan : ";
        cin >> pilihan;
        switch(pilihan) {
        case 1:
            cout << "Masukkan angka : ";
            cin >> data;
            enqueue(data);
            break;
        case 2:
            dequeue();
            break;
        case 3:
            tampil();
            break;
        case 4:
            cout << "Keluar" << endl;
            break;
        default: cout << "Pilihan salah";
        }
    }
    while(pilihan != 4);
    return 0;
}

void create(){
    antre.head = antre.tail = -1;
}

int isEmpty(){
    if(antre.tail == -1){
        return 1;
    }
    else{
        return 0;
    }
}

int isFull(){
    if(antre.tail == MAX - 1){
        return 1;
    }
    else{
        return 0;
    }
}

void enqueue(int data){
    if(isEmpty() == 1){
        antre.head = antre.tail = 0;
        antre.data[antre.tail] = data;
        cout << data << " dimasukkan ke antrian" << endl;
    }
    else
    {
        antre.tail++;
        antre.data[antre.tail] = data;
        cout << data << " dimasukkan ke antrian" << endl;
    }

}

int dequeue(){
    int i;
    int e = antre.data[antre.head];
    for(i = antre.head;i <= antre.tail - 1;i++){
        antre.data[i] = antre.data[i+1];
    }
    antre.tail--;
    cout << e << " telah dequeue" << endl;
    return e;
}

void tampil(){
    if(isEmpty()==0){
        for(int i = antre.head;i <= antre.tail;i++){
        cout << antre.data[i] << " ";
    }
    cout << endl;
    }
    else{
        cout<< "Data kosong" << endl;
    }
}
