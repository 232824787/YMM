//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SetHeadImageViewController, UIImage;

@protocol setHeadImageDelegate <NSObject>

@optional
- (_Bool)didCancelled:(int)arg1;
- (int)didFinishedSetUserLocalPic:(SetHeadImageViewController *)arg1 image:(UIImage *)arg2 fileName:(NSString *)arg3;
@end

