<h1 style="text-align:center;"> AWS Lambda</p>

### 1. Prepare Lambda code

a. Create a Python Script as `lambda_function.py`
```python
import json

def lambda_handler(event, context):
    return {
        'statusCode': 200,
        'body': json.dumps('Hello from Lambda!')
    }
```

b. Zip the Code

```bash
zip function.zip lambda_function.py


```

### 2. Create an IAM Role for Lambda
Before deploying the Lambda function, create an IAM role with the required permissions.

a. Create a Trust Policy `trust-policy.json`
```json
{
  "Version": "2012-10-17",
  "Statement": [
    {
      "Effect": "Allow",
      "Principal": {
        "Service": "lambda.amazonaws.com"
      },
      "Action": "sts:AssumeRole"
    }
  ]
}
```

b. Create the Role and Attach the Policy
```bash
aws iam create-role --role-name LambdaBasicExecutionRole --assume-role-policy-document file://trust-policy.json
```

c. Attach the AWSLambdaBasicExecutionRole policy to allow logging:

```bash
aws iam attach-role-policy --role-name LambdaBasicExecutionRole --policy-arn arn:aws:iam::aws:policy/service-role/AWSLambdaBasicExecutionRole
```


### 3. Deploy the Lambda Function
Now, create the Lambda function using the AWS CLI.

a. Get the IAM Role ARN
```bash
aws iam get-role --role-name LambdaBasicExecutionRole --query 'Role.Arn' --output text
```

b. Create the Lambda Function
```bash
aws lambda create-function   --function-name MyLambdaFunction1   --runtime python3.13 --handler lambda_function.lambda_handler --zip-file fileb://function.zip --role  arn:aws:iam::<your-id-from-a>:role/LambdaBasicExecutionRole
```


### 4. Test the Lambda Function
```bash
aws lambda invoke --function-name MyLambdaFunction output.txt
```

### 5. Update the Lambda Function
If you make changes to lambda_function.py, re-zip it:

```bash 
zip function.zip lambda_function.py
```

Then update the Lambda code:
```bash
aws lambda update-function-code --function-name MyLambdaFunction --zip-file fileb://function.zip
```
### 6. Delete the Lambda Function (Optional)
If you want to remove the function:

```bash
aws lambda delete-function --function-name MyLambdaFunction
```
