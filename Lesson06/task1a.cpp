#include<iostream>
using namespace std;
/*
Трайчо иска да си купи нов лаптоп.
Той е готов да даде от 1000 до 1500 лева за лаптоп с най-малко 3 USB порта, най-малко 8 GB RAM и SSD диск.
Ако обаче лаптопът няма SSD или има по-малко от 8 GB RAM, той не иска да даде повече от 800 лева.

Напишете булев израз, който по цена на лаптоп, брой USB портове, количество RAM и дали има SSD определя дали Трайчо ще си купи лаптопа.
*/
int main()
{
	int price, usb, ram;
	bool ssd;

	cin>>price>>usb>>ram>>ssd;

	bool expensive = (1000 <= price && price <= 1500) && usb >= 3 && ram >= 8 && ssd;

	bool cheap = (price <= 800) && (!ssd || (ram < 8));
					
	bool ans = expensive || cheap;

  return 0;
}
