open Jest;

describe("Problem01", () => {
  test("Empty list returns none", () =>
    Expect.(expect(Problem01.last([])) |> toBe(None))
  );

  test("Length-one list returns it's head", () =>
    Expect.(expect(Problem01.last(["a"])) |> toBe(Some("a")))
  );

  test("Length-four list returns last item", () =>
    Expect.(
      expect(Problem01.last(["a", "b", "c", "d"])) |> toBe(Some("d"))
    )
  );
});

describe("Problem02", () => {
  test("Empty list returns none", () =>
    Expect.(expect(Problem02.lastAndPenultimate([])) |> toBe(None))
  );

  test("Length-one returns none", () =>
    Expect.(expect(Problem02.lastAndPenultimate(["a"])) |> toBe(None))
  );

  test("Length-four list returns last and penultimate", () =>
    Expect.(
      expect(Problem02.lastAndPenultimate(["a", "b", "c", "d"]))
      |> toEqual(Some(("c", "d")))
    )
  );
});

describe("Problem03", () => {
  test("Get 3th of Length-one list ", () =>
    Expect.(expect(Problem03.at(3, ["a"])) |> toBe(None))
  );

  test("Get 3th of Length-four list ", () =>
    Expect.(
      expect(Problem03.at(3, ["a", "b", "c", "d"])) |> toBe(Some("c"))
    )
  );
});

describe("Problem04", () => {
  test("Empty list", () =>
    Expect.(expect(Problem04.length([])) |> toBe(0))
  );

  test("Length-one list", () =>
    Expect.(expect(Problem04.length(["a"])) |> toBe(1))
  );

  test("Length-three list", () =>
    Expect.(expect(Problem04.length(["a", "b", "c"])) |> toBe(3))
  );
});

describe("Problem05", () => {
  test("Reverse empty list", () =>
    Expect.(expect(Problem05.rev([])) |> toEqual([]))
  );

  test("Reverse non empty list", () =>
    Expect.(
      expect(Problem05.rev(["a", "b", "c"])) |> toEqual(["c", "b", "a"])
    )
  );
});

describe("Problem06", () => {
  test("False casae", () =>
    Expect.(expect(Problem06.isPalindrome(["a", "b"])) |> toBe(false))
  );

  test("True case", () =>
    Expect.(
      expect(Problem06.isPalindrome(["x", "a", "m", "a", "x"]))
      |> toBe(true)
    )
  );
});

describe("Problem07", () =>
  test("Flattens nested structure", () =>
    Expect.(
      expect(
        Problem07.flatten([
          One("a"),
          Many([One("b"), Many([One("c"), One("d")]), One("e")]),
        ]),
      )
      |> toEqual(["a", "b", "c", "d", "e"])
    )
  )
);

describe("Problem08", () =>
  test("Eliminates consecutive duplicates of list elements", () =>
    Expect.(
      expect(
        Problem08.compress([
          "a",
          "a",
          "a",
          "a",
          "b",
          "c",
          "c",
          "a",
          "a",
          "d",
          "e",
          "e",
          "e",
          "e",
        ]),
      )
      |> toEqual(["a", "b", "c", "a", "d", "e"])
    )
  )
);

describe("Problem09", () =>
  test("Packs consecutive list items", () =>
    Expect.(
      expect(
        Problem09.pack(["a", "a", "a", "b", "b", "c", "a", "a", "d", "d"]),
      )
      |> toEqual([
           ["a", "a", "a"],
           ["b", "b"],
           ["c"],
           ["a", "a"],
           ["d", "d"],
         ])
    )
  )
);

describe("Problem10", () =>
  test("Length encodes a list", () =>
    Expect.(
      expect(
        Problem10.encode(["a", "a", "a", "b", "b", "c", "a", "a", "d", "d"]),
      )
      |> toEqual([(3, "a"), (2, "b"), (1, "c"), (2, "a"), (2, "d")])
    )
  )
);

describe("Problem11", () =>
  test("Length encodes a list (modified)", () =>
    Expect.(
      expect(
        Problem11.encode([
          "a",
          "a",
          "a",
          "a",
          "b",
          "c",
          "c",
          "a",
          "a",
          "d",
          "e",
          "e",
          "e",
          "e",
        ]),
      )
      |> toEqual(
           Problem11.[
             Many(4, "a"),
             One("b"),
             Many(2, "c"),
             Many(2, "a"),
             One("d"),
             Many(4, "e"),
           ],
         )
    )
  )
);

describe("Problem12", () =>
  test("Length decodes a list", () =>
    Expect.(
      expect(
        Problem12.decode([
          Many(4, "a"),
          One("b"),
          Many(2, "c"),
          Many(2, "a"),
          One("d"),
          Many(4, "e"),
        ]),
      )
      |> toEqual([
           "a",
           "a",
           "a",
           "a",
           "b",
           "c",
           "c",
           "a",
           "a",
           "d",
           "e",
           "e",
           "e",
           "e",
         ])
    )
  )
);

describe("Problem13", () =>
  test("Length encodes a list (direct)", () =>
    Expect.(
      expect(
        Problem13.encode([
          "a",
          "a",
          "a",
          "a",
          "b",
          "c",
          "c",
          "a",
          "a",
          "d",
          "e",
          "e",
          "e",
          "e",
        ]),
      )
      |> toEqual(
           Problem13.[
             Many(4, "a"),
             One("b"),
             Many(2, "c"),
             Many(2, "a"),
             One("d"),
             Many(4, "e"),
           ],
         )
    )
  )
);

describe("Problem14", () =>
  test("Duplicate the elements of a list", () =>
    Expect.(
      expect(Problem14.duplicate(["a", "b", "c", "c", "d"]))
      |> toEqual(["a", "a", "b", "b", "c", "c", "c", "c", "d", "d"])
    )
  )
);

describe("Problem15", () =>
  test("Replicate the elements of a list a given number of times", () =>
    Expect.(
      expect(Problem15.replicate(["a", "b", "c"], 3))
      |> toEqual(["a", "a", "a", "b", "b", "b", "c", "c", "c"])
    )
  )
);

describe("Problem16", () =>
  test("Drop every N'th element from a list", () =>
    Expect.(
      expect(
        Problem16.drop(
          ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j"],
          3,
        ),
      )
      |> toEqual(["a", "b", "d", "e", "g", "h", "j"])
    )
  )
);

describe("Problem17", () =>
  test("Splits a list with given n", () =>
    Expect.(
      expect(
        Problem17.split(
          ["a", "b", "c", "d", "e", "f", "g", "h", "i", "j"],
          3,
        ),
      )
      |> toEqual((["a", "b", "c"], ["d", "e", "f", "g", "h", "i", "j"]))
    )
  )
);
