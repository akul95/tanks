#ifndef GAME_NETWORK_H
#define GAME_NETWORK_H

int setup_listen_socket();

int setup_client_socket(char[], char[]);

int listen_on_socket(int, clientData[], int*);

int listen_on_fdset(fd_set, int, char []);

void send_to_fdset(fd_set, int, char []);

#endif