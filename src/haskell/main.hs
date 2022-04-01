import Text.Printf (printf)
import Data.Char (toLower)
import Control.Monad (sequence)

main :: IO ()
main = do
  run
  consume "Haskell"
  sequence (for_each (lowercase_all ["ABC", "DEF"]) consume)
  print ()

run :: IO ()
run = printf "%s" "Hello World\n"

consume :: String -> IO ()
consume text = printf "%s %s%s" "Hello" text "!\n"

lowercase_all :: [String] -> [String]
lowercase_all strings = map lower strings
  where lower str = [ toLower lower | lower <- str]

for_each :: [t] -> (t -> a) -> [a]
for_each strings fun = map fun strings
