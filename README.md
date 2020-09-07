# Anagram Selector

This project uses the
[catch framework](https://github.com/catchorg/Catch2/blob/master/docs/tutorial.md#top)
to test functionality.

## Anagrams

For definition and examples, [see here](https://en.wikipedia.org/wiki/Anagram)

## Methods

### WordPairIsAnagram
When two words are passed to this function, it will check whether
the passed two words are anagrams and returns a boolean output.

### isEqual
when passed with two strings, it will check for string similarity
and returns boolean true if they are equal.

### removeSpaces
When passed with a string to this function, it will remove all the spaces
in the current string and returns a space free string.

### SelectAnagrams
When passed with a word and a list of candidate anagrams to this function,
it will test for anagrams for each of the candidate and returns list of all
candidate anagrams.