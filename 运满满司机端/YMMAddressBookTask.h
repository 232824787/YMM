//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonNetworkTask.h"

@class NSArray, NSNumber, NSString;

@interface YMMAddressBookTask : YMMCommonNetworkTask
{
    NSString *_uuid;
    NSNumber *_blockNumber;
    NSNumber *_all;
    NSArray *_list;
}

@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(retain, nonatomic) NSNumber *all; // @synthesize all=_all;
@property(retain, nonatomic) NSNumber *blockNumber; // @synthesize blockNumber=_blockNumber;
@property(retain, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;
- (void).cxx_destruct;
- (id)ymm_propertiesMap;
- (id)ymm_networkAPIPath;

@end

