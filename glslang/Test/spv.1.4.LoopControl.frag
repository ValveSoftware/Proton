#version 450

#extension GL_EXT_control_flow_attributes : enable

bool cond;

void main()
{
        [[min_iterations(3), max_iterations(7)]]   for (int i = 0; i < 8; ++i) { }
        [[iteration_multiple(2)]]                  while(true) {  }
        [[peel_count(5)]]                          do {  } while(true);
        [[partial_count(4)]]                       for (int i = 0; i < 8; ++i) { }

        // warnings on all these
        [[min_iterations, max_iterations]]   for (int i = 0; i < 8; ++i) { }
        //[[iteration_multiple(0)]]                  while(true) {  }
        //[[peel_count]]                          do {  } while(true);
        //[[partial_count]]                       for (int i = 0; i < 8; ++i) { }
}
