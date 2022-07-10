const match:array[0..9]of integer=(6,2,5,5,4,5,6,3,7,6);
  max=1111;m=24;
var
  n,i,j,ans:longint;
  f,y:array[0..max]of longint;
 
begin
  assign(input,'matches.in');reset(input);
  assign(output,'matches.out');rewrite(output);

  read(n);
  for i:=0 to 9 do f[i]:=match[i];
  for i:=10 to max do f[i]:=f[i div 10]+f[i mod 10];
  for i:=0 to max do
    for j:=0 to max do
      if i+j<=max then
        if f[i]+f[j]+f[i+j]+4=n then inc(ans);
  write(ans);

  close(input);close(output);
end.