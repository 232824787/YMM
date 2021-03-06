//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSArray, NSString;

@interface YMMSubscriptRefreshResultModel : YMMCommonModel
{
    _Bool _shipperMemberFlag;
    long long _pushTrigger;
    NSArray *_list;
    NSString *_notShipperMemberRemindTitle;
    NSString *_notShipperMemberRemindText;
    NSString *_wechatPublicAccountUrl;
    NSString *_customerServiceTelNum;
}

+ (Class)ymm_classForCollectionPropertyName:(id)arg1;
@property(copy, nonatomic) NSString *customerServiceTelNum; // @synthesize customerServiceTelNum=_customerServiceTelNum;
@property(copy, nonatomic) NSString *wechatPublicAccountUrl; // @synthesize wechatPublicAccountUrl=_wechatPublicAccountUrl;
@property(copy, nonatomic) NSString *notShipperMemberRemindText; // @synthesize notShipperMemberRemindText=_notShipperMemberRemindText;
@property(copy, nonatomic) NSString *notShipperMemberRemindTitle; // @synthesize notShipperMemberRemindTitle=_notShipperMemberRemindTitle;
@property(nonatomic) _Bool shipperMemberFlag; // @synthesize shipperMemberFlag=_shipperMemberFlag;
@property(retain, nonatomic) NSArray *list; // @synthesize list=_list;
@property(nonatomic) long long pushTrigger; // @synthesize pushTrigger=_pushTrigger;
- (void).cxx_destruct;

@end

