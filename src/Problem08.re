let rec compress =
  fun
  | [] => []
  | [x] => [x]
  | [x, y, ...t] =>
    x == y ? compress([y, ...t]) : [x, ...compress([y, ...t])];
