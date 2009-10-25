#!/bin/bash -f

listdir=$1
cmst3dir=$2

echo "scanning $listdir"

#\ls $listdir | grep ".list" | awk -F "." '{print $1}' | xargs -i rfmkdir "$cmst3dir/{}"

\ls $listdir | grep ".list" | awk -F "." '{print $1}' > datasets.txt

ls $listdir | grep list | xargs -i head -n 1 "$listdir/{}" | awk -F "default" '{print $1}' > castordirs.txt

N=0
while read LINE ; do
    N=$((N+1))
    echo "Processing $LINE"
    names[${N}]=$LINE
done < datasets.txt

N=0
while read LINE ; do
    N=$((N+1))
    castornames[${N}]=$LINE
done < castordirs.txt

rm -f createscripts.txt

mkdir scriptscopy

for ((i=1;i<$N+1;i++)); do
    echo ./copyRemaining.sh ${castornames[${i}]} $cmst3dir/${names[${i}]} ${names[${i}]}.csh >> scriptscopy/createscripts.txt
done

rm -f datasets.txt
rm -f castordirs.txt

source createscripts.txt
