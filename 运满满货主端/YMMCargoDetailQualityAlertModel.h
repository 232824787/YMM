//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

#import "YMMCargoDetailQualityAlertProtocol.h"

@class NSNumber, NSString;

@interface YMMCargoDetailQualityAlertModel : YMMCommonModel <YMMCargoDetailQualityAlertProtocol>
{
    float _height;
    NSString *_name;
    NSString *_text;
    NSNumber *_isAppendAgree;
    NSString *_mybAgreeUrl;
    struct CGRect _frame;
}

@property(nonatomic) struct CGRect frame; // @synthesize frame=_frame;
@property(nonatomic) float height; // @synthesize height=_height;
@property(copy, nonatomic) NSString *mybAgreeUrl; // @synthesize mybAgreeUrl=_mybAgreeUrl;
@property(retain, nonatomic) NSNumber *isAppendAgree; // @synthesize isAppendAgree=_isAppendAgree;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)jumpSchemeUrl;
- (_Bool)canJump;
- (id)detailText;
- (id)title;
- (void)calculateHeight;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

