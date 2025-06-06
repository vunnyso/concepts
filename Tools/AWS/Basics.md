<h1 style="text-align:center;"> AWS CLI</p>

### AWS CLI
* AWS Command Line Interface (AWS CLI) is an open source tool that enables you to manage AWS services from the command line. 
* AWS CLI v2 is generally the better choice over AWS CLI v1, as it includes improvements, new features, and better security.

### AWS Installation
1. Follow instructuions mentioned here https://docs.aws.amazon.com/cli/latest/userguide/getting-started-install.html

2. Verify installation

   ```
   aws --version
   ```
3. Configure AWS CLI v2
   ```
   aws configure
   ```

   It will ask for, these details you can get from IAM in AWS console management
   ```
   AWS Access Key ID [None]: <Your Access Key>
   AWS Secret Access Key [None]: <Your Secret Key>
   Default region name [None]: ap-south-1
   Default output format [None]: json
   ```

4. Test AWS CLI
   ```
   aws s3 ls
   ```
   If it lists your S3 buckets, the setup was successful! 🚀
