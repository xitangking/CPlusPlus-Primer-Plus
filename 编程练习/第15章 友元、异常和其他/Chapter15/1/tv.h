#pragma once

class Remote;

class Tv
{
private:
	int state;
	int volume;
	int maxchannal;
	int channal;
	int mode;
	int input;
public:
	friend class Remote;
	enum{Off,On};
	enum{MinVal,MaxVal};
	enum{Antenna,Cable};
	enum{TV,DVD};

	Tv(int s = Off, int mc = 125) :state(s), volume(5), maxchannal(mc), channal(2), mode(Cable), input(TV) {  }
	void onoff() { state = (state == On) ? Off : On; }
	bool ison() const { return state == On; }
	bool volup();
	bool voldown();
	bool chanup();
	bool chandown();
	void set_mode() { mode = (mode == Antenna) ? Cable : Antenna; }
	void set_input() { input = (input == TV) ? DVD : TV; }	
	void setting()const;
	void set_state(Remote& r)
	{
		if (ison())
		{
			r.set_state();
		}
	}
};

class Remote

{
private:
	int mode;
	int state;
public:
	enum { normal, interact };
	friend Tv;
	Remote(int m = Tv::TV) :mode(m) {  }
	void set_state() { state = (state == normal) ? interact : normal; }
	bool volup(Tv& t) { return t.volup; }
	bool voldown(Tv& t) { return t.voldown; }
	void onoff(Tv& t) { t.onoff(); }
	void chanup(Tv& t) { t.chanup(); }
	void chandown(Tv& t) { t.chandown(); }
	void set_chan(Tv& t, int c) { t.channal = c; }
	void set_mode(Tv& t) { t.set_mode(); }
	void set_input(Tv& t) { t.set_input(); }
	int show_state() { return state; }

};