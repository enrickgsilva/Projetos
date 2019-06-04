import Data.List -- para usar a função Sort tem que usar isso

type Nome = String
type Linguagem = String
data Pessoa = Programador Nome Linguagem
        deriving(Show, Eq, Ord) --Show para mostrar o  tipo Pessoa, Eq e Ord da sort

programador1 = Programador "Rafael" "lisp"
programador2 = Programador "Enrick" "Haskell"
programador3 = Programador "Joao" "Python"

lista = [programador1, programador2, programador3]

-- inicio ordena a lista com os programadores
inicio = sort lista