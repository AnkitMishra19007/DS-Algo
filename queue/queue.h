/*
 *	linked list implementation of queue;
 *
 *	(q->first)-> |_|->|_|->|_|->|_|->|_|->|_| <-(q->last)
 *
 *	intiailze a queue: 	init_queue(queue * q);			return: void
 *	enqueue:			enqueue(queue *q, int val);		return: void
 *	dequeue:			dequeue(queue *q);				return: int
 *	print_queue:		print_queue(queue * q);			return: void
 *	empty_queue:		empty_queue(queue * q);			return: bool
 */

typedef struct queue queue;
typedef struct element element;

struct element {
	int x;
	element * next;
};

struct queue {
	element * first;
	element * last;

	int size;
};

void init_queue(queue * q) {
	q->first = q->last = NULL;
	q->size = 0;
}

void enqueue(queue *q, int x) {
	element * p;
	p = malloc(sizeof(element));
	p->x = x;
	p->next = NULL;

	if(q->size == 0) {
		q->first = p;
		q->last = p;
		q->size++;
	} else {
		q->last->next = p;
		q->last = p;
		q->size++;
	}
}

int dequeue(queue * q) {
	int frontval = -1;
	if(q->size > 0) {
		element * p;
		p = q->first;
		
		frontval = p->x;

		if(q->size == 1)
			q->last = NULL;
		q->first = p->next;
		q->size = q->size-1;
		free(p);
	}

	return frontval;
}

void print_queue(queue *q) {
	element *p;
	p = q->first;
	printf("(size: %d) ", q->size);
	while(p) {
		printf("%d ", p->x);
		p = p->next;
	}
	printf("\n");
}

bool empty_queue(queue * q) {
	if(q->size == 0)
		return true;
	return false;
}
