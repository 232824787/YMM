//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "YMMTelephoneProtocol.h"

@class NSDate, NSString, YMMTelephoneControl;

@interface YMMTelephoneManage : NSObject <YMMTelephoneProtocol>
{
    _Bool _start;
    NSDate *_startDate;
    unsigned long long _type;
    YMMTelephoneControl *_control;
    NSString *_cargoId;
    NSString *_telephone;
}

+ (id)shared;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *telephone; // @synthesize telephone=_telephone;
@property(retain, nonatomic) NSString *cargoId; // @synthesize cargoId=_cargoId;
@property(retain, nonatomic) YMMTelephoneControl *control; // @synthesize control=_control;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(nonatomic) _Bool start; // @synthesize start=_start;
- (void).cxx_destruct;
- (void)JournalForDuration:(id)arg1;
- (void)controlOver;
- (void)callOver;
- (void)callConneted;
- (void)callCancel;
- (void)startTelephoneForTelephone:(id)arg1 CargoId:(id)arg2;
- (void)startTelephone;
- (id)filterForTelephone:(id)arg1;
- (void)callPhone:(id)arg1;
- (void)reportCallHistory:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)getTelephonesFromID:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (id)customerServiceTelephone;
- (void)callCustomServiceNumber;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

