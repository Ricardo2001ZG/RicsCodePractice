var
  m,n,i,j,l,u,v:longint;
  a:array[1..50,1..50]of integer;
  f:array[1..100,1..50,1..50]of longint;
 
procedure max(var a:longint;b:longint);
begin
  if b>a then a:=b;
end;
 
begin
  assign(input,'message.in');reset(input);
  assign(output,'message.out');rewrite(output);

  readln(m,n);
  for i:=1 to m do
    for j:=1 to n do read(a[j,i]);
  if (m=1)or(n=1) then begin write(0); exit; end;
  f[3,1,2]:=a[1,2]+a[2,1];
  for l:=3 to m+n-2 do
  begin
    if l>m then u:=l-m else u:=1;
    if l-1<n then v:=l-1 else v:=n;
    for i:=u to v-1 do
      for j:=i+1 to v do
      begin
        if j<n then max(f[l+1,i+1,j+1],f[l,i,j]+a[j+1,l-j]+a[i+1,l-i]);
        if l-i<m then max(f[l+1,i,j],f[l,i,j]+a[j,l-j+1]+a[i,l-i+1]);
        if (j<n)and(l-i<m) then max(f[l+1,i,j+1],f[l,i,j]+a[j+1,l-j]+a[i,l-i+1]);
        if j-i>1 then max(f[l+1,i+1,j],f[l,i,j]+a[j,l-j+1]+a[i+1,l-i]);
      end;
  end;
  write(f[m+n-1,n-1,n]);

  close(input);close(output);
end.
