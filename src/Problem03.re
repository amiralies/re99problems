let rec at = k =>
  fun
  | [] => None
  | [h, ...t] => k == 1 ? Some(h) : at(k - 1, t);
