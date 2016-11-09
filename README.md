How to deploy a Node.js program to Bluemix
==========================================

1.	First of all, you should have a Bluemix account. 

2.	Login your account and create a workspace.  Click the button upper right to scan your profile. Make sure you are in the US South Region.

3.	Click the “Create Application” button. 

4.	Select “Cloud Foundry App” in the left sidebar.  Click “SDK for Node.js”.

5.	Give a unique name for your app. Your app name will generate the host name automatically. 

6.  Click “Create” button lower right. The page jump to the “getting Started”. 

7.	Click the buttons to download and install both the Bluemix Command Line and the CF Command Line.

8.	Download our demo code on Git. 
https://github.com/CognitiveBuild/Thoth/raw/master/DriveCar.zip

9.	Extract the zip package and change the host name to yours.
  
  ① Open “index.html” under the public folder. Change the URL name.  
  
  ②Open the “manifest.yml” and change the name and host. The host name is same as your app name but be attention the first letter of the host name must be lowercase. 

10.	 Run some commands as the guide shown in the “Getting Started” page. No need to download the demo code in step 1. Just start from the step 2.

  ① cd your_new_directory(change directory to the git code which download in step 8).  
  
  ② cf api https://api.ng.bluemix.net  
  
  ③ cf login(login with your bluemix account and switch the workspace)  
  
  ④ cf push


 




