#ifndef LISTS_H
#define LISTS_H

struct listint_s {
	    int n;
	        struct listint_s *next;
};

int check_cycle(struct listint_s *list);

#endif
