//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseModel.h"

@class NSNumber, NSString;

@interface YMMServiceAdvertModel : YMMBaseModel
{
    NSNumber *_advertId;
    NSNumber *_positionCode;
    NSString *_pictureUrl;
    NSString *_url;
}

@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *pictureUrl; // @synthesize pictureUrl=_pictureUrl;
@property(retain, nonatomic) NSNumber *positionCode; // @synthesize positionCode=_positionCode;
@property(retain, nonatomic) NSNumber *advertId; // @synthesize advertId=_advertId;
- (void).cxx_destruct;

@end

