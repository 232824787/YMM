//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HCBETCCancelCardDetailModel, NSArray, NSAttributedString, NSDictionary, NSString, NSTimer;

@interface HCBETCCancelCardDetailViewModel : NSObject
{
    long long _status;
    NSString *_statusString;
    NSAttributedString *_subTitleString;
    NSAttributedString *_refundStatusString;
    NSArray *_colors;
    NSString *_iconImage;
    NSDictionary *_datas;
    double _headerColorViewHeight;
    NSString *_remainTimeString;
    HCBETCCancelCardDetailModel *_detailModel;
    NSTimer *_remainingTimer;
}

@property(retain, nonatomic) NSTimer *remainingTimer; // @synthesize remainingTimer=_remainingTimer;
@property(retain, nonatomic) HCBETCCancelCardDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) NSString *remainTimeString; // @synthesize remainTimeString=_remainTimeString;
@property(nonatomic) double headerColorViewHeight; // @synthesize headerColorViewHeight=_headerColorViewHeight;
@property(retain, nonatomic) NSDictionary *datas; // @synthesize datas=_datas;
@property(retain, nonatomic) NSString *iconImage; // @synthesize iconImage=_iconImage;
@property(retain, nonatomic) NSArray *colors; // @synthesize colors=_colors;
@property(retain, nonatomic) NSAttributedString *refundStatusString; // @synthesize refundStatusString=_refundStatusString;
@property(retain, nonatomic) NSAttributedString *subTitleString; // @synthesize subTitleString=_subTitleString;
@property(retain, nonatomic) NSString *statusString; // @synthesize statusString=_statusString;
@property(nonatomic) long long status; // @synthesize status=_status;
- (void).cxx_destruct;
- (void)dealloc;
- (void)timeMinus;
- (void)countDown;
- (id)initWithDetailModel:(id)arg1;

@end

