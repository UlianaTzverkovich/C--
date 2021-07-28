#include<iostream>
#include<ctime>
#include <windows.h>


class Time
{
private:
	int hour;
	int Enteredminutes;
	int EnteredSeconds;
	char format[6]{};

public:
	Time();
	Time(int hour, int minutes, int seconds, const char* format = "utc");
	Time(const Time& obj);
	~Time();
	void showTime();

	void setHour(int hour);
	int getHour();
	void setMinutes(int minutes);
	int getMinutes();
	void setSeconds(int seconds);
	int getSeconds();
	bool setFormat(const char* format);
	const char* getFormat();
	Time concat(const Time& obj);

	bool valid();
	void tickTime();
};


void Time::tickTime()
{
	this->EnteredSeconds += 1;

	if (this->EnteredSeconds >= 60)
	{
		this->EnteredSeconds %= 60;
		this->Enteredminutes += 1;
	}

	if (this->Enteredminutes >= 60)
	{
		this->Enteredminutes %= 60;
		this->hour += 1;
	}

	if (this->hour >= 24)
		this->hour %= 24;
}

bool Time::valid()
{
	time_t t = time(NULL);
	tm flag;
	localtime_s(&flag, &t);

	if (this->hour == flag.tm_hour && this->Enteredminutes == flag.tm_min && this->EnteredSeconds == flag.tm_sec)
		return true;
	return false;
}

bool Time::setFormat(const char* format)
{
	if (strcmp("am/pm", format) == 0 || strcmp("utc", format) == 0)
	{
		strcpy_s(this->format, format);
		return true;
	}
	return false;
}

const char* Time::getFormat()
{
	return this->format;
}


Time::Time()
{

	this->hour = 0;
	this->Enteredminutes = 0;
	this->EnteredSeconds = 0;

	strcpy_s(this->format, "utc");
}

Time::Time(int hour, int minutes, int seconds, const char* format)
{
	this->hour = hour;
	this->Enteredminutes = minutes;
	this->EnteredSeconds = seconds;

	if (this->EnteredSeconds >= 60)
	{
		this->EnteredSeconds %= 60;
		this->Enteredminutes += 1;
	}

	if (this->Enteredminutes >= 60)
	{
		this->Enteredminutes %= 60;
		this->hour += 1;
	}

	if (this->hour >= 24)
		this->hour %= 24;


	strcpy_s(this->format, "utc");
}

Time::Time(const Time& obj)
{
	this->hour = obj.hour;
	this->Enteredminutes = obj.Enteredminutes;
	this->EnteredSeconds = obj.EnteredSeconds;
	strcpy_s(this->format, obj.format);
}

Time::~Time() {}

void Time::showTime()
{
	if (strcmp("am/pm", format) == 0)
	{
		std::cout << "Текущее время = " << hour % 12 << " : " << Enteredminutes << " : " << EnteredSeconds << " (";
		if (hour > 12) std::cout << "pm)\n"; else std::cout << "am)\n";
	}

	else
		std::cout << "Текущее время = " << hour << " : " << Enteredminutes << " : " << EnteredSeconds << "\n";
}

void Time::setHour(int hour)
{
	this->hour = hour;

	if (this->hour >= 24)
		this->hour %= 24;

}

int Time::getHour()
{
	return hour;
}

void Time::setMinutes(int minutes)
{
	this->Enteredminutes = minutes;

	if (this->Enteredminutes >= 60)
	{
		this->Enteredminutes %= 60;
		this->hour += 1;
	}

	if (this->hour >= 24)
		this->hour %= 24;

}

int Time::getMinutes()
{
	return Enteredminutes;
}

void Time::setSeconds(int seconds)
{
	this->EnteredSeconds = seconds;
	if (this->EnteredSeconds >= 60)
	{
		this->EnteredSeconds %= 60;
		this->Enteredminutes += 1;
	}

	if (this->Enteredminutes >= 60)
	{
		this->Enteredminutes %= 60;
		this->hour += 1;
	}

	if (this->hour >= 24)
		this->hour %= 24;

}

int Time::getSeconds()
{
	return EnteredSeconds;
}


Time Time::concat(const Time& obj)
{
	Time time;
	time.hour = this->hour + obj.hour;
	time.Enteredminutes = this->Enteredminutes + obj.Enteredminutes;
	time.EnteredSeconds = this->EnteredSeconds + obj.EnteredSeconds;

	if (time.EnteredSeconds >= 60)
	{
		time.EnteredSeconds %= 60;
		time.Enteredminutes += 1;
	}

	if (time.Enteredminutes >= 60)
	{
		time.Enteredminutes %= 60;
		time.hour += 1;
	}

	if (time.hour >= 24)
		time.hour %= 24;


	return time;
}

int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	Time when(1, 2, 3);
	Time now(5, 6, 7);

	Time time = when.concat(now);

	time.showTime();

}