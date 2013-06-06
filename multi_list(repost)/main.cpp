/**@mainpage
*   Titov Roman Group IU 8 -21
*   Laboratory  "C++ realisation multi - list"
*/
/************************************************************************/
/// @brief                       HEADERS                               ///
#include <conio.h>
#include <random>
#include <stdlib.h>
#include <time.h>
/************************************************************************/
#define num_students 34
#define amount_courses 6
/************************************************************************/
struct course
{
	int num_course;
	course *next;
};
/************************************************************************/
struct listt
{
	course* next;
	listt* tnext;
};
/************************************************************************/
struct list
{
	int x;
	listt *cnext;
	list *next;
};
/************************************************************************/
void create( list *cur, int i )
{
	cur -> x = i;
	cur -> next = NULL;
}	
/************************************************************************/
void create( course *cur, int i )
{
	cur -> num_course = i;
	cur -> next = NULL;
}
/************************************************************************/

course* count(course *cur,int n)
{
	for( int i = 0 ; i < n; ++i)
	{
		cur = cur -> next;
		if( !cur )
		{
			printf("!!!ERROR!!!\n\n\n");
			return 0;
		}
	}
	return cur;
}
/************************************************************************/
void write(list *cur)
{
	cur = cur -> next;
	listt* list0;

	while( cur )
	{
		list0 = cur -> cnext;
		printf("-----Student %d ", cur -> x);

		cur = cur -> next;
		printf("-----Courses------ ");

		while( list0 -> next)
		{
			printf("%d ", list0 -> next -> num_course);
			list0 = list0 -> next;
		}

		printf("\n");
	}

	printf("\n");
}
/************************************************************************/
void write(course *cur)
{
	cur = cur -> next;
	while( cur )
	{
		printf("%d ", cur -> num_course );
		cur = cur -> next;
	}
	printf("\n");
}
/************************************************************************/
void writet(list *cur, course *cur0, list *begin )
{
	cur0 = cur0 -> next;

	while( cur0 )
	{
		cur = begin;
		cur = cur->next;
		printf("-----Courses------- %d ",cur0 -> num_course );
		printf("-----Students--------- ");
		
		while(cur)
		{
			listt *list0;
			list0 = cur -> cnext;
			while( list0 -> lnext)
			{
				if( list0 -> next -> num_course == cur0 -> num_course )
				{
					printf("%d ",cur -> a);
					break;
				}
				list0 = list0 -> lnext;
			}
			cur = cur -> next;
		}

		cur0 = cur0 -> next;
		printf("\n");
	}
}
/************************************************************************/
void main()
{
	*cur,*begin = new list;
	course *ccur,*cfirstv=new course;
	begin -> next = NULL;
	first_way -> cnext = NULL;
	cbegint -> next = NULL;

	srand(time(NULL));

	for( int i = 0; i < num + 1
	{
		if( !first_way -> next )
		{
			cur = new list;
		    first -> next=Cur;
		}
		else
		{
			cur-> next= ne w LIST;
			cuc = Cur -> next;
		}
		create ( cur, i );
		cur -> cnext = new listt;
	}


	cur = first 


	for( int i = 0; i<AmountOfCourses;++i)
	{
		if( !cvfirst -> next)
		{
			ccur = new COURSE;
			ccirst->next=cCur;
		}
		else
		{
			cCr->next=new COURSE;
			cCur=cCur->next;
		}
		CreateList(cCur,i);
	}
	ccur = cfirst;


	listt* cur0;
	cur = cur -> next;

	while(cur)
	{
		cur0 = cur -> cnext;
		int k1  = rand()%4;
		int k = k1 +rand ()%(AmountOfCourses-k1)+1;
		for( int i = k1; i < k; ++i)
		{
			ñur0 -> next = count(cCur, i + 1);
			ñur0 -> lnext = new listt;
			ñur0 = cur0 -> next;
			cur0 -> lnext = NULL;
		}


		ñr0-> lnext = NULL;
		ñur = cur -> next;
	}

	ccur = cbegin;
	cur = begin;
	write( cur );
	printf("\n");
	ccur = cbegin;
	cur = cbegin
	PrintList0( cur, ccur, begin );

	getch();
};
/************************************************************************/