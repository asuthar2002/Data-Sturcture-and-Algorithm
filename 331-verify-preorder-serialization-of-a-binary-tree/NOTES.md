while (getline(ss, curr, ',')) {
nodes--;
if (nodes < 0) return false;
if (curr != "#") nodes += 2;
}
return nodes == 0;