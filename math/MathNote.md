# Math Note
## 1041. Robot Bounded In Circle
- Main Idea
    - If the robot is not facing North after the first cycle, then the robot will be back at the initial coordinate after 4 cycles.
    - If the robot is facing North after the first cycle:
        - If deltaX == 0 and deltaY == 0, the robot will still return to the original spot
        - Else, return false
- Proof
    - When robot faces North:
      - Add Delta X to x coordinate
      - Minus Delta 
    ```
                            ^
                            |
                            Delta Y
                            |
                            --------Delta X-------->

    ```
    - When robot faces South: 
      - Minus Delta X from x coordinate
      - Minus Delta Y from y coordinate
     ```
    <--------Delta X--------
                            |
                          Delta Y
                            |
                            v

    ```
    - When robot faces East:
      - Add Delta Y to x coordinate
      - Minus Delta X from y coordinate
    ```
                            |-Delta Y->
                            |
                            |
                            |
                          Delta X
                            |
                            |
                            |
                            v
    ```
    - When robot faces West:
      - Minus Delta Y from x coordinate
      - Add Delta X to y coordinate
    ```
                            ^
                            |
                            |
                            |
                          Delta X
                            |
                            |
                            |
                  <-Delta Y-
    ```

    - After the first cycle, the new coordinate of the robot will be:
      $x_1 = x + \Delta x$ 
      $y_1 = y + \Delta y$
    - Robot faces North after the first cycle: 
      $x_4 = x + 4 * \Delta x$
      $y_4 = y + 4 * \Delta y$
    - Robot faces South after the first cycle:
      $x_4 = x + \Delta x (N) - \Delta x (S) + \Delta x (N) - \Delta x (S) = x$
      $y_4 = x + \Delta y (N) - \Delta y (S) + \Delta y (N) - \Delta y (S) = y$
    - Robot faces East after the first cycle:
      $x_4 = x + \Delta x (N) + \Delta y (E) - \Delta x (S) - \Delta y (W) = x$
      $y_4 = x + \Delta y (N) - \Delta x (E) - \Delta y (S) + \Delta x (W) = y$
    - Robot faces West after the first cycle:
      $x_4 = x + \Delta x (N) - \Delta y (W) - \Delta x (S) + \Delta y (W) = x$
      $y_4 = x + \Delta y (N) + \Delta x (W) - \Delta y (S) - \Delta x (W) = y$

    
        
