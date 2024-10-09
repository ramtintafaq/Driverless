
# Algorithm Explanation

First, I connect all the obstacles (cones) together with straight lines, as shown in the figure, to define the boundaries that the car must not cross. These boundaries are represented by the black lines.

Next, I start moving along the positive X-axis (as shown by the green lines) until I reach the black boundary lines. Once I reach a boundary, I move vertically along the positive Y-axis to reach the blue obstacles. Then, I continue moving again along the positive X-axis until I encounter the red obstacles. I repeat this pattern to move through the path.

At certain points, I encounter sharp turns or changes in direction, which I indicate with purple points (corners of the path).

To smooth the path, I find the middle points between the purple points and connect them with straight lines, shown in orange. These new lines represent a more straightforward path for the car to follow.

Finally, starting from the red dot (the car's starting position), the car follows the red line step by step, moving toward the orange lines, ensuring that it avoids all obstacles and stays within the boundaries.

![Algorithm Path](image.png)
