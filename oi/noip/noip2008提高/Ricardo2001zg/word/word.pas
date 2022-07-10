var i1,i2,maxn,minn:longint;
r:string;
n:array[1..26]of longint;
z:array[1..100]of boolean;
begin
z[2]:=true;z[3]:=true;z[5]:=true;z[7]:=true;z[11]:=true;
z[13]:=true;z[17]:=true;z[19]:=true;z[23]:=true;z[29]:=true;
z[31]:=true;z[37]:=true;z[41]:=true;z[43]:=true;z[47]:=true;
z[53]:=true;z[59]:=true;z[61]:=true;z[67]:=true;z[71]:=true;
z[73]:=true;z[79]:=true;z[83]:=true;z[89]:=true;z[97]:=true;
assign(input,'word.in');
assign(output,'word.out');
reset(input);
rewrite(output);

readln(r);
i2:=length(r);
maxn:=0;minn:=100;
for i1:=1 to i2 do n[ord(r[i1])-96]:=n[ord(r[i1])-96]+1;

for i1:=1 to 26 do begin
                   if n[i1]>maxn then maxn:=n[i1];
                   if (n[i1]<minn)and(n[i1]>0) then minn:=n[i1];
end;
if maxn=minn then begin
                  writeln('No Answer');
                  writeln('0');
                  end
             else if z[maxn-minn]=true then begin
                                            writeln('Lucky Word');
                                            writeln(maxn-minn);
                                            end
             else begin
                  writeln('No Answer');
                  writeln('0');
                  end;
close(input);
close(output);
end.

