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

