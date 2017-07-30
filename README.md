# Developing Secure iOS Apps 

### About
The reason why the repo is here because secure coding is the practice of writing programs that are resistant to attack by malicious or mischievous people or programs. Secure coding helps protect a user’s data from theft or corruption.
    
### Need Contribution
For helping the community we need a day to day support from everyone, please feel free to post whatever you are learning day to day. Happy Learning!

### Swift Developer Meet
Talk at [@GoJek](https://www.meetup.com/SwiftBengaluru/events/241324289/). Posted all slides at [slideshare.net](https://www.slideshare.net/BuntyMadan/ios-security-secureiosguidelines-apple-ios-swift) or you can download from [GIT](https://github.com/buntylm/Secure-iOS-Guidelines/blob/master/iOS-Security.pptx)

### Secure-iOS-Guidelines

  - Avoid cached application
      - Caching of HTTP Request/Response, the default behavior will cache it into cache.db file
      - Drain sensitive data from device memory.
      - Prevent the backup for Keychain data and files with in document directory because if you take back up using iTunes it will sync it.
  - Detection device compatibility use above mentioned `Objective C` file for verifying.
  ```sh
      - (float) firmwareVersion;
      - (BOOL) isDeviceJailbroken;
      - (BOOL) isAppVersionCracked;
      - (BOOL) isAppStoreVersion;
  ```
  - Detection Debugger. Use above mentioned `Objective C`
  ```sh
      - (bool) AmIBeingDebugged;
  ```
  - User and Application data stored securely
      - SQLCipher
      - Keychain
      - Decryption key generation – Use iOS AES Crypto library 
  - Proper use of Keychain
      - Remove back up policies.
      - Use of protection classes
  - Prevent insecure ways of deletion the Data
  - Use of Authentication Token if making an HTTP request
  - Always Obscure sensitive value in UI
  - Certificate Pinning must be there
  - Sensitive data in Query string 
  - Disable logs if your using `NSLOG` or `print`
  - handle Request/Resource timeout properly
  - Insecure Backup, if taking back up of data/files/request make it secure.
  - Implement Anti tempering technique.
  - Detect the debugger attached or Trace checking.
  - Use of UIWebView to prevent framing.
