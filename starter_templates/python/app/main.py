def handle(command):
    name = command[0].upper() if command else ""
    if name == "PING":
        return "+PONG\r\n"
    return "-ERR unknown command\r\n"


def main():
    print("+PONG\r\n", end="")


if __name__ == "__main__":
    main()
