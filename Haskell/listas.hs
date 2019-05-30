-- compreensão de listas
par :: Int -> Bool
par x = mod x 2 == 0

lista = [x*x | x <- [1 .. 10]]

-- as listas funcionam parecidas com a teoria dos conjuntos
-- usando condições