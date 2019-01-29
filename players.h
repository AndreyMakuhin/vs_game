#define PLAYER1 Test1
#define PLAYER2 Test2

char Test1(Lab *L)
{
	L->SetName(__FUNCTION__);
	
	int X = L->GetSizeX(); int Y = L->GetSizeY();

	int xp, yp;
	L->GetMe(xp, yp);

	int xb = 1000, yb = 1000, max_d = 1000;
	for (int x = 0; x < X; x++)
		for (int y = 0; y < Y; y++)
			if (L->GetLab(x, y) == '*')
			{
				if (max_d > abs(xp - x) + abs(yp - y))
				{
					xb = x; yb = y; max_d = abs(xp - x) + abs(yp - y);
				}
			}
	if (xb < xp && L->GetLab(xp-1,yp)!='#')
		return 'U';
	if (xb > xp && L->GetLab(xp + 1, yp) != '#')
		return 'D';
	if (yb < yp && L->GetLab(xp , yp-1) != '#')
		return 'L';
	if (yb > yp && L->GetLab(xp , yp+1) != '#')
		return 'R';

	return ' ';
}

char Test2(Lab *L)
{
	L->SetName(__FUNCTION__);

	int X = L->GetSizeX(); int Y = L->GetSizeY();

	int xp, yp;
	L->GetMe(xp, yp);

	int xb = 1000, yb = 1000, max_d = 1000;
	for (int x = 0; x < X; x++)
		for (int y = 0; y < Y; y++)
			if (L->GetLab(x, y) == '*')
			{
				if (max_d > abs(xp - x) + abs(yp - y))
				{
					xb = x; yb = y; max_d = abs(xp - x) + abs(yp - y);
				}
			}
	if (yb < yp)
		return 'L';
	if (yb > yp)
		return 'R';
	if (xb < xp)
		return 'U';
	if (xb > xp)
		return 'D';
	
	return ' ';
}

