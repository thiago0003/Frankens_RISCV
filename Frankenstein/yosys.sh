BOARD=tangnano9k
FAMILY=GW1N-9C
DEVICE=GW1NR-LV9QN88PC6/I5

mkdir obj_dir

yosys -p "read_verilog *.v ; synth_gowin -noalu -nowidelut -top top -json obj_dir/top.json"

echo "------------------------------------------------25%------------------------------------------------"

if [ -f "obj_dir/top.json" ]; then
    nextpnr-gowin --json obj_dir/top.json --write obj_dir/top_pnr.json --freq 27 --enable-globals --enable-auto-longwires --device ${DEVICE} --family ${FAMILY} --cst ${BOARD}.cst
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


