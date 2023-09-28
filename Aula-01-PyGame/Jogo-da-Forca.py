import random
import platform
import os

def limpar_terminal():
    sistema = platform.system()
    if sistema == "Linux" or sistema == "Darwin":
        os.system('clear')
    elif sistema == "Windows":
        os.system('cls')
    else:
        print("Sistema operacional não suportado. Não é possível limpar o terminal.")

def troca_letra(string1: str, string2: str, letra: str) -> str:
    palavra = ''

    for i in range(len(string1)):
        if string1[i] == letra:
            palavra += (letra)
        elif string2[i] == '_':
            palavra += ('_')
        else:
            palavra += string2[i]

    return palavra

palavras = [
    'Monitor',
    'teclado',
    'Mouse',
    'Impressora',
    'Scanner',
    'Notebook'
]

palavraSecreta = palavras[random.randrange(0, len(palavras))].lower()
palavraAtual = '_' * len(palavraSecreta)
acertou = False
vidas = 6

while not(acertou):
    print(f'Vidas restantes: {vidas}')
    print(f'Seu progresso: {palavraAtual}\n')
    letra = input('Digite uma letra: ')
    letra = letra.lower()

    if letra in palavraSecreta:
        print('Letra correta!')
        palavraAtual = troca_letra(palavraSecreta, palavraAtual, letra)
    else:
        print('Letra errada!')
        vidas -= 1
    
    limpar_terminal()

    if vidas == 0:
        break
    if palavraAtual == palavraSecreta:
        acertou = True

if acertou:
    print('Você ganhou!')
else:
    print('Você perdeu!')
    print(f'A palavra correta era {palavraSecreta}.')
