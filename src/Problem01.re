let rec last =
  fun
  | [] => None
  | [x] => Some(x)
  | [_, ...t] => last(t);
