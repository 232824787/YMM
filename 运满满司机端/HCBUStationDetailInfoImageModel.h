//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "HCBUStationBaseModel.h"

@class NSArray, NSString;

@interface HCBUStationDetailInfoImageModel : HCBUStationBaseModel
{
    NSArray *_imageUrlList;
    NSString *_atlasTypeDesc;
    long long _imageCount;
    NSString *_imageUrl;
}

@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(nonatomic) long long imageCount; // @synthesize imageCount=_imageCount;
@property(copy, nonatomic) NSString *atlasTypeDesc; // @synthesize atlasTypeDesc=_atlasTypeDesc;
@property(copy, nonatomic) NSArray *imageUrlList; // @synthesize imageUrlList=_imageUrlList;
- (void).cxx_destruct;
- (id)init;

@end

