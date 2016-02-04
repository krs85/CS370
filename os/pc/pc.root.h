extern unsigned char root14code[];
extern int root14len;
extern unsigned char root15code[];
extern int root15len;
extern unsigned char root16code[];
extern int root16len;
extern unsigned char root17code[];
extern int root17len;
extern unsigned char root18code[];
extern int root18len;
extern unsigned char root19code[];
extern int root19len;
extern unsigned char root20code[];
extern int root20len;
extern unsigned char root21code[];
extern int root21len;
extern unsigned char root22code[];
extern int root22len;
extern unsigned char root23code[];
extern int root23len;
extern unsigned char root24code[];
extern int root24len;
extern unsigned char root25code[];
extern int root25len;
extern unsigned char root26code[];
extern int root26len;
extern unsigned char root27code[];
extern int root27len;
extern unsigned char root28code[];
extern int root28len;
extern unsigned char root29code[];
extern int root29len;
extern unsigned char root30code[];
extern int root30len;
extern unsigned char root31code[];
extern int root31len;
int rootmaxq = 32;
Dirtab roottab[32] = {
	"",	{0, 0, QTDIR},	 0,	0555,
	"chan",	{1, 0, QTDIR},	 0,	0555,
	"dev",	{2, 0, QTDIR},	 0,	0555,
	"dis",	{3, 0, QTDIR},	 0,	0555,
	"env",	{4, 0, QTDIR},	 0,	0555,
	"fd",	{5, 0, QTDIR},	 0,	0555,
	"n",	{6, 0, QTDIR},	 0,	0555,
	"net",	{7, 0, QTDIR},	 0,	0555,
	"nvfs",	{8, 0, QTDIR},	 0,	0555,
	"prog",	{9, 0, QTDIR},	 0,	0555,
	"osinit.dis",	{10, 0, QTFILE},	 0,	0444,
	"lib",	{11, 0, QTDIR},	 0,	0555,
	"svc",	{12, 0, QTDIR},	 0,	0555,
	"wm",	{13, 0, QTDIR},	 0,	0555,
	"sh.dis",	{14, 0, QTFILE},	 0,	0444,
	"ls.dis",	{15, 0, QTFILE},	 0,	0444,
	"cat.dis",	{16, 0, QTFILE},	 0,	0444,
	"bind.dis",	{17, 0, QTFILE},	 0,	0444,
	"mount.dis",	{18, 0, QTFILE},	 0,	0444,
	"pwd.dis",	{19, 0, QTFILE},	 0,	0444,
	"echo.dis",	{20, 0, QTFILE},	 0,	0444,
	"cd.dis",	{21, 0, QTFILE},	 0,	0444,
	"remote",	{22, 0, QTDIR},	 0,	0555,
	"bufio.dis",	{23, 0, QTFILE},	 0,	0444,
	"string.dis",	{24, 0, QTFILE},	 0,	0444,
	"readdir.dis",	{25, 0, QTFILE},	 0,	0444,
	"workdir.dis",	{26, 0, QTFILE},	 0,	0444,
	"daytime.dis",	{27, 0, QTFILE},	 0,	0444,
	"auth.dis",	{28, 0, QTFILE},	 0,	0444,
	"ssl.dis",	{29, 0, QTFILE},	 0,	0444,
	"arg.dis",	{30, 0, QTFILE},	 0,	0444,
	"filepat.dis",	{31, 0, QTFILE},	 0,	0444,
};
Rootdata rootdata[32] = {
	0,	 &roottab[1],	 10,	nil,
	0,	 nil,	 0,	 nil,
	0,	 nil,	 0,	 nil,
	0,	 &roottab[11],	 11,	nil,
	0,	 nil,	 0,	 nil,
	0,	 nil,	 0,	 nil,
	0,	 &roottab[22],	 1,	nil,
	0,	 nil,	 0,	 nil,
	0,	 nil,	 0,	 nil,
	0,	 nil,	 0,	 nil,
	0,	 root14code,	 0,	 &root14len,
	3,	 &roottab[23],	 9,	nil,
	3,	 nil,	 0,	 nil,
	3,	 nil,	 0,	 nil,
	3,	 root15code,	 0,	 &root15len,
	3,	 root16code,	 0,	 &root16len,
	3,	 root17code,	 0,	 &root17len,
	3,	 root18code,	 0,	 &root18len,
	3,	 root19code,	 0,	 &root19len,
	3,	 root20code,	 0,	 &root20len,
	3,	 root21code,	 0,	 &root21len,
	3,	 root22code,	 0,	 &root22len,
	6,	 nil,	 0,	 nil,
	11,	 root23code,	 0,	 &root23len,
	11,	 root24code,	 0,	 &root24len,
	11,	 root25code,	 0,	 &root25len,
	11,	 root26code,	 0,	 &root26len,
	11,	 root27code,	 0,	 &root27len,
	11,	 root28code,	 0,	 &root28len,
	11,	 root29code,	 0,	 &root29len,
	11,	 root30code,	 0,	 &root30len,
	11,	 root31code,	 0,	 &root31len,
};
