#include <iostream>
#include <deque>
#include <string>
void doTrain(std::deque<int>& train, const std::string& command, int k){
	if (command == "+l")
		train.push_front(k);
	else if(command == "+r")
		train.push_back(k);
	else if(command == "-l"){
		if(k>0 && k<= train.size()){
			train.erase(train.begin(),train.begin()+k);
		} else if(k>0){
			train.clear();
		}
	} else if(command == "-r"){
		if(k>0 && k<= train.size()){
			train.erase(train.begin()+train.size()-k,train.end());
		} else if(k>0){
			train.clear();
		}
	}
}
void printT(const std::deque<int>& train){
	if(train.empty()){
		std::cout<<"empty";
	}
	else{
		for (int wagon: train)
		std::cout<<wagon<<" ";
	}
}
int main(){
	std::deque <int> train;
	std::string command;
	int k;
	while(true){
		std::cin>>command;
		if (command=="exit")
			break;
		std::cin>>k;
		doTrain(train,command,k);
		printT(train);
	}
}
