{
作者:Ricardo2001zg
题目:p4510 神奇的幻方 noip2015day1 T1
}
var k,n,i1,i2:longint;
t:array[1..3]of longint;
s:array[0..40,0..40]of longint;

begin
readln(n);
t[2]:=1;
t[3]:=(n div 2)+1;
s[t[2],t[3]]:=1;
for k:=2 to n*n do
        if (t[2]=1)and(t[3]<>n)
        then begin
             s[n,t[3]+1]:=k;
             t[2]:=n;
             inc(t[3])
             end
        else if (t[3]=n)and(t[2]<>1)
             then begin
                  s[t[2]-1,1]:=k;
                  dec(t[2]);
                  t[3]:=1;
                  end
             else if (t[2]=1)and(t[3]=n)
                  then begin
                       s[t[2]+1,t[3]]:=k;
                       inc(t[2]);
                       end
                  else if (t[2]<>1)and(t[3]<>n)
                       then if (s[t[2]-1,t[3]+1]=0)and(t[2]-1>0)and(t[3]+1<=n) then
                                begin
                                s[t[2]-1,t[3]+1]:=k;
                                dec(t[2]);
                                inc(t[3]);
                                end
                            else if (s[t[2]+1,t[3]-1]=0)and(t[2]+1<=n)and(t[3]-1>0) then
                                 begin
                                 s[t[2]+1,t[3]-1]:=k;
                                 inc(t[2]);
                                 dec(t[3]);
                                 end
                                 else if s[t[2]+1,t[3]]=0 then
                                      begin
                                      s[t[2]+1,t[3]]:=k;
                                      inc(t[2]);
                                      end;

for i1:=1 to n do
        begin
        for i2:=1 to n do write(s[i1,i2],' ');
        writeln;
        end;
end.