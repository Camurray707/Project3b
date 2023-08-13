Project 3b: 

Project members: 
Christopher Murray and Kevin Cozart

To Run: 

Open project in prefered c++ IDE. (I (Kevin) used Clion 2022.1 build CL-221.5080.224)
setup program arguments as follows. 
	test.txt 1 //runs flag 1
	test.txt 2 //runs flag 2

File you want to pull trie information from. (test.txt)
Numercial flag 1 or 2 

	flag 1: Will output the build time and space for Standard Trie and BST based Trie for specified input file. 
		Will request user input.  Can input word, partial words, or characters.
		Will search that input word/partial/character within both Standard Trie and BST based Trie and print out any words found using the input prefix. 
		Will output the time taken to find these words based on the prefix
		Will request another word until force closed. 
			NOTE:  Searching is fairly reliable.  There is a small bug with searching.  While this isn't entirly a problem, when we have shorter prefix that isn't a full word the 
			moving of the current node doesn't reliably fire and add in words that aren't proper.  For example if we search ap, instead of getting  "Apart and Appearance" we get 
			"armed arrangement apart appearene"  we 	

		
	flag 2: Will output the build time and space for Standard Trie and BST based Trie for specified input file. 
		Will also output the time taken to search all strings in the input file for Standard Trie and BST based Trie. 
			NOTE: output seems reasonable for flag 2
