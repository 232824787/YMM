//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBMonitorEvent;

@interface HCBMonitorDataConstructor : NSObject
{
    HCBMonitorEvent *_event;
}

+ (id)dataConstructorWithEvent:(id)arg1;
@property(readonly, nonatomic) HCBMonitorEvent *event; // @synthesize event=_event;
- (void).cxx_destruct;
- (id)initWithEvent:(id)arg1;
- (id)generateData;
- (id)data;

@end

