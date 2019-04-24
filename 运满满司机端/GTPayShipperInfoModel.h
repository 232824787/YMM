//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMCommonModel.h"

@class NSNumber, NSString;

@interface GTPayShipperInfoModel : YMMCommonModel
{
    _Bool _isPictureAuth;
    NSString *_shipperName;
    NSString *_shipperTel;
    NSString *_picture;
    NSString *_pictureUrlString;
    NSNumber *_start;
    NSNumber *_end;
    id _userId;
    NSString *_formToRegionStr;
    NSString *_goodsInfoText;
    NSNumber *_orderAmount;
}

@property(retain, nonatomic) NSNumber *orderAmount; // @synthesize orderAmount=_orderAmount;
@property(copy, nonatomic) NSString *goodsInfoText; // @synthesize goodsInfoText=_goodsInfoText;
@property(copy, nonatomic) NSString *formToRegionStr; // @synthesize formToRegionStr=_formToRegionStr;
@property(retain, nonatomic) id userId; // @synthesize userId=_userId;
@property(retain, nonatomic) NSNumber *end; // @synthesize end=_end;
@property(retain, nonatomic) NSNumber *start; // @synthesize start=_start;
@property(copy, nonatomic) NSString *pictureUrlString; // @synthesize pictureUrlString=_pictureUrlString;
@property(nonatomic) _Bool isPictureAuth; // @synthesize isPictureAuth=_isPictureAuth;
@property(copy, nonatomic) NSString *picture; // @synthesize picture=_picture;
@property(copy, nonatomic) NSString *shipperTel; // @synthesize shipperTel=_shipperTel;
@property(copy, nonatomic) NSString *shipperName; // @synthesize shipperName=_shipperName;
- (void).cxx_destruct;

@end

