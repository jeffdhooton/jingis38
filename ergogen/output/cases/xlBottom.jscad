function xlBoard_extrude_1_outline_fn(){
    return new CSG.Path2D([[163.0547151,-63.938556],[105.2088501,-63.938556]]).appendPoint([94.1516706,-50.8306709]).appendPoint([-21.9175709,0.4950611]).appendPoint([-13.7511011,55.1381875]).appendPoint([43.7980879,72.1523607]).appendPoint([66.4403277,71.8697406]).appendPoint([133.9292453,51.4571928]).appendPoint([134.3343199,51.4571928]).appendPoint([201.8232375,71.8697406]).appendPoint([224.4654773,72.1523607]).appendPoint([282.0146663,55.1381875]).appendPoint([290.1811361,0.4950611]).appendPoint([174.1118946,-50.8306709]).appendPoint([163.0547151,-63.938556]).close().innerToCAG()
.extrude({ offset: [0, 0, 1] });
}




                function xlBottom_case_fn() {
                    

                // creating part 0 of case xlBottom
                let xlBottom__part_0 = xlBoard_extrude_1_outline_fn();

                // make sure that rotations are relative
                let xlBottom__part_0_bounds = xlBottom__part_0.getBounds();
                let xlBottom__part_0_x = xlBottom__part_0_bounds[0].x + (xlBottom__part_0_bounds[1].x - xlBottom__part_0_bounds[0].x) / 2
                let xlBottom__part_0_y = xlBottom__part_0_bounds[0].y + (xlBottom__part_0_bounds[1].y - xlBottom__part_0_bounds[0].y) / 2
                xlBottom__part_0 = translate([-xlBottom__part_0_x, -xlBottom__part_0_y, 0], xlBottom__part_0);
                xlBottom__part_0 = rotate([0,0,0], xlBottom__part_0);
                xlBottom__part_0 = translate([xlBottom__part_0_x, xlBottom__part_0_y, 0], xlBottom__part_0);

                xlBottom__part_0 = translate([0,0,0], xlBottom__part_0);
                let result = xlBottom__part_0;
                
            
                    return result;
                }
            
            
        
            function main() {
                return xlBottom_case_fn();
            }

        