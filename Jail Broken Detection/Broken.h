//
//  Broken.h
//  JailBroken
//
//  Created by Madan, Bunty on 29/07/17.
//  Copyright © 2017 Bunty Madan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Broken : NSObject
- (float)firmwareVersion;
- (BOOL) isDeviceJailbroken;
- (BOOL) isAppVersionCracked;
- (BOOL) isAppStoreVersion;
@end
