//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@protocol YMMSelectedPicModelDelegate <NSObject>
@property(nonatomic) long long picSource;
@property(nonatomic) long long picType;
@property(copy, nonatomic) NSString *base64ImgStr;
@property(retain, nonatomic) UIImage *originImg;
@end

