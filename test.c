#include "client.c"

/*
Testing 1 2 3
*/

int main(int argc, char* argv){
	//Testing send_tls_message
	FILE *fd = fopen("fd", "w");

	//static int testfd = 1;
	int *msg = 'h';
	int msg_len;
	msg_len= 1;
	send_tls_message(testfd, msg, msg_len);

	fclose(fd);

}