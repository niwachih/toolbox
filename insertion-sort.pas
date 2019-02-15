program insertion-sort;
type
  IntegerArray = Array of Integer;
var
    data: array[0..15] of integer = (100,60,40,30,50,20,71,80,90,91,10,82,44,22,17,98);
    //CHIH: put global variables here

procedure myprintarray(somearray: Array of Integer);
var
    i: integer;
begin
  for i:= Low(somearray) to High(somearray) do
  begin
    writeln(somearray[i]);
  end;
end;
function insertionsort(somearray: IntegerArray): IntegerArray;
var
    hold: integer;
    walker: integer;
    current: integer;
    walkerkeep: integer;
begin
  for current:=1 to High(somearray) do
  begin
    hold := somearray[current];
    for walker:=current-1 downto 0 do
    begin
      if (hold < somearray[walker]) then
      //CHIH: walker is bigger then hold, so move right
      begin
         somearray[walker+1] := somearray[walker];
         walkerkeep := walker - 1;
      end
      else
      begin

      end;
    end;
    somearray[walkerkeep+1] := hold;
  end;
  insertionsort:=somearray;
end;

begin
    myprintarray(data);
    writeln();
    myprintarray(insertionsort(data));
    readln;
end.

