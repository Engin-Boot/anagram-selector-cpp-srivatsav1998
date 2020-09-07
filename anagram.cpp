#include "anagram.h"
#include <algorithm>
#include <iostream>

bool isEqual(std::string word1, std::string word2){
    for (int i = 0; i < word1.length(); i++){
        if(word1[i] != word2[i]){
            return false;
        }
    }
    return true;
}

std::string removeSpaces(const std::string& word) {
	std::string spaceFreeString;
	int noOfChars_word1 = 0, noOfChars_word2 = 0;
	for (int i = 0; i < word.length(); i++) {
		if (!isspace(word[i])) {
			spaceFreeString.push_back(word[i]);
		}
	}
	return spaceFreeString;
}

bool Anagram::WordPairIsAnagram(const std::string& word1, const std::string& word2) {	
	std::string word1_copy = removeSpaces(word1);
	std::string word2_copy = removeSpaces(word2);
	
	// Anagrams should have same number of characters
	if (word1_copy.length() != word2_copy.length()) {
		return false;
	}

	std::transform(word1_copy.begin(), word1_copy.end(), word1_copy.begin(), ::tolower);
	std::transform(word2_copy.begin(), word2_copy.end(), word2_copy.begin(), ::tolower);

    // Anagrams should have same characters
    sort(word1_copy.begin(), word1_copy.end());
    sort(word2_copy.begin(), word2_copy.end());

    if(isEqual(word1_copy, word2_copy)){
        return true;
    }
    return false;
}

std::vector<std::string> Anagram::SelectAnagrams(
        const std::string& word,
        const std::vector<std::string>& candidates) {
    std::vector<std::string> anagrams;
    for(int i=0; i<candidates.size(); i++){
        if(WordPairIsAnagram(word, candidates[i])){
            anagrams.push_back(candidates[i]);
        }
    }
    return anagrams;
}
