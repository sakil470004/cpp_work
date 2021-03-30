alias getdate='date | tee /home/s/fulldate.txt | cut --delimiter=" " --fields=1 | tee /home/s/shortdate.txt |xargs echo hello'
alias calmagic='xargs cal -A 1 -B 1  >  /home/s/thing.txt'
alias calshow='cal -A 1 -B 1'
alias 'path-dir'='pwd'
