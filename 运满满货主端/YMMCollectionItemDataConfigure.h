//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, NSURL, UIImage;

@interface YMMCollectionItemDataConfigure : NSObject
{
    unsigned long long _style;
    NSString *_receiverName;
    NSString *_receiverAvatar;
    NSString *_content;
    UIImage *_image;
    NSURL *_imageUrl;
    double _lat;
    double _lng;
    NSString *_addressTitle;
    NSString *_addressSubTitle;
}

@property(copy, nonatomic) NSString *addressSubTitle; // @synthesize addressSubTitle=_addressSubTitle;
@property(copy, nonatomic) NSString *addressTitle; // @synthesize addressTitle=_addressTitle;
@property(nonatomic) double lng; // @synthesize lng=_lng;
@property(nonatomic) double lat; // @synthesize lat=_lat;
@property(retain, nonatomic) NSURL *imageUrl; // @synthesize imageUrl=_imageUrl;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(copy, nonatomic) NSString *content; // @synthesize content=_content;
@property(copy, nonatomic) NSString *receiverAvatar; // @synthesize receiverAvatar=_receiverAvatar;
@property(copy, nonatomic) NSString *receiverName; // @synthesize receiverName=_receiverName;
@property(nonatomic) unsigned long long style; // @synthesize style=_style;
- (void).cxx_destruct;

@end

