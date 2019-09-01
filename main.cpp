#include <hal/board.h>
#include <hal/irq.h>

#include <systime/systime.h>

int main() 
{
	board_init();

	irqs_enable();

	while(1) 
	{
		delay(1);
		//board::sysled.toggle();
	}
}