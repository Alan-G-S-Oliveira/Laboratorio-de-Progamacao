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

pontos = 1000
valor_secreto = random.randrange(1, 101)

while True:
    limpar_terminal()
    print('Qual o nível de dificuldade?')
    nivel = input('(1) Fácil, (2) Médio, (3) Difícil: ')
    if nivel.isnumeric():
        if 1 <= int(nivel) <= 3:
            break
nivel = int(nivel)
limpar_terminal()

if nivel == 1:
    tentativas = 20
elif nivel == 2:
    tentativas = 10
else:
    tentativas = 5

while tentativas > 0:
    print('Vidas restantes: {}'.format(tentativas))
    while True:
        numero = int(input('Digite um número entre 1 e 100: '))
        if 1 <= numero <= 100:
            break

    limpar_terminal()

    if numero == valor_secreto:
        print('Você acertou!!')
        print(f'Sua pontuação: {pontos}')
        break
    else:
        print('Você errou, tente novamente!')
        if numero > valor_secreto:
            print('O número {} é maior que o número secreto!\n'.format((numero)))
        else:
            print('O número {} é menor que o número secreto!\n'.format((numero)))
        tentativas -= 1

    pontos -= abs(numero - valor_secreto)

if tentativas == 0:
    print('Você perdeu!!, o número secreto era {}'.format(valor_secreto))
