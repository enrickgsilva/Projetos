lista :: [Int]
lista = [5,2,10,1,9]

get_menor :: [Int] -> Int
get_menor [x] = x
get_menor (x:xs) | (x < get_menor xs) = x
                 | otherwise = get_menor xs
-- get_menor retorna o menor elemento de uma lista                 

remove_menor :: [Int] -> [Int]                 
remove_menor [] = []
remove_menor (x:xs) | (x == (get_menor (x:xs))) = xs
                    | otherwise = x:remove_menor xs
-- remove_menor remove o menor elemento de lista que é o retorno de get_menor                    

aux_ordena :: [Int] -> [Int] -> [Int]
aux_ordena lista_ordenada [] = lista_ordenada
aux_ordena lista_ordenada (x:xs) = aux_ordena (lista_ordenada++[get_menor (x:xs)]) (remove_menor (x:xs))
-- função que ordena a lista
                    
ordena :: [Int] -> [Int]        
ordena [] = []
ordena lista = aux_ordena [] lista
--função inicial para retornar a lista ordenada





{-
Função de ordenação
Essa função ordena uma lista de inteiros crescentemente

exemplo de entrada: [5,8,1,10]
exemplo de saida: [1,5,8,10]

[5,8,1,10] []
[5,8,10] [1]
[8,10] [1,5]
[10] [1,5,8]
[] [1,5,8,10]
-}