import pygame

pygame.init()
tela = pygame.display.set_mode((800, 600), 0)

class Packman:
    def __init__(self):
        self.centro_x = 400
        self.centro_y = 300
        self.tamanho = 100
        self.raio = self.tamanho // 2

    def desenhar_tela(self, tela):
        pygame.draw.circle(tela, 'yellow', (self.centro_x, self.centro_y), self.raio)

        olho_x = int(self.centro_x + self.raio / 4)
        olho_y = int(self.centro_y - self.raio / 2)
        olho_raio = int(self.raio / 10)
        pygame.draw.circle(tela, 'red', (olho_x, olho_y), olho_raio)

        canto_boca = (self.centro_x, self.centro_y)
        labio_inferior = (self.centro_x + self.raio, self.centro_y)
        labio_superior = (self.centro_x + self.raio, self.centro_y - self.raio)
        pontos = [canto_boca, labio_inferior, labio_superior]
        pygame.draw.polygon(tela, 'black', pontos)

if __name__ == '__main__':

    packman = Packman()

    while True:

        packman.desenhar_tela(tela)
        pygame.display.update()

        for eventos in pygame.event.get():
            if eventos.type == pygame.QUIT:
                pygame.quit()
