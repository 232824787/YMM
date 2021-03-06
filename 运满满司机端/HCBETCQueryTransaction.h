//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBETCModel.h"

#import "HCBETCContextRender.h"

@class NSString;

@interface HCBETCQueryTransaction : HCBETCModel <HCBETCContextRender>
{
    NSString *_terminalNumber;
    NSString *_amount;
    NSString *_date;
}

@property(readonly, nonatomic) NSString *date; // @synthesize date=_date;
@property(readonly, nonatomic) NSString *amount; // @synthesize amount=_amount;
@property(readonly, nonatomic) NSString *terminalNumber; // @synthesize terminalNumber=_terminalNumber;
- (void).cxx_destruct;
- (void)renderInContext:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

