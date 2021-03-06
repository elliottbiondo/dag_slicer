#include "dag_slicer.hpp"

Dag_Slicer::Dag_Slicer( std::string file_to_slice, int ax, double coordinate, bool by_grp )
  : axis(ax), filename(file_to_slice), coord(coordinate), by_group(by_grp), verbose(false), debug(false){}

  Dag_Slicer::~Dag_Slicer()
  {
  }
  
  void Dag_Slicer::create_slice()
  {
    slice_x_pnts.clear(); 
    slice_y_pnts.clear(); 
    path_coding.clear();
    slice_faceted_model_out( filename, axis, coord, slice_x_pnts, slice_y_pnts, path_coding, group_names, by_group, verbose, debug);
    
  }  
  
