int bsearch_3(int l, int r)
{
	while(r - l > 1e-8) //1e-6
	{
		double mid = l + r >> 1;
		if (check(mid)) r = mid;
		else l = mid;
	}
}
