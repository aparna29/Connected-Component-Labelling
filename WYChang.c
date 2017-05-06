#include<stdio.h>
#include <time.h>
#define ll long long
ll a[1000][1000],pi,pj,qi,qj,ri,rj,si,sj,xi,xj;
ll provLabel=1,prevLabel=1;
ll max(ll a,ll b)
{
	return a>b?a:b;
}
ll min(ll a,ll b)
{
	return a>b?b:a;
}
void printMatrix(ll a[][1000],ll m,ll n)
{
	ll i,j;
	printf("\nMatrix : \n");
	for(i=2;i<m+2;i++)
	{
		for(j=2;j<n+2;j++)
			printf("%lld ",a[i][j]);
		printf("\n");
	}
}
void action11()
{
	if(a[xi][xj]!=0)
	{
		a[xi][xj]=provLabel;
	}
	if(a[xi+1][xj]!=0)
	{
		a[xi+1][xj]=provLabel;
	}
	if(a[xi][xj+1]!=0)
	{
		a[xi][xj+1]=provLabel;
	}
	if(a[xi+1][xj+1]!=0)
	{
		a[xi+1][xj+1]=provLabel;
	}
	provLabel++;
}
void action12()
{
	int pLabel = max(max(a[pi][pj],a[pi+1][pj]),max(a[pi][pj+1],a[pi+1][pj+1]));
	if(a[xi][xj]!=0)
	{
		a[xi][xj]=pLabel;
	}
	if(a[xi+1][xj]!=0)
	{
		a[xi+1][xj]=pLabel;
	}
	if(a[xi][xj+1]!=0)
	{
		a[xi][xj+1]=pLabel;
	}
	if(a[xi+1][xj+1]!=0)
	{
		a[xi+1][xj+1]=pLabel;
	}
}
void action13()
{
	int qLabel = max(max(a[qi][qj],a[qi+1][qj]),max(a[qi][qj+1],a[qi+1][qj+1]));
	if(a[xi][xj]!=0)
	{
		a[xi][xj]=qLabel;
	}
	if(a[xi+1][xj]!=0)
	{
		a[xi+1][xj]=qLabel;
	}
	if(a[xi][xj+1]!=0)
	{
		a[xi][xj+1]=qLabel;
	}
	if(a[xi+1][xj+1]!=0)
	{
		a[xi+1][xj+1]=qLabel;
	}
}
void action14()
{
	int rLabel = max(max(a[ri][rj],a[ri+1][rj]),max(a[ri][rj+1],a[ri+1][rj+1]));
	if(a[xi][xj]!=0)
	{
		a[xi][xj]=rLabel;
	}
	if(a[xi+1][xj]!=0)
	{
		a[xi+1][xj]=rLabel;
	}
	if(a[xi][xj+1]!=0)
	{
		a[xi][xj+1]=rLabel;
	}
	if(a[xi+1][xj+1]!=0)
	{
		a[xi+1][xj+1]=rLabel;
	}
}
void action15()
{
	int pLabel = max(max(a[pi][pj],a[pi+1][pj]),max(a[pi][pj+1],a[pi+1][pj+1]));
	if(a[xi][xj]!=0)
	{
		a[xi][xj]=pLabel;
	}
	if(a[xi+1][xj]!=0)
	{
		a[xi+1][xj]=pLabel;
	}
	if(a[xi][xj+1]!=0)
	{
		a[xi][xj+1]=pLabel;
	}
	if(a[xi+1][xj+1]!=0)
	{
		a[xi+1][xj+1]=pLabel;
	}
	// resolve the conflict
	if(a[qi][qj]!=0)
	{
		a[qi][qj]=pLabel;
	}
	if(a[qi+1][qj]!=0)
	{
		a[qi+1][qj]=pLabel;
	}
	if(a[qi][qj+1]!=0)
	{
		a[qi][qj+1]=pLabel;
	}
	if(a[qi+1][qj+1]!=0)
	{
		a[qi+1][qj+1]=pLabel;
	}
}
void action16()
{
	int pLabel = max(max(a[pi][pj],a[pi+1][pj]),max(a[pi][pj+1],a[pi+1][pj+1]));
	if(a[xi][xj]!=0)
	{
		a[xi][xj]=pLabel;
	}
	if(a[xi+1][xj]!=0)
	{
		a[xi+1][xj]=pLabel;
	}
	if(a[xi][xj+1]!=0)
	{
		a[xi][xj+1]=pLabel;
	}
	if(a[xi+1][xj+1]!=0)
	{
		a[xi+1][xj+1]=pLabel;
	}
	// resolve the conflict
	if(a[ri][rj]!=0)
	{
		a[ri][rj]=pLabel;
	}
	if(a[ri+1][rj]!=0)
	{
		a[ri+1][rj]=pLabel;
	}
	if(a[ri][rj+1]!=0)
	{
		a[ri][rj+1]=pLabel;
	}
	if(a[ri+1][rj+1]!=0)
	{
		a[ri+1][rj+1]=pLabel;
	}
}
void action17()
{
	int qLabel = max(max(a[qi][qj],a[qi+1][qj]),max(a[qi][qj+1],a[qi+1][qj+1]));
	if(a[xi][xj]!=0)
	{
		a[xi][xj]=qLabel;
	}
	if(a[xi+1][xj]!=0)
	{
		a[xi+1][xj]=qLabel;
	}
	if(a[xi][xj+1]!=0)
	{
		a[xi][xj+1]=qLabel;
	}
	if(a[xi+1][xj+1]!=0)
	{
		a[xi+1][xj+1]=qLabel;
	}
	// resolve the conflict
	if(a[ri][rj]!=0)
	{
		a[ri][rj]=qLabel;
	}
	if(a[ri+1][rj]!=0)
	{
		a[ri+1][rj]=qLabel;
	}
	if(a[ri][rj+1]!=0)
	{
		a[ri][rj+1]=qLabel;
	}
	if(a[ri+1][rj+1]!=0)
	{
		a[ri+1][rj+1]=qLabel;
	}
}
void action21()
{
	int sLabel = max(max(a[si][sj],a[si+1][sj]),max(a[si][sj+1],a[si+1][sj+1]));
	if(a[xi][xj]!=0)
	{
		a[xi][xj]=sLabel;
	}
	if(a[xi+1][xj]!=0)
	{
		a[xi+1][xj]=sLabel;
	}
	if(a[xi][xj+1]!=0)
	{
		a[xi][xj+1]=sLabel;
	}
	if(a[xi+1][xj+1]!=0)
	{
		a[xi+1][xj+1]=sLabel;
	}
}
void action22()
{
	int sLabel = max(max(a[si][sj],a[si+1][sj]),max(a[si][sj+1],a[si+1][sj+1]));
	if(a[xi][xj]!=0)
	{
		a[xi][xj]=sLabel;
	}
	if(a[xi+1][xj]!=0)
	{
		a[xi+1][xj]=sLabel;
	}
	if(a[xi][xj+1]!=0)
	{
		a[xi][xj+1]=sLabel;
	}
	if(a[xi+1][xj+1]!=0)
	{
		a[xi+1][xj+1]=sLabel;
	}
	// Resolve the confliction with block P by assigning the provisional label of block S
	 if(a[pi][pj]!=0)
	{
		a[pi][pj]=sLabel;
	}
	if(a[pi+1][pj]!=0)
	{
		a[pi+1][pj]=sLabel;
	}
	if(a[pi][pj+1]!=0)
	{
		a[pi][pj+1]=sLabel;
	}
	if(a[pi+1][pj+1]!=0)
	{
		a[pi+1][pj+1]=sLabel;
	}
}
void action23()
{
	//Assign the same provision label as block S for the current block X.
	int sLabel = max(max(a[si][sj],a[si+1][sj]),max(a[si][sj+1],a[si+1][sj+1]));
	if(a[xi][xj]!=0)
	{
		a[xi][xj]=sLabel;
	}
	if(a[xi+1][xj]!=0)
	{
		a[xi+1][xj]=sLabel;
	}
	if(a[xi][xj+1]!=0)
	{
		a[xi][xj+1]=sLabel;
	}
	if(a[xi+1][xj+1]!=0)
	{
		a[xi+1][xj+1]=sLabel;
	}
	//Resolve the confliction with block Q by assigning the provisional label of block S.
	if(a[qi][qj]!=0)
	{
		a[qi][qj]=sLabel;
	}
	if(a[qi+1][qj]!=0)
	{
		a[qi+1][qj]=sLabel;
	}
	if(a[qi][qj+1]!=0)
	{
		a[qi][qj+1]=sLabel;
	}
	if(a[qi+1][qj+1]!=0)
	{
		a[qi+1][qj+1]=sLabel;
	}
}
void action24()
{
	//Assign the same provision label as block S for the current block X.
	int sLabel = max(max(a[si][sj],a[si+1][sj]),max(a[si][sj+1],a[si+1][sj+1]));
	if(a[xi][xj]!=0)
	{
		a[xi][xj]=sLabel;
	}
	if(a[xi+1][xj]!=0)
	{
		a[xi+1][xj]=sLabel;
	}
	if(a[xi][xj+1]!=0)
	{
		a[xi][xj+1]=sLabel;
	}
	if(a[xi+1][xj+1]!=0)
	{
		a[xi+1][xj+1]=sLabel;
	}
	//Resolve the confliction with block R by assigning the provisional label of block S
	if(a[ri][rj]!=0)
	{
		a[ri][rj]=sLabel;
	}
	if(a[ri+1][rj]!=0)
	{
		a[ri+1][rj]=sLabel;
	}
	if(a[ri][rj+1]!=0)
	{
		a[ri][rj+1]=sLabel;
	}
	if(a[ri+1][rj+1]!=0)
	{
		a[ri+1][rj+1]=sLabel;
	}
}
void action25()
{
	//Assign the same provision label as block S for the current block X.
	int sLabel = max(max(a[si][sj],a[si+1][sj]),max(a[si][sj+1],a[si+1][sj+1]));
	if(a[xi][xj]!=0)
	{
		a[xi][xj]=sLabel;
	}
	if(a[xi+1][xj]!=0)
	{
		a[xi+1][xj]=sLabel;
	}
	if(a[xi][xj+1]!=0)
	{
		a[xi][xj+1]=sLabel;
	}
	if(a[xi+1][xj+1]!=0)
	{
		a[xi+1][xj+1]=sLabel;
	}
	//Resolve the confliction with blocks P and Q by assigning the provisional label of block S
	if(a[qi][qj]!=0)
	{
		a[qi][qj]=sLabel;
	}
	if(a[qi+1][qj]!=0)
	{
		a[qi+1][qj]=sLabel;
	}
	if(a[qi][qj+1]!=0)
	{
		a[qi][qj+1]=sLabel;
	}
	if(a[qi+1][qj+1]!=0)
	{
		a[qi+1][qj+1]=sLabel;
	}
	if(a[pi][pj]!=0)
	{
		a[pi][pj]=sLabel;
	}
	if(a[pi+1][pj]!=0)
	{
		a[pi+1][pj]=sLabel;
	}
	if(a[pi][pj+1]!=0)
	{
		a[pi][pj+1]=sLabel;
	}
	if(a[pi+1][pj+1]!=0)
	{
		a[pi+1][pj+1]=sLabel;
	}
}
void action26()
{
	//Assign the same provision label as block S for the current block X.
	int sLabel = max(max(a[si][sj],a[si+1][sj]),max(a[si][sj+1],a[si+1][sj+1]));
	if(a[xi][xj]!=0)
	{
		a[xi][xj]=sLabel;
	}
	if(a[xi+1][xj]!=0)
	{
		a[xi+1][xj]=sLabel;
	}
	if(a[xi][xj+1]!=0)
	{
		a[xi][xj+1]=sLabel;
	}
	if(a[xi+1][xj+1]!=0)
	{
		a[xi+1][xj+1]=sLabel;
	}
	//Resolve the confliction with blocks P and R by assigning the provisional label of block S
	if(a[pi][pj]!=0)
	{
		a[pi][pj]=sLabel;
	}
	if(a[pi+1][pj]!=0)
	{
		a[pi+1][pj]=sLabel;
	}
	if(a[pi][pj+1]!=0)
	{
		a[pi][pj+1]=sLabel;
	}
	if(a[pi+1][pj+1]!=0)
	{
		a[pi+1][pj+1]=sLabel;
	}
	if(a[ri][rj]!=0)
	{
		a[ri][rj]=sLabel;
	}
	if(a[ri+1][rj]!=0)
	{
		a[ri+1][rj]=sLabel;
	}
	if(a[ri][rj+1]!=0)
	{
		a[ri][rj+1]=sLabel;
	}
	if(a[ri+1][rj+1]!=0)
	{
		a[ri+1][rj+1]=sLabel;
	}
}
void action27()
{
	//Assign the same provision label as block S for the current block X.
	int sLabel = max(max(a[si][sj],a[si+1][sj]),max(a[si][sj+1],a[si+1][sj+1]));
	if(a[xi][xj]!=0)
	{
		a[xi][xj]=sLabel;
	}
	if(a[xi+1][xj]!=0)
	{
		a[xi+1][xj]=sLabel;
	}
	if(a[xi][xj+1]!=0)
	{
		a[xi][xj+1]=sLabel;
	}
	if(a[xi+1][xj+1]!=0)
	{
		a[xi+1][xj+1]=sLabel;
	}
	//Resolve the confliction with blocks Q and R by assigning the provisional label of block S
	if(a[ri][rj]!=0)
	{
		a[ri][rj]=sLabel;
	}
	if(a[ri+1][rj]!=0)
	{
		a[ri+1][rj]=sLabel;
	}
	if(a[ri][rj+1]!=0)
	{
		a[ri][rj+1]=sLabel;
	}
	if(a[ri+1][rj+1]!=0)
	{
		a[ri+1][rj+1]=sLabel;
	}
	if(a[qi][qj]!=0)
	{
		a[qi][qj]=sLabel;
	}
	if(a[qi+1][qj]!=0)
	{
		a[qi+1][qj]=sLabel;
	}
	if(a[qi][qj+1]!=0)
	{
		a[qi][qj+1]=sLabel;
	}
	if(a[qi+1][qj+1]!=0)
	{
		a[qi+1][qj+1]=sLabel;
	}
}
void action28()
{
	//Plus serial number and New a provisional label for block X as temporary label
	if(a[xi][xj]!=0)
	{
		a[xi][xj]=provLabel;
	}
	if(a[xi+1][xj]!=0)
	{
		a[xi+1][xj]=provLabel;
	}
	if(a[xi][xj+1]!=0)
	{
		a[xi][xj+1]=provLabel;
	}
	if(a[xi+1][xj+1]!=0)
	{
		a[xi+1][xj+1]=provLabel;
	}
	provLabel++;
}
void action29()
{
	//Assign the same provision label as block Q for the current block X
	int qLabel = max(max(a[qi][qj],a[qi+1][qj]),max(a[qi][qj+1],a[qi+1][qj+1]));
	if(a[xi][xj]!=0)
	{
		a[xi][xj]=qLabel;
	}
	if(a[xi+1][xj]!=0)
	{
		a[xi+1][xj]=qLabel;
	}
	if(a[xi][xj+1]!=0)
	{
		a[xi][xj+1]=qLabel;
	}
	if(a[xi+1][xj+1]!=0)
	{
		a[xi+1][xj+1]=qLabel;
	}
}
void action210()
{
	//Assign the same provision label as block R for the current block X
	int rLabel = max(max(a[ri][rj],a[ri+1][rj]),max(a[ri][rj+1],a[ri+1][rj+1]));
	if(a[xi][xj]!=0)
	{
		a[xi][xj]=rLabel;
	}
	if(a[xi+1][xj]!=0)
	{
		a[xi+1][xj]=rLabel;
	}
	if(a[xi][xj+1]!=0)
	{
		a[xi][xj+1]=rLabel;
	}
	if(a[xi+1][xj+1]!=0)
	{
		a[xi+1][xj+1]=rLabel;
	}
}
void action211()
{
	//Assign the provisional label by block Q then merge blocks Q and R
	int qLabel = max(max(a[qi][qj],a[qi+1][qj]),max(a[qi][qj+1],a[qi+1][qj+1]));
	if(a[xi][xj]!=0)
	{
		a[xi][xj]=qLabel;
	}
	if(a[xi+1][xj]!=0)
	{
		a[xi+1][xj]=qLabel;
	}
	if(a[xi][xj+1]!=0)
	{
		a[xi][xj+1]=qLabel;
	}
	if(a[xi+1][xj+1]!=0)
	{
		a[xi+1][xj+1]=qLabel;
	}
	
	if(a[ri][rj]!=0)
	{
		a[ri][rj]=qLabel;
	}
	if(a[ri+1][rj]!=0)
	{
		a[ri+1][rj]=qLabel;
	}
	if(a[ri][rj+1]!=0)
	{
		a[ri][rj+1]=qLabel;
	}
	if(a[ri+1][rj+1]!=0)
	{
		a[ri+1][rj+1]=qLabel;
	}
}
void p1c1()
{
	if(a[qi+1][qj]!=0)
	{
		if(a[qi+1][qj+1]!=0)
			action13();
		else 
		{
			if(a[ri+1][rj]!=0)
				action17();
			else
				action13();
		}
	}
	else
	{
		if(a[qi+1][qj+1]!=0)
		{
			if(a[pi+1][pj+1]!=0)
				action15();
			else
				action13();
		}
		else
		{
			if(a[pi+1][pj+1]!=0)
			{
				if(a[ri+1][rj]!=0)
					action16();
				else
					action12();
			}
			else
			{
				if(a[ri+1][rj]!=0)
					action14();
				else
					action11();
			}
		}
	}
	return;
}
void p1c2()
{
	if(a[qi+1][qj]!=0)
		action13();
	else
	{
		if(a[pi+1][pj+1]!=0)
		{
			if(a[qi+1][qj+1]!=0)
				action15();
			else
				action12();
		}
		else
		{
			if(a[qi+1][qj+1]!=0)
				action13();
			else
				action11();
		}
	}
	return;
}
void p1c3()
{
	if(a[qi+1][qj+1]!=0)
		action13();
	else
	{
		if(a[qi+1][qj]!=0)
		{
			if(a[ri+1][rj]!=0)
				action17();
			else
				action13();
		}
		else
		{
			if(a[ri+1][rj]!=0)
				action14();
			else
				action11();
		}
	}
	return;
}
void p1c4()
{
	action11();
	return;
}
void p1c5()
{
	action11();
	return;
}
void p1c6()
{
	// do nothing
	return;
}
void procedure1()
{
	if(a[xi][xj]!=0)
	{
		if(a[xi][xj+1]!=0)
			p1c1();
		else
			p1c2();
	}
	else if(a[xi][xj+1]!=0)
		p1c3();
	else if(a[xi+1][xj]!=0)
		p1c4();
	else if(a[xi+1][xj+1]!=0)
		p1c5();
	else
		p1c6();
}
void p2c1()
{
	if(a[qi+1][qj]!=0)
	{
		if(a[qi+1][qj+1]!=0)
			action23();
		else 
		{
			if(a[ri+1][rj]!=0)
				action27();
			else
				action23();
		}
	}
	else
	{
		if(a[qi+1][qj+1]!=0)
		{
			if(a[pi+1][pj+1]!=0)
				action25();
			else
				action23();
		}
		else
		{
			if(a[pi+1][pj+1]!=0)
			{
				if(a[ri+1][rj]!=0)
					action26();
				else
					action22();
			}
			else
			{
				if(a[ri+1][rj]!=0)
					action24();
				else
					action21();
			}
		}
	}
	return;
}
void p2c2()
{
	if(a[qi+1][qj]!=0)
		action23();
	else
	{
		if(a[pi+1][pj+1]!=0)
		{
			if(a[qi+1][qj+1]!=0)
				action25();
			else
				action22();
		}
		else
		{
			if(a[qi+1][qj+1]!=0)
				action23();
			else
				action21();
		}
	}
	return;
}
void p2c3()
{
	if(a[qi+1][qj+1]!=0)
		action23();
	else
	{
		if(a[qi+1][qj]!=0)
		{
			if(a[ri+1][rj]!=0)
				action27();
			else
				action23();
		}
		else
		{
			if(a[ri+1][rj]!=0)
				action24();
			else
				action21();
		}
	}
	return;
}
void p2c4()
{
	if(a[qi+1][qj+1]!=0)
		action29();
	else
	{
		if(a[qi+1][qj]!=0)
		{
			if(a[ri+1][rj]!=0)
				action211();
			else
				action29();
		}
		else
		{
			if(a[ri+1][rj]!=0)
				action210();
			else
				action28();
		}
	}
	return;
}
void p2c5()
{
	action21();
	return;
}
void p2c6()
{
	action28();
	return;
}
void p2c7()
{
	// do nothing
	return;
}
void procedure2()
{
	if(a[xi][xj]!=0)
	{
		if(a[xi][xj+1]!=0)
			p2c1();
		else
			p2c2();
	}
	else if(a[xi][xj+1]!=0)
	{
		if(a[xi+1][xj]!=0)
			p2c3();
		else
			p2c4();
	}
	else if(a[xi+1][xj]!=0)
		p2c5();
	else if(a[xi+1][xj+1]!=0)
		p2c6();
	else
		p2c7();
}
main()
{
	ll n,m,i,j,oddrow=0,oddcolumn=0;
	double time_spent,t1,t2;
	struct timespec tp,tp1;
	printf("\nEnter m and n : \n");
	scanf("%lld%lld",&m,&n);
	printf("\nEnter the matrix : \n");
	for(i=2;i<m+2;i++)
	{
		for(j=2;j<n+2;j++)
			scanf("%lld",&a[i][j]);
	}
	for(i=0;i<2;i++)
		for(j=0;j<n;j++)
			a[i][j]=0;
	for(j=0;j<2;j++)
		for(i=0;i<m;i++)
			a[i][j]=0;
	for(i=m+2;i<m+4;i++)
		for(j=0;j<n;j++)
			a[i][j]=0;
	for(j=n+2;j<n+4;j++)
		for(i=0;i<m;i++)
			a[i][j]=0;
	if(m%2!=0)
	{
		for(j=0;j<n+4;j++)
			a[m+4][j]=0;
		oddrow=1;
		m++;
	}
	if(n%2!=0)
	{
		for(i=0;i<m+4;i++)
			a[i][n+4]=0;
		oddcolumn=1;
		n++;
	}
	//printf("\nThe matrix entered : \n");
//	printMatrix(a,m,n);
	pi=0,pj=0,qi=0,qj=2,ri=0,rj=4,si=2,sj=0,xi=2,xj=2;
	ll cnti=0,cntj=0;
	clock_gettime(CLOCK_REALTIME,&tp);
	t1 = (((double)tp.tv_sec) * 1000000) + (((double)tp.tv_nsec) / 1000) ;
	while(cnti<m-1)
	{
			pj=0;
			qj=2;
			rj=4;
			sj=0;
			xj=2;
			cntj=0;
		while(cntj<n-1)
		{
			if(a[si][sj+1]==0 && a[si+1][sj+1]==0)	// When n and r are both background pixels
			{
				procedure1();
			}
			else 
			{
				procedure2();
			}
			pj+=2;
			qj+=2;
			rj+=2;
			sj+=2;
			xj+=2;
			cntj+=2;
		}
		pi+=2;
		qi+=2;
		ri+=2;
		si+=2;
		xi+=2;
		cnti+=2;
	}
	clock_gettime(CLOCK_REALTIME,&tp1);
	t2 = (((double)tp1.tv_sec) * 1000000) + (((double)tp1.tv_nsec) / 1000) ;
	time_spent = t2 -t1;
	if(oddrow)
		m--;
	if(oddcolumn)
		n--;
	printf("\nMatrix after labeling : \n");
	//printMatrix(a,m,n);
	//Second scan for relabelling the required provisional labels
	ll arr[100]={0};
	for(i=2;i<m+2;i++)
	{
		for(j=2;j<n+2;j++)
		{
			arr[a[i][j]]++;
		}
	}
	ll val=0,k=2;
	for(i=2;i<m+2;i++)
	{
		for(j=2;j<n+2;j++)
		{
			if(a[i][j]!=1 && a[i][j]!=0)
			{
				if(a[i][j]!=val)
				{
					while(arr[k]!=0)
						k++;
				}
				val=a[i][j];
				if(k<a[i][j])
				{
					a[i][j]=k;
					arr[a[i][j]]++;
				}
			}
		}
	}
	printMatrix(a,m,n);
	printf("Time Spent : %f\n",time_spent);	
	printf("Number of pixels = %lld\n",m*n);
}
