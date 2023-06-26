#include "polyscope/polyscope.h"
#include "polyscope/surface_mesh.h"

int main(int argc, char **argv) {

  // Initialize polyscope
  polyscope::init();

  // View the point cloud and mesh we just registered in the 3D UI
  polyscope::show();

  return EXIT_SUCCESS;
}