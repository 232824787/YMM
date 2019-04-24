//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSDictionary, NSString;

@interface EGEventInfoModel : NSObject <NSCoding>
{
    NSString *_eventId;
    NSString *_eventName;
    NSDictionary *_eventProperty;
    NSString *_eventTime;
    NSDate *_recordDate;
}

@property(retain, nonatomic) NSDate *recordDate; // @synthesize recordDate=_recordDate;
@property(copy, nonatomic) NSString *eventTime; // @synthesize eventTime=_eventTime;
@property(retain, nonatomic) NSDictionary *eventProperty; // @synthesize eventProperty=_eventProperty;
@property(copy, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
@property(copy, nonatomic) NSString *eventId; // @synthesize eventId=_eventId;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end

