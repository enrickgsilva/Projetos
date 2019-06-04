-- concatenar 2 listas
concatenar :: [a] -> [a] -> [a] 
concatenar [] y= y
concatenar x [] = x
concatenar (x:xs) y = x : concatenar xs y

-- inverter uma lista
inv :: [a] -> [a]
inv [] = []
inv (x:xs) = inv(xs) ++[x]

-- gerar uma lista
gerar_lista :: Int -> [Int]
gerar_lista n = n : gerar_lista(n + 1) -- o elemento (:) é usado para construir listas

-- recebe uma lista de inteiros e retorna uma soma
soma :: [Int] -> Int
soma [] = 0
soma (x:xs) = x + soma xs

-- minha função tail
mt :: [a] -> [a]
mt [] = []
mt (_:xs) = xs --(_:xs) quer dizer que o elemento não importa

-- minha função head
hd :: [a] -> [a]
hd [] = []
hd (x:xs) = [x]

-- tipos em haskell
type Pessoa = String
type Carro = String
type Idade = Int
type Registro = (Pessoa, Carro, Idade) --tupla do tipo Regristro
type BD = [Registro] -- BD é uma lista de registros

-- f_bd tem uma lista do tipo Regristro
f_bd :: BD 
f_bd = [("Joao", "Camaro", 20), ("Maria", "Fusca", 30)]

-- retorna o nome de uma pessoa
get_nome :: Registro -> Pessoa
get_nome (n, _, _) = n

-- pega todos os carros do BD de f_bd
get_carros :: BD -> [String]
get_carros [] = []
get_carros ((_, carro, _):xs) = carro : get_carros xs

