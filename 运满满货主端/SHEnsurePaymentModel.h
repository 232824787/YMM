//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSNumber, NSString;

@interface SHEnsurePaymentModel : YMMCommonModel
{
    _Bool _showProcess;
    NSNumber *_isSupportEnsurePay;
    NSString *_ensurePayMsg;
    NSString *_highlightMsg;
    NSNumber *_isShowNotUseMsg;
    NSString *_detailUrl;
    NSString *_noticeTips;
    NSString *_noticeUrl;
}

@property(nonatomic) _Bool showProcess; // @synthesize showProcess=_showProcess;
@property(copy, nonatomic) NSString *noticeUrl; // @synthesize noticeUrl=_noticeUrl;
@property(copy, nonatomic) NSString *noticeTips; // @synthesize noticeTips=_noticeTips;
@property(copy, nonatomic) NSString *detailUrl; // @synthesize detailUrl=_detailUrl;
@property(retain, nonatomic) NSNumber *isShowNotUseMsg; // @synthesize isShowNotUseMsg=_isShowNotUseMsg;
@property(copy, nonatomic) NSString *highlightMsg; // @synthesize highlightMsg=_highlightMsg;
@property(copy, nonatomic) NSString *ensurePayMsg; // @synthesize ensurePayMsg=_ensurePayMsg;
@property(retain, nonatomic) NSNumber *isSupportEnsurePay; // @synthesize isSupportEnsurePay=_isSupportEnsurePay;
- (void).cxx_destruct;

@end

