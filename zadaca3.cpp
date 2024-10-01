#include <iostream>
#include <set>
#include <string>
#include <unordered_set>
int main() {
	double kol=0;
	double pac=1;
	std::unordered_set<std::string> Lwords{"люблю","любовь","любить","разлюбить","возлюбленный","влюблён","любимый"};
    std::set<std::string> FLwords;
    std::set<std::string>  words;
    std::string word;
     while (std::cin >> word) {
		 if(Lwords.find(word)!=Lwords.end()){
			 kol++;
			 if(FLwords.insert(word).second){
				 words.insert(word);
			}
		}
	 }
	 
	kol=kol/1000;
	pac=pac*kol;
	
    for (const auto& word : words) {
        std::cout << word << "\n";
    }
    std::cout<<"количество пачек "<<kol<<"\n";
}

