How to deploy a Node.js program to Bluemix
==========================================

1.	First of all, you should have a Bluemix account and a Git account. 

2.	Login your account and create a workspace.  Click the button upper right to scan your profile. Make sure you are in the US South Region.

3.	Click the “Create Application” button. 

4.	Select “Cloud Foundry App” in the left sidebar.  Click “SDK for Node.js”.

5.	Give a unique name for your app. Your app name will generate the host name automatically.  

6.	Click “Create” button lower right. The page jump to the “getting Started”.  
 
7.	Select “Overview” in the left menu.  Click the button “Enable” lower right.

8.	Select GitHub and give a name for your new repository. Click “Create”.

9.	Select the second item “CODE” to scan your code on git. At this time, your  Node.js program is just empty. 

10.	Open a new tab with following link. 
https://github.com/ChristiaL/IOTCar
Click the button “Fork” upper right in this page. Select the repository you created just now to fork the demo code.

11.	Back to your Git page to scan the new demo code. Now the code is missing some key code about sending data with socketIO which needs user to fill in. If you are not good at coding, please open the folder “document” to scan and copy the answer to the code.

  1)	Open “index.html” under the public folder.  Fill in your Bluemix host name(step 5)  in line 17. Line 39,50,61,72 need to fill in a  common method “socket.emit()”. The first parameter declares the data type is “String”. The second parameter defines the data is “w” or ”s” or ”a” or ”d”(up/down/left/right).   

  2)	Open “app.js” in the root directory. Fill in a method in line 35. The first parameter declares the data type is “message”. The second parameter defines the data is the parameter “key” in the callback function. 
	
  3)	Open “manifest.yml” in the root directory. Change the name and host name to yours.

12.	Back to the DevOps page (step 9). Click the third item(DELIVER). Click the start button upper right in “Build Stage” field. After build success, click the start button upper right in “Deploy Stage”.  

13.	 The last step, after deploy success, open your bluemix link (yourname.mybluemix.net) to scan your new program. 


##Congratulations! You have successful deploy a node.js program to bluemix!

 



 




