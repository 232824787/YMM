//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface YMMGatherModule : NSObject
{
}

+ (void)ignoreAllNotification;
+ (void)ignoreUserIdentifierUpdate;
+ (void)ignoreSearverChanged;
+ (void)ignoreLocationsUpdate;
+ (void)didUpdateUserIdentifier;
+ (void)gatherLibChangeServer;
+ (void)didChangeServer:(id)arg1;
+ (void)didUpdateLocations:(id)arg1;
+ (void)setup;

@end

