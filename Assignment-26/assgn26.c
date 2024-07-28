#include <stdio.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>

void error(char *msg)
{
    perror(msg);
    exit(1);
}

int main(void)
{

    // server
    int server_sockfd;
    server_sockfd = socket(AF_INET, SOCK_STREAM, 0);

    if (server_sockfd < 0)
    {
        error("ERROR opening socket");
    }

    // bind
    struct sockaddr_in server_addr, client_addr;

    server_addr.sin_family = AF_INET;
    server_addr.sin_addr.s_addr = INADDR_ANY;
    server_addr.sin_port = htons(5555);

    if (bind(server_sockfd, (struct sockaddr *)&server_addr, sizeof(server_addr)) < 0)
    {

        error("ERROR on binding");
    }

    // listen
    if (listen(server_sockfd, 5) < 0)
    {
        error("ERROR listening");
    }
    puts("Listening...");

    // Accept
    int client_addr_size = sizeof(struct sockaddr_in);

    // Accept system call

    int acceptfd = accept(server_sockfd, (struct sockaddr *)&client_addr, &client_addr_size);
    if (acceptfd < 0)
    {

        error("ERROR accepting connection");
    }

    printf("Connection accepted from: %d", (int)inet_ntoa(client_addr.sin_addr));
}
