#include<iostream>
#include<ctime>







	class Time
	{
	private:
		int hour;
		int Enteredminutes;
		int seconds;
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

		class EntredSeconds
		{
			std::string message = "Укажите кол-во секунд в пределах 60";
		public:
			std::string printMessage() const
			{
				return message;
			}
		};
		class EntredMinut
		{
			std::string message = "Укажите кол-во секунд в пределах 60";
		public:
			std::string printMessage() const
			{
				return message;
			}
		};
		class EntredHours
		{
			std::string message = "Укажите кол-во секунд в пределах 24";
		public:
			std::string printMessage() const
			{
				return message;
			}

		};
		class FormatExeption
		{
			std::string message = "Error";
		public:

			std::string printMessage() const
			{
				return message;
			}
		};

	};



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
	else
	{
		throw FormatExeption();
		return false;
	}
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
		throw EntredSeconds();
	}

	if (this->Enteredminutes >= 60)
	{
		throw EntredMinut();
	}

	if (this->hour >= 24)
	{
		throw EntredHours();
	}


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
		std::cout << "Текущее время " << hour % 12 << " : " << Enteredminutes << " : " << EnteredSeconds ;
		if (hour > 12) std::cout << "pm)\n"; else std::cout << "am)\n";
	}

	else
		std::cout << "Текущее время " << hour << " : " << Enteredminutes << " : " << EnteredSeconds << " \n";
}

void Time::setHour(int hour)
{
	if (this->hour >= 24)
	{
		throw EntredHours();
	}
	else
	{
		this->hour = hour;
	}
}

int Time::getHour()
{
	return hour;
}

void Time::setMinutes(int minutes)
{
	if (this->Enteredminutes >= 60)
	{
		throw EntredMinut();
	}
	else
	{
		this->Enteredminutes = minutes;
	}

}

int Time::getMinutes()
{
	return Enteredminutes;
}

void Time::setSeconds(int seconds)
{
	if (this->EnteredSeconds >= 60)
	{
		throw EntredSeconds();
	}
	else
	{
		this->EnteredSeconds = seconds;
	}

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
	setlocale(LC_ALL, "rus");

	try
	{
		Time when(1, 2, 3);
		Time now(5, 6, 7);
		Time t1(1, 61, 10);
	}
	catch (const Time::EntredHours& ex)
	{
		std::cout << ex.printMessage();
	}
	catch (const Time::EntredMinut& ex)
	{
		std::cout << ex.printMessage();
	}
	catch (const Time::EntredSeconds& ex)
	{
		std::cout << ex.printMessage();
	}
	catch (const Time::FormatExeption& ex)
	{
		std::cout << ex.printMessage();
	}


}