//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL, UIImage, YMMIMVideoRecordVC;

@protocol YMMIMVideoRecordDelegate <NSObject>
- (void)didClickConfirmWithYMMIMVideoRecordVC:(YMMIMVideoRecordVC *)arg1 fileURL:(NSURL *)arg2 duration:(int)arg3 thumbnailImage:(UIImage *)arg4;
- (void)didClickCancelWithYMMIMVideoRecordVC:(YMMIMVideoRecordVC *)arg1;
@end

