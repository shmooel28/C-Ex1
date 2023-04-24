# Star Tracker

Shmuel Ben David - 208916437

Bar Nahmias - 312429327

add photo#############

The star tracker problem is the task of determining the spacecraft's attitude (orientation) by comparing the star patterns observed by an on-board camera with those in a star catalog, while accounting for various sources of error such as noise, distortion, and variations in the camera's pointing.

Determining the spacecraft's attitude accurately is crucial for performing many space missions such as Earth observation, satellite imaging, and deep space exploration. A small error in attitude determination can result in significant errors in the positioning, pointing, and navigation of the spacecraft, leading to mission failure or reduced scientific return. The star tracker is a reliable and accurate technology for determining the spacecraft's attitude and is widely used in many space missions.

we uses the SIFT algorithm to detect keypoints and compute descriptors for two input images.

It then performs matching between the descriptors using the FLANN-based matcher with Lowe's ratio test to find the good matches.

Then we draws the matches on the images and writes the corresponding coordinates of the matched keypoints to a CSV file.

To run this code, you need to have the two input images ('s1.png' and 's2.png') in the same directory as the script. You also need to have OpenCV installed in your environment.

Once you run the script, it will display the matched keypoints on the images and wait for a key press. Once you press a key, the program will exit and the matched keypoints will be written to the 'coordinates.csv' file in the same directory as the script.

examples:

###### photo

####### table

###### photo

###### table

###### photo

##### table
