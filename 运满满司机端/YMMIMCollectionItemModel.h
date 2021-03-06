//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "YMMBaseModel.h"

@class NSDictionary, NSString, UIImage;

@interface YMMIMCollectionItemModel : YMMBaseModel
{
    NSString *_messageId;
    NSString *_mongoId;
    unsigned long long _favoriteType;
    long long _favoriteTime;
    NSString *_content;
    NSString *_url;
    double _lat;
    double _lng;
    double _gcjLat;
    double _gcjLng;
    NSDictionary *_extData;
    NSString *_addressName;
    NSString *_address;
    NSString *_thumbnail;
    NSString *_fromUid;
    NSString *_toUid;
    UIImage *_image;
}

@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *toUid; // @synthesize toUid=_toUid;
@property(copy, nonatomic) NSString *fromUid; // @synthesize fromUid=_fromUid;
@property(copy, nonatomic) NSString *thumbnail; // @synthesize thumbnail=_thumbnail;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *addressName; // @synthesize addressName=_addressName;
@property(copy, nonatomic) NSDictionary *extData; // @synthesize extData=_extData;
@property(nonatomic) double gcjLng; // @synthesize gcjLng=_gcjLng;
@property(nonatomic) double gcjLat; // @synthesize gcjLat=_gcjLat;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(copy, nonatomic) NSString *url; // @synthesize url=_url;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(nonatomic) long long favoriteTime; // @synthesize favoriteTime=_favoriteTime;
@property(nonatomic) unsigned long long favoriteType; // @synthesize favoriteType=_favoriteType;
@property(copy, nonatomic) NSString *mongoId; // @synthesize mongoId=_mongoId;
@property(copy, nonatomic) NSString *messageId; // @synthesize messageId=_messageId;
- (void).cxx_destruct;

@end

