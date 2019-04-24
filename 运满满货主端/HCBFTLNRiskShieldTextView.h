//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSString;

@interface HCBFTLNRiskShieldTextView : UITextView
{
    NSString *_riskShieldTrackedPageID;
    NSString *_riskShieldTrackedViewId;
    NSString *_trakedEventName;
}

@property(copy, nonatomic) NSString *trakedEventName; // @synthesize trakedEventName=_trakedEventName;
@property(copy, nonatomic) NSString *riskShieldTrackedViewId; // @synthesize riskShieldTrackedViewId=_riskShieldTrackedViewId;
@property(copy, nonatomic) NSString *riskShieldTrackedPageID; // @synthesize riskShieldTrackedPageID=_riskShieldTrackedPageID;
- (void).cxx_destruct;
- (void)deleteBackward;
- (void)copy:(id)arg1;
- (void)selectAll:(id)arg1;
- (void)select:(id)arg1;
- (void)paste:(id)arg1;
- (void)cut:(id)arg1;
- (void)p_enter:(id)arg1;
- (void)p_textChanged:(id)arg1;
- (void)p_recordInputEventWithName:(id)arg1;
- (void)p_setup;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (void)dealloc;

@end

