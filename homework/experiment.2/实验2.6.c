#include<stdio.h>
int main()
{
	double s, t;
	int w;
	printf("请输入工资金额：");
	scanf("%lf", &s);
    if(s<5000)
    w = s / 1000;
    else
        w = 5;
    switch(w)
	{case 0:
		t = 0;
	break;
	case 1:
		t = (s - 1000) * 5 /100 ;
		break;
    case 2:
		t = (2000 - 1000) * 5/100 +(s - 2000) * 10/100 ;
		break;
    case 3:
		t = (2000 - 1000) * 5 /100 +(3000 - 2000) * 10 /100 +(s - 3000) * 15 /100 ;
		break;
	case 4:
		t = (2000 - 1000) * 5 /100 +(3000 - 2000)*10 /100 +(4000 - 3000) * 15 /100 +(s - 4000) * 20 /100 ;
		break;
	case 5:
	t = (2000 - 1000) * 5 /100 +(3000 - 2000)*10 /100 +(4000 - 3000) * 15 /100 +(5000 - 4000) * 20 /100+(s-5000)*25/100 ;
	break;
	default:
		printf("enter data error!\n");
	}
		printf("税金为：%lf\n", t);
	return 0;
}