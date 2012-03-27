import scala.io.Source
import scala.math.min

val tableLines = for (line <- Source.fromFile("../weather.dat").getLines() if line.matches("""^\s*\d+.*"""))
  yield line

//I need bloody list here
val data =  for (line <- List() ++ tableLines; words = line.split("""(\s|\*)+"""))
   yield (words(1),words(2).toInt-words(3).toInt)
  
def mind(a:Tuple2[String,Int], b:Tuple2[String,Int]):Tuple2[String,Int]  = 
  if (a._2 < b._2){
    a
  } else {
    b
  }

def mini(xs: List[Tuple2[String,Int]]):Tuple2[String,Int] = (("Fake", Int.MaxValue) /: xs) (mind)

val result = mini(data)

println(result._1)
