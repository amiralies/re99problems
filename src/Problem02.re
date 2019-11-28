let rec lastAndPenultimate =
  fun
  | []
  | [_] => None
  | [x, y] => Some((x, y))
  | [_, ...t] => lastAndPenultimate(t);
