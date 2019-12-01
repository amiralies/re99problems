let encode = xs =>
  Problem09.pack(xs) |> List.map(x => (List.length(x), List.hd(x)));
