BOARD=tangprimer20k
FAMILY=GW2A-18
DEVICE=GW2A-LV18PG256C8/I7

# rm -rf obj_dir 
mkdir obj_dir

if [ -d "obj_dir" ]; then
    rm -r obj_dir/top.json obj_dir/top_pnr.json obj_dir/top.fs
fi

yosys -p "read_verilog *.v ; synth_gowin -noalu -nowidelut -top top -json obj_dir/top.json"

echo "------------------------------------------------25%------------------------------------------------"

if [ -f "obj_dir/top.json" ]; then
    nextpnr-gowin --json obj_dir/top.json --write obj_dir/top_pnr.json --freq 27 --enable-globals --enable-auto-longwires --device ${DEVICE} --cst ${BOARD}.cst
fi

echo "------------------------------------------------50%------------------------------------------------"

if [ -f "obj_dir/top_pnr.json" ]; then
    gowin_pack -d ${FAMILY} -o obj_dir/top.fs obj_dir/top_pnr.json
fi

echo "------------------------------------------------75%------------------------------------------------"


if [ -f "obj_dir/top.fs" ]; then
    openFPGALoader -b ${BOARD} obj_dir/top.fs -f
fi

echo "------------------------------------------------100%------------------------------------------------"