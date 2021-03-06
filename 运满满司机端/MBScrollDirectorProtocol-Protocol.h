//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MBScrollDirector, UIScrollView;

@protocol MBScrollDirectorProtocol <NSObject>

@optional
- (void)innerScrollViewDidEndDragging:(UIScrollView *)arg1 willDecelerate:(_Bool)arg2 director:(MBScrollDirector *)arg3;
- (void)innerScrollViewDidEndDecelerating:(UIScrollView *)arg1 director:(MBScrollDirector *)arg2;
- (void)innerScrollViewWillBeginDragging:(UIScrollView *)arg1 director:(MBScrollDirector *)arg2;
- (void)innerScrollViewDidScroll:(UIScrollView *)arg1 director:(MBScrollDirector *)arg2;
@end

