//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AMapNetworkOperation, NSDate;

@interface AMapSearchLoggerItem : NSObject
{
    AMapNetworkOperation *_operation;
    NSDate *_beginTime;
    NSDate *_endTime;
}

@property(retain, nonatomic) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain, nonatomic) NSDate *beginTime; // @synthesize beginTime=_beginTime;
@property(retain, nonatomic) AMapNetworkOperation *operation; // @synthesize operation=_operation;
- (void).cxx_destruct;

@end

