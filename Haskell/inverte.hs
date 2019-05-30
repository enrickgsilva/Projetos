lista :: [Int]
lista = [5,4,3,2,1]
--criação da lista

inverte :: [a] -> [a] --rece uma lista qualquer e retorna uma lista qualquer
inverte [] = []
inverte (x:xs) = (inverte xs)++[x] --concatena o elemento da cabeça no final de uma nova lista