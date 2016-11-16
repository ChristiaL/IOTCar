How to deploy a Node.js program to Bluemix
==========================================


1.	First of all, you should have a Bluemix account and a Git account. 

2.	Login your account and create a workspace. Click the button on the top right link to scan your profile. Make sure your ‘Region’ is in the US South.

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/1.png)

3.	Click the “Create Application” button. 

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/2.png)

4.	Select “Cloud Foundry App” in the left sidebar.  Click “SDK for Node.js”.

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/3.png)

5.	Named your app. Your app name will generate the host name automatically.

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/4.png)

6.	Click “Create” button in the bottom right. The page will jump to the “Getting Started” page.  
	
	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/5.png)
 
7.	Select “Overview” item from the menu on the left.  Click the button “Enable” on the right bottom page.

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/6.png)
	
8.	If you are a new user, you will enter a welcome page. Click “Get Started”to jump to next page. Select the agree checkbox and click “Enable”.	

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/added1.png)
	
	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/added2.png)
	
9.	Click “Create Toolchain from Template”. Select “Simple Cloud Foundry toolchain” in the next page.

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/added3.png)
	
	
10.	Click on “GitHub” button to Authorize the access to the GitHub, then you'll be navigated to GitHub website.

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/added5.png)
	
11.	On the Github, click on "Authorize application" button to grant the access form Bluemix DevOps service. 

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/added6.png)
	
12.	Type Github password to confirm the operation.

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/added7.png)	

13.	After authorization, select "Fork" as Repository type. Change the source repository URL to "https://github.com/ChristiaL/IOTCar". Click “Create”.
	
	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/added8.png)

14.	Select the second item “CODE” to explore the code on your git repository.

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/8.png)

15.	The code is missing some key code about sending data with socketIO which needs user to fill in. If you are not good at coding, please open the folder “document” to scan and copy the answer to the code.

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/10.png)

  1)	Open “index.html” under the public folder. Line 39,50,61,72 need to fill in a common method “socket.emit()”. The first parameter declares the data type is “String”. The second parameter defines the data is “w” or ”s” or ”a” or ”d”(up/down/left/right). 
  
	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/11.png)

  2)	Open “app.js” in the root directory. Fill in a method in line 35. The first parameter declares the data type is “message”. The second parameter defines the data is the parameter “key” in the callback function. 
  
	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/12.png)
	
  3)	Open “manifest.yml” in the root directory. Change the name and host name to yours.
  
	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/13.png)

16.	Back to the DevOps page (step 9). Click the third item(DELIVER). Click the start button on the top right in “Build Stage” field. After build success, click the start button on the right in “Deploy Stage”.  

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/14.png)

17.	 The last step, after deploy success, open your bluemix link (yourname.mybluemix.net) to view your new program. 

	![image](https://raw.githubusercontent.com/ChristiaL/IOTCar/master/public/images/15.png)

###Congratulations! You have successful deploy a node.js program to bluemix!

 



 




