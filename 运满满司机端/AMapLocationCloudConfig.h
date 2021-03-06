//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMapCacheFileManager, NSArray;

@interface AMapLocationCloudConfig : NSObject
{
    AMapCacheFileManager *_fileManager;
    NSArray *_allCheckInformation;
    _Bool _allowCheckAccessory;
}

+ (id)sharedCloudConfig;
- (void).cxx_destruct;
- (void)reloadLastCheckControl;
- (void)saveLastCheckControl;
- (_Bool)allowCheck;
- (id)checkInformations;
- (void)updateCheckControlWithResponse:(id)arg1;
- (void)setDefaultConfig;
- (void)initProperties;
- (void)dealloc;
- (id)init;

@end

