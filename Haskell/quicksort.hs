quicksort :: (Ord a) => [a] -> [a]
quicksort [] = []
quicksort (x:xs) = quicksort [s | s <- xs, s < x] ++ [x] ++ quicksort [s | s <- xs, s >= x]