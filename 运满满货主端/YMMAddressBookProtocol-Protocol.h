//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@protocol YMMAddressBookProtocol <NSObject>
- (_Bool)isUserAuthorizationStatusDenied;
- (NSMutableArray *)loadPreson;
- (void)addressBookAuthorizationStatus:(void (^)(_Bool))arg1;
@end

