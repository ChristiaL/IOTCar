How to deploy a Node.js program to Bluemix
==========================================


1.	First of all, you should have a Bluemix account and a Git account. 

2.	Login your account and create a workspace.  Click the button upper right to scan your profile. Make sure you are in the US South Region. 

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/1.png)

3.	Click the “Create Application” button. 

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/2.png)

4.	Select “Cloud Foundry App” in the left sidebar.  Click “SDK for Node.js”.

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/3.png)

5.	Give a unique name for your app. Your app name will generate the host name automatically.  

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/4.png)

6.	Click “Create” button lower right. The page jump to the “getting Started”.  
	
	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/5.png)
 
7.	Select “Overview” in the left menu.  Click the button “Enable” lower right.

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/6.png)

8.	Select GitHub and give a name for your new repository. Click “Create”.

	Change the source repository URL to "https://github.com/ChristiaL/IOTCar".
	
	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/7.png)

9.	Select the second item “CODE” to scan the code on your git repository.

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/8.png)

10.	The code is missing some key code about sending data with socketIO which needs user to fill in. If you are not good at coding, please open the folder “document” to scan and copy the answer to the code.

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/10.png)

  1)	Open “index.html” under the public folder. Line 39,50,61,72 need to fill in a  common method “socket.emit()”. The first parameter declares the data type is “String”. The second parameter defines the data is “w” or ”s” or ”a” or ”d”(up/down/left/right). 
  
	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/11.png)

  2)	Open “app.js” in the root directory. Fill in a method in line 35. The first parameter declares the data type is “message”. The second parameter defines the data is the parameter “key” in the callback function. 
  
	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/12.png)
	
  3)	Open “manifest.yml” in the root directory. Change the name and host name to yours.
  
	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/13.png)

11.	Back to the DevOps page (step 9). Click the third item(DELIVER). Click the start button upper right in “Build Stage” field. After build success, click the start button upper right in “Deploy Stage”.  

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/14.png)

12.	 The last step, after deploy success, open your bluemix link (yourname.mybluemix.net) to scan your new program. 

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/15.png)

###Congratulations! You have successful deploy a node.js program to bluemix!

 



 




