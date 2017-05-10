#pragma once
#include <string>
#include <vector>
using int32 = int;
using FString = std::string;

class FBunny {
public:
     
	//Bunny check
	FString Random_Name();
	bool Random_Is_Mutant();
	FString Random_Color();
	FString Random_Sex();
	

	//TODO Make turns and everything else
	
	

private:
	FString name = Random_Name();
    FString sex = Random_Sex();
	FString color = Random_Color();
	int32 age = 0;
	bool mutant_bunny = Random_Is_Mutant();
	

	
	//int32 NAMES_SIZE = FBunny::names.size;
	
};