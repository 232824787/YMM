//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface HCBFTLNRiskShieldUIInputEvent : NSObject
{
    NSString *_pageID;
    NSString *_viewId;
    NSString *_eventName;
    NSString *_value;
    double _tune;
    long long _count;
}

@property(nonatomic) long long count; // @synthesize count=_count;
@property(nonatomic) double tune; // @synthesize tune=_tune;
@property(copy, nonatomic) NSString *value; // @synthesize value=_value;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSString *viewId; // @synthesize viewId=_viewId;
@property(copy, nonatomic) NSString *pageID; // @synthesize pageID=_pageID;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

