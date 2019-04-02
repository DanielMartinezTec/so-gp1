#include "types.h"
	#include "stat.h"
	#include "user.h"
	#include "date.h"
	
	int main(int argc, char **aa){
		//struct rtcdate r; 
		struct rtcdate r ;
		date(&r);
		printf(1, "%d:%d:%d %d-%d-%d\n", r.year, r.month,r.day, r.hour,r.minute,r.second);
		exit();
	}