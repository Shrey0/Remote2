/* These are just a few examples of codes recorded
   from remotes I had laying around the house.  Note
   that I stopped cleaning up the recorded signals
   to try to make them match a known protocol, and
   now just use them as-is.  It seems to work fine.  */

uint16_t yamahaPwr[] = {
	8820, 4380, 540, 540, 555, 1650, 540, 555, 540, 1650, 555, 1635, 555, 1635, 555, 1635,
	555, 540, 555, 1650, 540, 555, 540, 1650, 555, 525, 555, 540, 555, 540, 555, 540,
	555, 1635, 555, 1650, 540, 1650, 555, 1635, 555, 1635, 555, 1635, 555, 540, 555, 540,
	555, 540, 540, 555, 555, 540, 540, 540, 570, 525, 555, 540, 555, 1650, 540, 1650,
	540, 1650, 555
};

uint16_t fanCode[] = {
1240, 
380, 1220,
380, 400,
1220, 1220,
380, 1220,
400, 400,
1200, 400,
1200, 400,
1220, 400,
1200, 1240,
380, 400,
1200, 400
};

uint16_t tvup[] = {
4400, 
4320, 560,
1600, 560,
1600, 560,
1600, 560,
500, 560,
500, 560,
500, 560,
500, 560,
520, 560,
1600, 560,
1600, 540,
1620, 560,
500, 560,
500, 560,
500, 560,
500, 560,
500, 580,
1580, 560,
1620, 540,
1620, 540,
500, 560,
520, 560,
500, 560,
500, 560,
500, 560,
500, 560,
520, 540,
520, 560,
1600, 560,
1600, 560,
1600, 560,
1600, 540,
1620, 560,
};

uint16_t tvdown[] = {
4400, 
4320, 560,
1600, 560,
1600, 560,
1600, 560,
500, 560,
500, 560,
520, 540,
520, 560,
500, 560,
1600, 560,
1600, 560,
1600, 560,
500, 620,
440, 560,
500, 580,
500, 540,
520, 560,
1600, 560,
1600, 560,
500, 540,
1620, 560,
500, 600,
460, 620,
440, 560,
500, 580,
500, 560,
500, 560,
1600, 560,
500, 560,
1600, 560,
1600, 560,
1600, 560,
1600, 560,
};

uint16_t sonyPower[] = {
2340, 
560, 1160,
560, 580,
540, 1180,
540, 640,
500, 1180,
540, 640,
480, 600,
540, 1180,
540, 600,
540, 580,
540, 580,
560, 580,
25340, 2360,
540, 1180,
540, 640,
500, 1180,
540, 640,
480, 1200,
520, 660,
480, 580,
560, 1160,
560, 580,
540, 640,
500, 580,
540, 600
};

long yvup = 0x5EA158A7;
long yvdown = 0x5EA1D827;
long ydvd = 0x5EA1837C;
long ycbl = 0x5EA12AD5;
long yvcr = 0x5EA1F00F;
long yaux = 0x5EA1AA55;
long sonypwr = 0xA90;