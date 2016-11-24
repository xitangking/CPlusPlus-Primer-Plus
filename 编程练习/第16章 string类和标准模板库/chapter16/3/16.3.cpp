// hangman.cpp -- some string methods
#include<iostream>
#include<string>
#include<cstdlib>
#include<ctime>
#include<cctype>
#include<fstream>
#include<vector>

using std::string;
const int NUM = 5;
std::vector<string> wordlist;/*= { "apiary","beetle","cereal","danger",
							"ensign","florid","health","insult",
							"jackal","keeper","loaner","manage"
							,"nonce","onset","plaid","quilt","remote",
							"stolid","train","useful","valid","whence",
							"xearn","zippy" };*/

void Read()
{
	std::ifstream fin;
	fin.open("word.txt");
	if (!fin.is_open())
	{
		std::cout << "打开文件出错！";
	}
	string str;
	while (!fin.eof())
	{
		fin >> str;
		wordlist.push_back(str);
	}
}

int main()
{
	using std::cout;
	using std::cin;
	using std::endl;
	using std::tolower;
	std::srand(std::time(0));
	char play;
	Read();
	cout << "Will you play a word game?[y/n] ";
	cin >> play;
	play = tolower(play);
	while (play == 'y')
	{
		string target = wordlist[std::rand() % NUM];
		int length = target.length();
		string attempt(length, '-');
		string badchars;
		int guesses = 6;
		cout << "Guess my secret word. It has " << length << " letters,and you guess\n"
			<< "one letter at a time,You get " << guesses << " wrong guesses.\n";
		cout << "You word: " << attempt << endl;
		while (guesses > 0 && attempt != target)
		{
			char letters;
			cout << "Guess a letter: ";
			cin >> letters;
			if (badchars.find(letters) != string::npos||attempt.find(letters)!=string::npos)
			{
				cout << "You already guessed that.Try again.\n";
				continue;
			}
			int loc = target.find(letters);
			if (loc == string::npos)
			{
				cout << "Oh,bad guess!\n";
				--guesses;
				badchars += letters;//add to string
			}
			else
			{
				cout << "Good guess!\n";
				attempt[loc] = letters;
				//check if letter appears again
				loc = target.find(letters, loc + 1);
				while (loc != string::npos)
				{
					attempt[loc] = letters;
					loc = target.find(letters, loc + 1);
				}
			}
			cout << "Your word: " << attempt << endl;
			if (attempt != target)
			{
				if (badchars.length() > 0)
					cout << "Bad choices: " << badchars << endl;
				cout << guesses << " bad guesses left\n";
			}
		}
		if (guesses > 0)
		{
			cout << "That's right!\n";
		}
		else
			cout << "Sorry,the word is" << target << ".\n";
		cout << "Will you play another?[y/n] ";
		cin >> play;
		play = tolower(play);
	}

	cout << "Bye!\n";
	system("pause");

	return 0;
}
