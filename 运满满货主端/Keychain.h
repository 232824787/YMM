//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface Keychain : NSObject
{
    NSString *_username;
    NSString *_password;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)keychain;
@property(readonly, copy, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, copy, nonatomic) NSString *username; // @synthesize username=_username;
- (void).cxx_destruct;
- (void)erase;
- (void)save;
- (void)saveInfo:(id)arg1;
- (void)hook;
- (void)reload;
- (id)init;

@end

