import pygame

pygame.init()

tela = pygame.display.set_mode((800, 600), 0)

while True:
    pygame.draw.rect(tela, (255, 0, 0), (100, 212, 212, 212), 5)
    pygame.draw.polygon(tela, (0, 255, 0), [(100, 100), (200, 200), (200,100)], 5)
    pygame.draw.line(tela, (0, 0, 255), (400, 400), (600, 600), 5)
    pygame.display.update()

    for eventos in pygame.event.get():
        if eventos.type == pygame.QUIT:
            pygame.quit()