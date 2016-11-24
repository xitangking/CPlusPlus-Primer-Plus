#pragma once
#include<iostream>
#include<string>
#include<ctime>
#include<cstdlib>

using namespace std;

class Person
{
private:
	std::string m_sFirstName;
	std::string m_sLastName;
public:
	Person() :m_sFirstName("none"), m_sLastName("none") {  }
	Person(std::string & f, std::string & l) :m_sFirstName(f), m_sLastName(l) {  }
	virtual void Show()
	{
		cout << "Name: " << m_sLastName << " " << m_sFirstName << endl;
	}
	virtual void Get()
	{
		cout << "Please enter your firstname£º ";
		cin >> m_sFirstName;
		cout << "Please enter your lastname: ";
		cin >> m_sLastName;
	}
	virtual void Set()
	{
		Get();
	}
	virtual ~Person()
	{

	}
};

class Gunslinger:virtual public Person
{
private:
	double m_dTime;
	int m_nNick;
public:
	Gunslinger() :Person(), m_dTime(0), m_nNick(0) {  }
	Gunslinger(string & f, string & l, double t, int n) :Person(f, l), m_dTime(t), m_nNick(n) {  }
	double TDraw() { return m_dTime; }
	int NDraw() { return m_nNick; }
	void Show()
	{
		Person::Show();
		cout << "Time draw out the guns: " << m_dTime << endl;
		cout << "Nick of the guns: " << m_nNick << endl;
	}
	void Get()
	{
		cout << "Plaese enter the time of gunslinger draw out the guns: ";
		cin >> m_dTime;
		cout << "Plase enter the nick of the guns: ";
		cin >> m_nNick;
	}
	void Set()
	{
		Person::Get();
		Get();
	}
	~Gunslinger() {  }
};

class PokerPlayer:virtual public Person
{
public:
	class Poker
	{
	public:
		enum Pokersuit { Heart, Spade, Diamond, Club };
		Pokersuit m_eSuit;
		int m_nVlaue;
	};
private:
	Poker m_pCard;
public:
	PokerPlayer() :Person()
	{
		m_pCard.m_nVlaue = 0;
		m_pCard.m_eSuit = Poker::Pokersuit(0);
	}
	PokerPlayer(string & f, string & l) :Person(f, l)
	{
		m_pCard.m_nVlaue = rand() / 13 + 1;
		m_pCard.m_eSuit = Poker::Pokersuit(rand() / 4);
	}
	Poker & Draw() { return m_pCard; }
	void Show()
	{
		Person::Show();
		cout << "PokerSuit: ";
		switch (m_pCard.m_eSuit)
		{
		case Poker::Pokersuit::Heart:cout << "Heart" << endl;
			break;
		case Poker::Pokersuit::Club:cout << "Club" << endl;
			break;
		case Poker::Pokersuit::Diamond:cout << "Dimond" << endl;
			break;
		case Poker::Pokersuit::Spade:cout << "Spade" << endl;
			break;
		}
		cout << "PokerValue: " << m_pCard.m_nVlaue << endl;
	}
	void Get()
	{
		cout << "Please enter the pokersuit: (0-Heart;1-Spade;2-Dimond;3-Club)";
		int suit;
		cin >> suit;
		m_pCard.m_eSuit = (Poker::Pokersuit)suit;
		cout << "Please enter the value of poker: ";
		cin >> m_pCard.m_nVlaue;
	}
	void Set()
	{
		Person::Get();
		Get();
	}
	~PokerPlayer() {  }
};

class BadDude :public Gunslinger,public PokerPlayer
{
public:
	BadDude() :Gunslinger(), PokerPlayer() {  }
	BadDude(string f, string l, double t, int n) :Gunslinger(f, l, t, n), PokerPlayer() {  }
	void Show()
	{
		PokerPlayer::Show();
		cout << "Time draw out the guns: " << Gunslinger::TDraw() << endl;
		cout << "Nick of the guns: " << Gunslinger::NDraw() << endl;
	}
	int GDraw() { return Gunslinger::TDraw(); }
	PokerPlayer::Poker & CDraw() { return PokerPlayer::Draw(); }
	void Get()
	{
		Gunslinger::Get();
		PokerPlayer::Get();
	}
	void Set()
	{
		Person::Get();
		Get();
	}
	~BadDude()
	{

	}
};