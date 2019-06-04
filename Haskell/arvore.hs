data ArvBin = Nulo | Node Int ArvBin ArvBin --criação de uma árvore em haskell

arv :: ArvBin
arv = (Node 1  -- nó número 1 e tem sub árvore 2 e 3
            (Node 2 -- nó 2 sub árvore 4 e 5
                (Node 4 Nulo Nulo) (Node 5 Nulo Nulo))  --nó 4 e 5 não tem sub árvore então é nulo
            (Node 3  --nó 3 só tem sub árvore a esquerda a direita é nulo
                (Node 6 Nulo Nulo) Nulo)) -- nó 6 n tem sub árvore então é nulo

-- varredura em ordem na árvore            
em_ordem :: ArvBin -> [Int]
em_ordem Nulo = []
em_ordem (Node num esq dir) = (em_ordem esq) ++[num] ++ (em_ordem dir)