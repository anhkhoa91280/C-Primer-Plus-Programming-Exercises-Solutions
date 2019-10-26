#ifndef H_POLAR_
#define H_POLAR_
struct rect {
	int x;
	int y;
};
struct polar {
	double distance;
	double angle;
};
polar to_polar(const rect &);
void show_polar(const polar &);
#endif
