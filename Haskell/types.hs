type Nome = String
type Idade = Int
type Linguagem = String
type Pessoa = (Nome, Idade, Linguagem)

pessoa :: Pessoa
pessoa = ("Enrick", 22, "C")

my_first :: Pessoa -> Nome
my_first (n, i, l) = n 

my_second :: Pessoa -> Idade
my_second (n, i, l) = i

my_third :: Pessoa -> Linguagem
my_third (n, i, l) = l