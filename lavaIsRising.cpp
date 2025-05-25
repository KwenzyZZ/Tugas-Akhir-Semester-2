#include <bits/stdc++.h>
using namespace std;
using namespace std::chrono;

void delay(int detik){
	this_thread::sleep_for(seconds(detik)); 
}

void delayMs(int milidetik){
	this_thread::sleep_for(milliseconds(milidetik)); 
}

void cls(){
	system("cls");
}
int generateSoal(int ronde, int difficulty){
	//EASY
    if(difficulty == 1){
        if(ronde <= 5)
            return rand() % 10;
        else if(ronde <= 10)
            return rand() % 20;
    }

	//MEDIUM
    else if(difficulty == 2){
        if(ronde <= 5)
            return rand() % 25;
        else if(ronde <= 10)
            return rand() % 50;
    }

	//HARD
    else if(difficulty == 3){
        if(ronde <= 5)
            return rand() % 50;
        else if(ronde <= 10)
            return rand() % 100; 
    }
    return 0;
}


int hitungPoin(int waktu, int ronde, int difficulty){
	
	//Easy
	if(difficulty == 1){ 
        if(waktu > 15) return 0;
        if(waktu >= 10 && ronde <= 3) return 5;
        return 15 - waktu;
    }
    
    //Medium
    else if(difficulty == 2){ 
        if(waktu > 30) return 0;
        if(waktu >= 22 && ronde <= 3) return 8;
        return 30 - waktu;
    }
    
    //Hard
    else if(difficulty == 3){
        if(waktu > 45) return 0;
        if(waktu >= 35 && ronde <= 3) return 10;
        return 45 - waktu;
    }
	 return 0;	
}

int penguranganPoin(int ronde, int difficulty){
	
	//easy
	if(ronde <= 1 && difficulty == 1) return rand () % 1;
	else if(ronde >= 5 && difficulty == 1) return rand () % 3;
	else if (ronde >= 10 && difficulty == 1)return rand () % 5;

	//medium
	if(ronde <= 2 && difficulty == 2) return rand () % 2;
	else if(ronde >= 5 && difficulty == 2) return rand () % 6;
	else if (ronde >= 10 && difficulty == 2)return rand () % 8;

	//hard
	if(ronde <= 3 && difficulty == 3) return rand () % 3;
	else if(ronde >= 5 && difficulty == 3) return rand () % 7;
	else if (ronde >= 10 && difficulty == 3)return rand () % 9;	
	
	
	
	return 0;
}

void lavaIsRisingText(int delayMilliSecond, int tempPoinPengurangan){
	string textLava = "Lava naik setinggi ";
	cout << "\033[0;31m";
	for(int i = 0; i < textLava.length(); i++){
	cout << textLava[i];
	delayMs(delayMilliSecond);
	}
	cout << tempPoinPengurangan << " poin !";
	cout << "\033[0m";
}

string Terimakasih(){
	return "Terima kasih telah bermain Lava is Rising!";
}


main(){
	srand(time(NULL));

	int pilihan, tempPoin = 0, PoinP1 = 1, PoinP2 = 1, hitungRound = 1, poinDikurang, difficulty;
	char pilihanYN;
	string player1, player2;
	
	int arrPenguranganPoin[9] = {2, 4, 6, 8, 10, 12, 14, 20, 25}; 

	
	
	
	MENUAWAL:
	cout << "1. Mulai" << endl;
	cout << "2. Baca Petunjuk" << endl;
	cout << "3. Exit" << endl;
	cout << "Masukan pilihan anda : ";
	
	cin >> pilihan;
	switch(pilihan){
		int q1, q2, jawaban, jawabanPlayer;
		
		
		case 1 :
		cls();
		cout << "\033[0;31m";
		cout << R"(                                                                                                                  
 @@@        @@@@@@   @@@  @@@   @@@@@@      @@@   @@@@@@      @@@@@@@   @@@   @@@@@@   @@@  @@@  @@@   @@@@@@@@  
 @@@       @@@@@@@@  @@@  @@@  @@@@@@@@     @@@  @@@@@@@      @@@@@@@@  @@@  @@@@@@@   @@@  @@@@ @@@  @@@@@@@@@  
 @@!       @@!  @@@  @@!  @@@  @@!  @@@     @@!  !@@          @@!  @@@  @@!  !@@       @@!  @@!@!@@@  !@@        
 !@!       !@!  @!@  !@!  @!@  !@!  @!@     !@!  !@!          !@!  @!@  !@!  !@!       !@!  !@!!@!@!  !@!        
 @!!       @!@!@!@!  @!@  !@!  @!@!@!@!     !!@  !!@@!!       @!@!!@!   !!@  !!@@!!    !!@  @!@ !!@!  !@! @!@!@  
 !!!       !!!@!!!!  !@!  !!!  !!!@!!!!     !!!   !!@!!!      !!@!@!    !!!   !!@!!!   !!!  !@!  !!!  !!! !!@!!  
 !!:       !!:  !!!  :!:  !!:  !!:  !!!     !!:       !:!     !!: :!!   !!:       !:!  !!:  !!:  !!!  :!!   !!:  
 :!:      :!:  !:!   ::!!:!   :!:  !:!     :!:      !:!      :!:  !:!  :!:      !:!   :!:  :!:  !:!  :!:   !::  
 :: ::::  ::   :::    ::::    ::   :::      ::  :::: ::      ::   :::   ::  :::: ::    ::   ::   ::   ::: ::::  
: :: : :   :   : :     :       :   : :     :    :: : :        :   : :  :    :: : :    :    ::    :    :: :: :   
		)" << endl;
		cout << "\033[0m";
		delay(3);
		cls();
		cout << "Masukan nama untuk\033[0;32m Player 1\033[0m : ";
		cin >> player1;
	
		cout << "Masukan nama untuk\033[0;34m Player 2\033[0m : ";
		cin >> player2;
		cls();
		cout << "Selamat datang \033[0;32m"<< player1 << "\033[0m dan \033[0;34m"<< player2 << "\033[0m di\033[1;31m Lava is rising! \033[0m" << endl;
		delay(3);
		cls();
		
		
		MENUDIFF:
		cout << "Pilih Difficulty" << endl;
		cout << "\033[0;32m 1. Easy \033[0m" << endl;
		cout << "\033[0;33m 2. Medium \033[0m" << endl;
		cout << "\033[0;31m 3. Hard \033[0m" << endl;
		cout << "Masukan pilihan [1-3] : "; cin >> difficulty;
		
		if (difficulty < 1 || difficulty > 3) {
    	cout << "Pilihan tidak ada. Silakan coba lagi\n";
    	delay(3);
    	cls(); 	
		goto MENUDIFF;
		}
		cls();
		while(PoinP1 > 0 && PoinP2 > 0){
			
			
		cout << "Round - " << hitungRound << endl;
		delay(3);
				
		//PLAYER 1
		cout << "Waktunya \033[0;32m" << player1 << "\033[0m untuk menjawab pertanyaan!" << endl;;
			q1 = generateSoal(hitungRound, difficulty);
			q2 = generateSoal(hitungRound, difficulty);
			jawaban = q1 + q2;
		cout << q1 << " + " << q2 << " = ";
		
		auto waktuAwal = steady_clock::now();
		cin >> jawabanPlayer;
		auto waktuAkhir = steady_clock::now();
		auto countWaktu = duration_cast<seconds>(waktuAkhir - waktuAwal).count();
		
		if(jawabanPlayer == jawaban){
			tempPoin = hitungPoin(countWaktu, hitungRound, difficulty);
			PoinP1 += tempPoin;                         
			cout << "\033[0;32m" << player1 << "\033[0m Mendapatkan poin " << tempPoin << ", dengan waktu " << countWaktu << " detik" << endl;
			cout << "Poin : " << PoinP1 << endl;
			delay(3);
			cls();
			

			
		}else{
			cls();
			cout << "\033[0;31mJawaban Salah!\033[0m" << endl; // Player 1
			cout << "Poin : " << PoinP1 << endl;
			delay(3);
			cls();
		}

	 		
	 	//PLAYER 2
		cout << "Waktunya \033[0;34m" << player2 << "\033[0m untuk menjawab pertanyaan!" << endl;;
			q1 = generateSoal(hitungRound, difficulty);
			q2 = generateSoal(hitungRound, difficulty);
			jawaban = q1 + q2;
		cout << q1 << " + " << q2 << " = ";
		
		auto waktuAwal2 = steady_clock::now();
		cin >> jawabanPlayer;
		auto waktuAkhir2 = steady_clock::now();
		auto countWaktu2 = duration_cast<seconds>(waktuAkhir2 - waktuAwal2).count();
		
		if(jawabanPlayer == jawaban){
			tempPoin = hitungPoin(countWaktu2, hitungRound, difficulty);
			PoinP2 += tempPoin;                         
			cout << "\033[0;34m" << player2 << "\033[0m Mendapatkan poin " << tempPoin << ", dengan waktu " << countWaktu2 << " detik" << endl;
			cout << "Poin : " << PoinP2 << endl;
			delay(3);
			cls();
			

			
		}else{
			cls();
			cout << "\033[0;31mJawaban Salah!\033[0m" << endl; // Player 2
			cout << "Poin : " << PoinP2 << endl;
			delay(3);
			cls();
		}
		
			tempPoin = arrPenguranganPoin[penguranganPoin(hitungRound, difficulty)];
			PoinP1 -= tempPoin;
			PoinP2 -= tempPoin;
			lavaIsRisingText(300, tempPoin);
			delay(3);
			cls();
			

	hitungRound++;
}
			if(PoinP1 > PoinP2) cout << "\033[0;32m" << player1 << "\033[0m\033[0;33m menang!\033[0m\n";
			else if(PoinP2 > PoinP1) cout<< "\033[0;34m" << player2 << "\033[0m\033[0;33mmenang!\033[0m\n";
			else cout << "Permainan Seri!\n";
	
		break;
		case 2 :
			cls();
 			cout << "Petunjuk Permainan: " << endl;
 			cout << "- Poin dimulai dari 1" << endl;
 			delay(1);
            cout << "- Pemain akan bergantian menjawab soal" << endl;
            delay(1);
            cout << "- Jawaban yang benar akan mendapat poin" << endl;
            delay(1);
            cout << "- Pemain dengan poin tertinggi menang!" << endl;
            delay(1);
 
			cout << "Kembali ke menu [Y/N] : ";
			cin >> pilihanYN;
			
			
			if(pilihanYN == 'Y' || pilihanYN == 'y'){
				cls();
				goto MENUAWAL;
			}else{
				cout << Terimakasih() << endl;
			}
			
		break;
		case 3 : 
		cout << Terimakasih() << endl; 
		break;
		
		default:
		cls();
		cout << "Tolong pilih yang sesuai dengan pilihan yang ada." << endl;
		delay(3);
		cls();
		goto MENUAWAL;
		break;
	}
	
	}
	
	