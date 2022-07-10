var s:string;
    i,max,min,t:integer;
    a:array[1..26]of integer;
begin
assign(input,'word.in');reset(input);
assign(output,'word.out');rewrite(output);
 readln(s);
 for i:=1 to length(s) do
   inc(a[ord(s[i])-96]);
 min:=100;
 for i:=1 to 26 do
  begin
   if a[i]=0 then continue;
   if a[i]>max then max:=a[i];
   if a[i]<min then min:=a[i];
  end;
 t:=max-min;
 if t<=1 then begin writeln('No Answer');writeln('0');close(input);close(output);exit; end;
 for i:=2 to trunc(sqrt(t)) do
  if t mod i=0 then begin writeln('No Answer');writeln('0');close(input);close(output);exit; end;
 writeln('Lucky Word');
 writeln(t);
 close(input);close(output);
end.