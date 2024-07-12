function board_extrude_1_outline_fn(){
    return new CSG.Path2D([[162.1059994,-56.7901339],[106.1575658,-56.7901339]]).appendPoint([92.5982673,-43.7888715]).appendPoint([-15.0966193,5.5422998]).appendPoint([-8.4082435,50.2952676]).appendPoint([46.3946874,66.4692567]).appendPoint([68.7359379,66.0585296]).appendPoint([127.3017095,45.450882]).appendPoint([140.9618557,45.450882]).appendPoint([199.5276273,66.0585296]).appendPoint([221.8688778,66.4692567]).appendPoint([276.6718087,50.2952676]).appendPoint([283.3601845,5.5422998]).appendPoint([175.6652979,-43.7888715]).appendPoint([162.1059994,-56.7901339]).close().innerToCAG()
.extrude({ offset: [0, 0, 1] });
}




                function bottom_case_fn() {
                    

                // creating part 0 of case bottom
                let bottom__part_0 = board_extrude_1_outline_fn();

                // make sure that rotations are relative
                let bottom__part_0_bounds = bottom__part_0.getBounds();
                let bottom__part_0_x = bottom__part_0_bounds[0].x + (bottom__part_0_bounds[1].x - bottom__part_0_bounds[0].x) / 2
                let bottom__part_0_y = bottom__part_0_bounds[0].y + (bottom__part_0_bounds[1].y - bottom__part_0_bounds[0].y) / 2
                bottom__part_0 = translate([-bottom__part_0_x, -bottom__part_0_y, 0], bottom__part_0);
                bottom__part_0 = rotate([0,0,0], bottom__part_0);
                bottom__part_0 = translate([bottom__part_0_x, bottom__part_0_y, 0], bottom__part_0);

                bottom__part_0 = translate([0,0,0], bottom__part_0);
                let result = bottom__part_0;
                
            
                    return result;
                }
            
            
        
            function main() {
                return bottom_case_fn();
            }

        