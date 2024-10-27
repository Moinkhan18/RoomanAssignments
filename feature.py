from termcolor import colored

text = "Hello World"

colors = ['red', 'yellow', 'green', 'cyan', 'blue', 'magenta']

for i in range(len(text)):
    print(colored(text[i], colors[i % len(colors)]), end="")
print()