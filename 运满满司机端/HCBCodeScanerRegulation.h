//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface HCBCodeScanerRegulation : NSObject
{
    CDUnknownBlockType _rule;
    unsigned long long _priority;
    CDUnknownBlockType _handler;
}

+ (id)regulationWithRule:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;
+ (id)regulationWithPriority:(unsigned long long)arg1 rule:(CDUnknownBlockType)arg2 handler:(CDUnknownBlockType)arg3;
@property(readonly, copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(readonly, nonatomic) unsigned long long priority; // @synthesize priority=_priority;
@property(readonly, copy, nonatomic) CDUnknownBlockType rule; // @synthesize rule=_rule;
- (void).cxx_destruct;
- (void)handle:(id)arg1 sender:(id)arg2;
- (_Bool)matches:(id)arg1;
- (id)initWithWithPriority:(unsigned long long)arg1 rule:(CDUnknownBlockType)arg2 handler:(CDUnknownBlockType)arg3;
- (id)initWithRule:(CDUnknownBlockType)arg1 handler:(CDUnknownBlockType)arg2;

@end

