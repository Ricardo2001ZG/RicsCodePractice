{
作者:Ricardo2001zg
题目:p1068 乌龟棋
}
var n,m,a,b,c,d,t:longint;
card:array[1..4]of longint;
ms:array[1..350]of longint;
mans:array[0..40,0..40,0..40,0..40]of longint;
begin
readln(n,m);
for t:=1 to n do read(ms[t]);
for t:=1 to m do
        begin
        read(a);
        inc(card[a]);
        end;
for a:=0 to card[1] do
        for b:=0 to card[2] do
                for c:=0 to card[3] do
                        for d:=0 to card[4] do
                        begin
                        t:=0;
                        if a>0 then t:=mans[a-1,b,c,d];
                        if b>0 then
                                if t<mans[a,b-1,c,d] then t:=mans[a,b-1,c,d];
                        if c>0 then
                                if t<mans[a,b,c-1,d] then t:=mans[a,b,c-1,d];
                        if d>0 then
                                if t<mans[a,b,c,d-1] then t:=mans[a,b,c,d-1];
                        mans[a,b,c,d]:=t+ms[a+b*2+c*3+d*4+1];
                        end;
writeln(mans[a,b,c,d]);
end.